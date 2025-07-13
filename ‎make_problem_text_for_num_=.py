#!/usr/bin/env python3
"""
Project Euler Problem Fetcher for C Development
元のRubyスクリプトのC版 - 問題文を取得してCテンプレートファイルを生成
"""

import sys
import os
import time
import requests
from bs4 import BeautifulSoup
from urllib.parse import quote

def fetch_problem(problem_num):
    """指定された問題番号の問題文を取得してCファイルを生成"""
    
    # ファイル名生成 (3桁ゼロパディング)
    filename = f"problem{int(problem_num):03d}.c"
    
    # ファイル存在チェック
    if os.path.exists(filename):
        print("File already exists.")
        return False
    
    # URL構築
    base_url = "http://odz.sakura.ne.jp/projecteuler/index.php"
    page_param = f"Problem {problem_num}"
    url = f"{base_url}?cmd=read&page={quote(page_param)}"
    
    print(f"Fetching problem {problem_num}...")
    print(f"URL: {url}")
    
    try:
        # 1秒待機 (サーバー負荷軽減)
        time.sleep(1)
        
        # HTTP GET リクエスト
        headers = {
            'User-Agent': 'Project-Euler-Fetcher/1.0 (Educational Use)'
        }
        response = requests.get(url, headers=headers, timeout=10)
        response.raise_for_status()
        response.encoding = 'utf-8'
        
        # HTML解析
        soup = BeautifulSoup(response.text, 'html.parser')
        
        # body要素から問題文を抽出
        body_element = soup.find('div', {'id': 'body'}) or soup.find('div', {'class': 'body'})
        
        if not body_element:
            # フォールバック: より広範囲で検索
            body_element = soup.find('body')
            if not body_element:
                raise ValueError("Could not find problem content in HTML")
        
        # テキスト抽出と整形
        problem_text = body_element.get_text()
        problem_lines = [line.strip() for line in problem_text.split('\n') if line.strip()]
        
        # Cファイル生成
        generate_c_file(filename, problem_num, problem_lines, url)
        
        print(f"Created {filename}")
        return True
        
    except requests.exceptions.RequestException as e:
        print(f"Network error: {e}")
        return False
    except Exception as e:
        print(f"Error: {e}")
        return False

def generate_c_file(filename, problem_num, problem_lines, source_url):
    """Cファイルのテンプレートを生成"""
    
    with open(filename, 'w', encoding='utf-8') as f:
        # ヘッダーコメント
        f.write("/*\n")
        f.write(f" * Project Euler - Problem {problem_num}\n")
        f.write(f" * Source: {source_url}\n")
        f.write(" * \n")
        
        # 問題文をコメントとして挿入
        for line in problem_lines:
            # 長い行は適度に折り返し
            if len(line) > 75:
                words = line.split()
                current_line = " * "
                for word in words:
                    if len(current_line + word) > 75:
                        f.write(current_line + "\n")
                        current_line = " * " + word
                    else:
                        if len(current_line) > 3:
                            current_line += " "
                        current_line += word
                if len(current_line) > 3:
                    f.write(current_line + "\n")
            else:
                f.write(f" * {line}\n")
        
        f.write(" */\n\n")
        
        # C テンプレート
        f.write("#include <stdio.h>\n")
        f.write("#include <stdlib.h>\n")
        f.write("#include <string.h>\n")
        f.write("#include <math.h>\n")
        f.write("#include <stdbool.h>\n\n")
        
        # メイン関数テンプレート
        f.write("int main() {\n")
        f.write(f"    printf(\"Project Euler - Problem {problem_num}\\n\");\n")
        f.write("    \n")
        f.write("    // TODO: Implement solution here\n")
        f.write("    \n")
        f.write("    return 0;\n")
        f.write("}\n")

def check_robots_txt():
    """robots.txtをチェックして、スクレイピングが許可されているか確認"""
    try:
        response = requests.get("http://odz.sakura.ne.jp/robots.txt", timeout=5)
        if response.status_code == 200:
            print("robots.txt found:")
            print(response.text)
        else:
            print("robots.txt not found (404) - proceeding...")
    except:
        print("Could not check robots.txt - proceeding...")

def main():
    """メイン関数"""
    if len(sys.argv) < 2:
        print("Usage: python3 fetch_problem.py <problem_number>")
        print("Example: python3 fetch_problem.py 19")
        sys.exit(1)
    
    problem_num = sys.argv[1]
    
    # 問題番号の妥当性チェック
    try:
        problem_int = int(problem_num)
        if problem_int < 1 or problem_int > 999:
            print("Problem number should be between 1 and 999")
            sys.exit(1)
    except ValueError:
        print("Invalid problem number")
        sys.exit(1)
    
    # robots.txt確認 (初回のみ)
    if not os.path.exists(".robots_checked"):
        print("Checking robots.txt...")
        check_robots_txt()
        with open(".robots_checked", "w") as f:
            f.write("checked")
        print()
    
    # 問題取得
    success = fetch_problem(problem_num)
    
    if success:
        filename = f"problem{problem_int:03d}.c"
        print(f"\nNext steps:")
        print(f"1. Edit {filename} to implement your solution")
        print(f"2. Compile: gcc -o problem{problem_int:03d} {filename} -lm")
        print(f"3. Run: ./problem{problem_int:03d}")
    else:
        sys.exit(1)

if __name__ == "__main__":
    main()