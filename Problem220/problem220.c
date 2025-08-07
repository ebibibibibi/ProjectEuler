/*
 * Project Euler - Problem 220
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20220
 * 
 * Problem 220 「Heighwayのドラゴン」  †
 * D&sub{0}; を2文字の文字列"Fa"とする. n≥1では, DnはDn-1から以下の変換ルールに従い作られる.
 * "a" → "aRbFR"
 * "b" → "LFaLb"
 * つまり, D0="Fa", D1 = "FaRbFR", D2 = "FaRbFRRLFaLbFR",...となる.
 * これらの文字列はコンピューターグラフィックスプログラムへの命令と解釈できる:
 * "F"を"1ユニット前へ描け", "L"を"90度左を向け", "R"を"90度右を向け", "a"と"b"は無視する.
 * カーソルの初期位置は(0,0), 向きは(0,1)方向, つまり上とする.
 * Dnは n次の"Heighwayのドラゴン"(Heighway Dragon)として知られる奇妙な図となる. 例えば, 下図はD10である.
 * 各"F"を1ステップとして数えると, 500ステップ目で図中で強調してある(18,16)に到達する.
 * D50において1012ステップ後の座標を求めよ.
 * 回答は x,y という形式でスペースを入れずに入力せよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 220\n");
    
    // TODO: Implement solution here
    
    return 0;
}
