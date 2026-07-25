# 粛々とProjectEulerを解く

===
 * 本家…http://projecteuler.net/
 * 日本語サイト（ProjectEulerについて）…http://odz.sakura.ne.jp/projecteuler/index.php?Project%20Euler%E3%81%AB%E3%81%A4%E3%81%84%E3%81%A6

## リポジトリの仕組み

このリポジトリは特定のビルドシステム（Package.swift や Cargo.toml、CMakeLists.txt 等）を持たず、
問題ごとに **単一ソースファイルを直接コンパイル／実行する** シンプルな構成になっている。

- 1問 = 1ディレクトリ（`ProblemXXX/`）。ディレクトリ内に、その問題を解いた言語の数だけ
  `problemXXX.拡張子` ファイルが並ぶ（例: `problem001.c`, `problem001.swift`, `problem001.rs` ...）。
- 各ソースの冒頭コメントに、問題番号・出典URL・問題文（日本語）が埋め込まれている。
- 依存パッケージ管理・テストランナーの類は無い。各自ローカルの言語ツールチェーン
  （gcc/clang, swift, rustc, kotlinc 等）を使ってその場でコンパイル・実行する運用。
- `project_Euler/organize_problems.sh`
  カレントディレクトリ直下にフラットに置かれた `problemXXX.*` ファイルを、問題番号から
  `ProblemXXX/` フォルダを自動生成して振り分けるためのメンテナンス用シェルスクリプト。
- `project_Euler/fetch_problem.py` / `project_Euler/fetch_problem.c`
  ProjectEuler日本語サイト（odz.sakura.ne.jp）から問題文をスクレイピングし、
  `problemXXX.c`（Cのテンプレート雛形、TODO付き）を自動生成するツール。Python版はrequests+BeautifulSoup、
  C版はlibcurl依存。`.robots_checked` は robots.txt を確認済みであることを示すマーカーファイル。
  - 単一問題取得: `python3 project_Euler/fetch_problem.py <問題番号>`
  - 範囲取得: `python3 project_Euler/fetch_problem.py range <start> <end>`
  - 全問題取得: `python3 project_Euler/fetch_problem.py all`

## 格納されているプロジェクト

- `project_Euler/`
  ProjectEulerの各問題への解答本体。2024年時点で `Problem000`〜`Problem7xx` 台まで、
  約500ディレクトリ分のフォルダが存在（未着手・空のディレクトリも多く含む）。
  言語別ファイル数は概ね C(.c) が大半を占め、一部の問題のみ Swift(.swift)・Rust(.rs)・
  Kotlin(.kt)・Java(.java)・PHP(.php)・Literate Haskell(.lhs) の実装が追加されている。
  **C++(.cpp) の実装は現状まだ存在しない**（Cファイルのみ）。
- `世界で戦うプログラミング力を鍛える150問/`
  書籍「世界で戦うプログラミング力を鍛える150問」の演習用ディレクトリ。`Chapter_1`, `Chapter_2`
  のフォルダのみで、現状ソースはほぼ未着手（空に近い）。
- `参考リンク.md`
  ProjectEuler攻略にあたっての参考サイト一覧（先人の解法記事、Haskell wiki等）。

## 各言語での実行方法

ビルド設定ファイルが無いため、各ファイルを直接コンパイラ／インタプリタに渡して実行する。
以下は `ProblemXXX/problemXXX.<ext>` を例にしたコマンド。

### C
```sh
gcc -O2 -o problem001 project_Euler/Problem001/problem001.c -lm
./problem001
```

### C++
現状 `.cpp` ファイルは無いが、追加する場合は同様に単一ファイルとしてコンパイルする想定。
```sh
g++ -std=c++17 -O2 -o problem001 project_Euler/Problem001/problem001.cpp
./problem001
```

### Swift
Package.swift が無いため、スクリプトとして直接実行するか、単体でコンパイルする。
```sh
# スクリプトとして実行（コンパイル+実行を一度に行う。手軽だが起動が遅い）
swift project_Euler/Problem001/problem001.swift

# 事前コンパイルして実行（繰り返し実行するなら速い）
swiftc -O project_Euler/Problem001/problem001.swift -o problem001
./problem001
```

### Kotlin
Gradle等のビルド設定は無いため、`kotlinc` で直接jarを生成して実行する。
```sh
kotlinc project_Euler/Problem001/problem001.kt -include-runtime -d problem001.jar
java -jar problem001.jar
```

### Rust
Cargo.toml が無いため、`rustc` で単一ファイルとして直接コンパイルする（`cargo run` は不可）。
```sh
rustc -O project_Euler/Problem013/problem013.rs -o problem013
./problem013
```

## メンテナンス時の注意

- ファイルは基本的にテンプレート生成 or 手書きの単発コードで、CIやテストによる動作保証は無い。
  ソースによっては `main()` 内が `TODO` のままだったり、未使用関数・コンパイルエラーを含む
  ものが混在しているため、実行前に中身を確認すること。
- 新しい問題を追加する際は `problemXXX.<拡張子>`（3桁ゼロパディング）の命名規則を守ると
  `organize_problems.sh` でのフォルダ振り分け対象になる。