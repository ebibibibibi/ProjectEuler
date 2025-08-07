#!/bin/bash

# Project Euler ファイル整理スクリプト
# 各問題ファイルを対応するフォルダに格納する

echo "Project Euler ファイル整理を開始します..."

# problem001.c, problem001.swift などのファイルを対象にする
for file in problem*.*; do
    # ファイルが存在するかチェック
    if [ -f "$file" ]; then
        # ファイル名から問題番号を抽出 (例: problem001.c → 001)
        problem_num=$(echo "$file" | grep -o 'problem[0-9]\+' | grep -o '[0-9]\+')
        
        # 3桁にゼロパディング
        problem_num_padded=$(printf "%03d" "$problem_num")
        
        # フォルダ名を生成 (例: Problem001)
        folder_name="Problem${problem_num_padded}"
        
        # フォルダが存在しない場合は作成
        if [ ! -d "$folder_name" ]; then
            mkdir "$folder_name"
            echo "フォルダ作成: $folder_name"
        fi
        
        # ファイルをフォルダに移動
        mv "$file" "$folder_name/"
        echo "移動: $file → $folder_name/"
    fi
done

echo ""
echo "整理完了！以下のフォルダが作成されました："
ls -d Problem*/ 2>/dev/null | head -10
if [ $(ls -d Problem*/ 2>/dev/null | wc -l) -gt 10 ]; then
    echo "... and more"
fi

echo ""
echo "各フォルダの中身の確認:"
for folder in Problem*/; do
    if [ -d "$folder" ]; then
        echo "$folder: $(ls "$folder" | tr '\n' ' ')"
    fi
done | head -5


