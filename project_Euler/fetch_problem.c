/*
 * Project Euler Problem Fetcher for C Development (C Version)
 * Pythonスクリプトの完全C移植版
 * 
 * Dependencies:
 *   - libcurl (HTTP client)
 *   - 標準Cライブラリ
 * 
 * Compile:
 *   gcc -o fetch_problem fetch_problem.c -lcurl
 * 
 * Usage:
 *   ./fetch_problem 19
 *   ./fetch_problem all
 *   ./fetch_problem range 1 50
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <curl/curl.h>
#include <sys/stat.h>
#include <ctype.h>

#define MAX_URL_LENGTH 512
#define MAX_FILENAME_LENGTH 64
#define MAX_LINE_LENGTH 1024
#define MAX_RESPONSE_SIZE (1024 * 1024)  // 1MB

// HTTP レスポンス格納用構造体
struct http_response {
    char *data;
    size_t size;
};

// 戻り値の定義
typedef enum {
    RESULT_SUCCESS,
    RESULT_EXISTS,
    RESULT_NOT_FOUND,
    RESULT_NETWORK_ERROR,
    RESULT_ERROR
} fetch_result_t;

// コールバック関数：HTTP レスポンスを受信
static size_t write_callback(void *contents, size_t size, size_t nmemb, struct http_response *response) {
    size_t realsize = size * nmemb;
    
    // メモリ再割り当て
    char *ptr = realloc(response->data, response->size + realsize + 1);
    if (!ptr) {
        printf("Memory allocation failed\n");
        return 0;
    }
    
    response->data = ptr;
    memcpy(&(response->data[response->size]), contents, realsize);
    response->size += realsize;
    response->data[response->size] = '\0';
    
    return realsize;
}

// URLエンコーディング（簡易版）
void url_encode(const char *input, char *output, size_t output_size) {
    const char *hex = "0123456789ABCDEF";
    size_t pos = 0;
    
    for (int i = 0; input[i] && pos < output_size - 4; i++) {
        if (input[i] == ' ') {
            output[pos++] = '%';
            output[pos++] = '2';
            output[pos++] = '0';
        } else if (isalnum(input[i]) || input[i] == '-' || input[i] == '_' || 
                   input[i] == '.' || input[i] == '~') {
            output[pos++] = input[i];
        } else {
            output[pos++] = '%';
            output[pos++] = hex[(input[i] >> 4) & 15];
            output[pos++] = hex[input[i] & 15];
        }
    }
    output[pos] = '\0';
}

// ファイル存在チェック
int file_exists(const char *filename) {
    struct stat st;
    return (stat(filename, &st) == 0);
}

// 簡易HTML解析（<div id="body">の内容を抽出）
char* extract_body_content(const char *html) {
    const char *start_tag = "<div id=\"body\">";
    const char *end_tag = "</div>";
    
    char *start = strstr(html, start_tag);
    if (!start) {
        // フォールバック: <body>タグを探す
        start_tag = "<body>";
        end_tag = "</body>";
        start = strstr(html, start_tag);
        if (!start) {
            return NULL;
        }
    }
    
    start += strlen(start_tag);
    char *end = strstr(start, end_tag);
    if (!end) {
        return NULL;
    }
    
    size_t content_length = end - start;
    char *content = malloc(content_length + 1);
    if (!content) {
        return NULL;
    }
    
    strncpy(content, start, content_length);
    content[content_length] = '\0';
    
    return content;
}

// HTMLタグを除去（簡易版）
void strip_html_tags(char *text) {
    int reading = 1;
    char *write_ptr = text;
    
    for (char *read_ptr = text; *read_ptr; read_ptr++) {
        if (*read_ptr == '<') {
            reading = 0;
        } else if (*read_ptr == '>') {
            reading = 1;
        } else if (reading) {
            *write_ptr++ = *read_ptr;
        }
    }
    *write_ptr = '\0';
}

// 文字列から改行で分割してファイルに書き込み
void write_lines_as_comments(FILE *file, const char *text) {
    char *text_copy = strdup(text);
    char *line = strtok(text_copy, "\n\r");
    
    while (line) {
        // 前後の空白を除去
        while (isspace(*line)) line++;
        if (strlen(line) == 0) {
            line = strtok(NULL, "\n\r");
            continue;
        }
        
        // 行が長い場合は折り返し
        if (strlen(line) > 75) {
            char *word = strtok(line, " ");
            fprintf(file, " * ");
            int line_len = 3;
            
            while (word) {
                if (line_len + strlen(word) > 75) {
                    fprintf(file, "\n * %s", word);
                    line_len = 3 + strlen(word);
                } else {
                    if (line_len > 3) {
                        fprintf(file, " ");
                        line_len++;
                    }
                    fprintf(file, "%s", word);
                    line_len += strlen(word);
                }
                word = strtok(NULL, " ");
            }
            fprintf(file, "\n");
        } else {
            fprintf(file, " * %s\n", line);
        }
        
        line = strtok(NULL, "\n\r");
    }
    
    free(text_copy);
}

// Cファイルテンプレート生成
void generate_c_file(const char *filename, int problem_num, const char *problem_text, const char *source_url) {
    FILE *file = fopen(filename, "w");
    if (!file) {
        printf("Failed to create file: %s\n", filename);
        return;
    }
    
    // ヘッダーコメント
    fprintf(file, "/*\n");
    fprintf(file, " * Project Euler - Problem %d\n", problem_num);
    fprintf(file, " * Source: %s\n", source_url);
    fprintf(file, " * \n");
    
    // 問題文をコメントとして挿入
    write_lines_as_comments(file, problem_text);
    
    fprintf(file, " */\n\n");
    
    // Cテンプレート
    fprintf(file, "#include <stdio.h>\n");
    fprintf(file, "#include <stdlib.h>\n");
    fprintf(file, "#include <string.h>\n");
    fprintf(file, "#include <math.h>\n");
    fprintf(file, "#include <stdbool.h>\n\n");
    
    // メイン関数テンプレート
    fprintf(file, "int main() {\n");
    fprintf(file, "    printf(\"Project Euler - Problem %d\\n\");\n", problem_num);
    fprintf(file, "    \n");
    fprintf(file, "    // TODO: Implement solution here\n");
    fprintf(file, "    \n");
    fprintf(file, "    return 0;\n");
    fprintf(file, "}\n");
    
    fclose(file);
}

// robots.txt チェック
void check_robots_txt() {
    printf("Checking robots.txt...\n");
    
    CURL *curl = curl_easy_init();
    if (!curl) {
        printf("Could not check robots.txt - proceeding...\n");
        return;
    }
    
    struct http_response response = {0};
    curl_easy_setopt(curl, CURLOPT_URL, "http://odz.sakura.ne.jp/robots.txt");
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);
    curl_easy_setopt(curl, CURLOPT_TIMEOUT, 5L);
    
    CURLcode res = curl_easy_perform(curl);
    long response_code;
    curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &response_code);
    
    if (res == CURLE_OK && response_code == 200) {
        printf("robots.txt found:\n");
        printf("%s\n", response.data);
    } else {
        printf("robots.txt not found (404) - proceeding...\n");
    }
    
    if (response.data) free(response.data);
    curl_easy_cleanup(curl);
}

// 単一問題取得
fetch_result_t fetch_problem(int problem_num, int silent) {
    char filename[MAX_FILENAME_LENGTH];
    char url[MAX_URL_LENGTH];
    char encoded_param[64];
    char page_param[32];
    
    // ファイル名生成
    snprintf(filename, sizeof(filename), "problem%03d.c", problem_num);
    
    // ファイル存在チェック
    if (file_exists(filename)) {
        if (!silent) {
            printf("File already exists.\n");
        }
        return RESULT_EXISTS;
    }
    
    // URL構築
    snprintf(page_param, sizeof(page_param), "Problem %d", problem_num);
    url_encode(page_param, encoded_param, sizeof(encoded_param));
    snprintf(url, sizeof(url), 
             "http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=%s", 
             encoded_param);
    
    if (!silent) {
        printf("Fetching problem %d...\n", problem_num);
        printf("URL: %s\n", url);
    }
    
    // HTTP リクエスト実行
    CURL *curl = curl_easy_init();
    if (!curl) {
        if (!silent) printf("Failed to initialize CURL\n");
        return RESULT_ERROR;
    }
    
    struct http_response response = {0};
    curl_easy_setopt(curl, CURLOPT_URL, url);
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);
    curl_easy_setopt(curl, CURLOPT_USERAGENT, "Project-Euler-Fetcher/1.0 (Educational Use)");
    curl_easy_setopt(curl, CURLOPT_TIMEOUT, 10L);
    curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
    
    // サーバー負荷軽減
    sleep(1);
    
    CURLcode res = curl_easy_perform(curl);
    long response_code;
    curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &response_code);
    
    if (res != CURLE_OK || response_code != 200) {
        if (!silent) {
            printf("Network error: %s\n", curl_easy_strerror(res));
        }
        if (response.data) free(response.data);
        curl_easy_cleanup(curl);
        return RESULT_NETWORK_ERROR;
    }
    
    // HTML から問題文を抽出
    char *body_content = extract_body_content(response.data);
    if (!body_content) {
        if (!silent) printf("Could not find problem content\n");
        free(response.data);
        curl_easy_cleanup(curl);
        return RESULT_NOT_FOUND;
    }
    
    // HTMLタグ除去
    strip_html_tags(body_content);
    
    // 問題の存在チェック（簡易）
    if (strlen(body_content) < 100 || !strstr(body_content, "Problem")) {
        free(body_content);
        free(response.data);
        curl_easy_cleanup(curl);
        return RESULT_NOT_FOUND;
    }
    
    // Cファイル生成
    generate_c_file(filename, problem_num, body_content, url);
    
    if (!silent) {
        printf("Created %s\n", filename);
    }
    
    free(body_content);
    free(response.data);
    curl_easy_cleanup(curl);
    
    return RESULT_SUCCESS;
}

// 全問題一括取得
void fetch_all_problems(int start, int end) {
    printf("Fetching Project Euler problems %d-%d...\n", start, end);
    printf("This may take a while. Press Ctrl+C to cancel.\n\n");
    
    int success_count = 0, skip_count = 0, error_count = 0;
    
    // robots.txt確認
    if (!file_exists(".robots_checked")) {
        check_robots_txt();
        FILE *f = fopen(".robots_checked", "w");
        if (f) {
            fprintf(f, "checked");
            fclose(f);
        }
        printf("\n");
    }
    
    for (int problem_num = start; problem_num <= end; problem_num++) {
        char filename[MAX_FILENAME_LENGTH];
        snprintf(filename, sizeof(filename), "problem%03d.c", problem_num);
        
        // 既存ファイルはスキップ
        if (file_exists(filename)) {
            printf("Problem %3d: Already exists, skipping\n", problem_num);
            skip_count++;
            continue;
        }
        
        printf("Problem %3d: ", problem_num);
        fflush(stdout);
        
        fetch_result_t result = fetch_problem(problem_num, 1);  // silent = true
        
        switch (result) {
            case RESULT_SUCCESS:
                printf("✓ Success\n");
                success_count++;
                break;
            case RESULT_NOT_FOUND:
                printf("Not found (likely missing problem)\n");
                skip_count++;
                break;
            case RESULT_NETWORK_ERROR:
                printf("✗ Network error\n");
                error_count++;
                break;
            default:
                printf("✗ Error\n");
                error_count++;
                break;
        }
        
        // 追加の待機時間
        usleep(500000);  // 0.5秒
    }
    
    // 結果レポート
    printf("\n");
    for (int i = 0; i < 50; i++) printf("=");
    printf("\n");
    printf("Fetch completed!\n");
    printf("Success: %d\n", success_count);
    printf("Skipped: %d\n", skip_count);
    printf("Errors:  %d\n", error_count);
    printf("Total:   %d\n", success_count + skip_count + error_count);
    for (int i = 0; i < 50; i++) printf("=");
    printf("\n");
}

// 使用方法表示
void show_usage() {
    printf("Usage:\n");
    printf("  ./fetch_problem <problem_number>     # Single problem\n");
    printf("  ./fetch_problem all                 # All problems (1-885)\n");
    printf("  ./fetch_problem range <start> <end> # Range of problems\n");
    printf("\nExamples:\n");
    printf("  ./fetch_problem 19\n");
    printf("  ./fetch_problem all\n");
    printf("  ./fetch_problem range 1 50\n");
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        show_usage();
        return 1;
    }
    
    // CURL 初期化
    curl_global_init(CURL_GLOBAL_DEFAULT);
    
    if (strcmp(argv[1], "all") == 0) {
        // 全問題取得
        fetch_all_problems(1, 885);
    } else if (strcmp(argv[1], "range") == 0) {
        // 範囲指定
        if (argc != 4) {
            printf("Range command requires start and end numbers\n");
            printf("Example: ./fetch_problem range 1 50\n");
            curl_global_cleanup();
            return 1;
        }
        
        int start = atoi(argv[2]);
        int end = atoi(argv[3]);
        
        if (start < 1 || end > 999 || start > end) {
            printf("Invalid range. Start and end should be between 1-999, start <= end\n");
            curl_global_cleanup();
            return 1;
        }
        
        fetch_all_problems(start, end);
    } else {
        // 単一問題取得
        int problem_num = atoi(argv[1]);
        
        if (problem_num < 1 || problem_num > 999) {
            printf("Problem number should be between 1 and 999\n");
            curl_global_cleanup();
            return 1;
        }
        
        // robots.txt確認
        if (!file_exists(".robots_checked")) {
            check_robots_txt();
            FILE *f = fopen(".robots_checked", "w");
            if (f) {
                fprintf(f, "checked");
                fclose(f);
            }
            printf("\n");
        }
        
        fetch_result_t result = fetch_problem(problem_num, 0);  // silent = false
        
        if (result == RESULT_SUCCESS) {
            printf("\nNext steps:\n");
            printf("1. Edit problem%03d.c to implement your solution\n", problem_num);
            printf("2. Compile: gcc -o problem%03d problem%03d.c -lm\n", problem_num, problem_num);
            printf("3. Run: ./problem%03d\n", problem_num);
        } else if (result == RESULT_EXISTS) {
            printf("File already exists. Skipping...\n");
        } else {
            printf("Failed to fetch problem.\n");
            curl_global_cleanup();
            return 1;
        }
    }
    
    curl_global_cleanup();
    return 0;
}