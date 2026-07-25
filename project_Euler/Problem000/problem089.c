/*
 * Project Euler - Problem 89
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%2089
 * 
 * Problem 89 「ローマ数字」  †
 * ローマ数字の記法は一つの数について沢山ある場合が存在する (FAQを見よ).
 * しかし, ある数については最良の記法が必ず存在する.
 * 例えば, 16の正しい記法を全て並べてみる.
 * IIIIIIIIIIIIIIII
 * VIIIIIIIIIII
 * VVIIIIII
 * XIIIIII
 * VVVI
 * XVI
 * 最後の例は, 最小の文字数で表せるという意味で, 最も効率が良い.
 * 11Kのテキストファイルp089_roman.txt は1000個のローマ記法で書かれた数を含んでいる. これらは, 正しい記法に従っている.
 * 即ち, 大きい数から順に書かれていて, 引き算ペアのルールにも従っている(このルールについてはFAQを見よ) 但し,
 * 最小の文字数で表されているとは限らない.
 * 最小形で書いたときに, 何文字節約できるかを求めよ.
 * 注: ファイル中の全てのローマ数字には, 5つ以上の同じ文字が連続して含まれることはない.
 * ↑FAQ: ローマ数字のルール  †
 * (訳者:概略のみ与える)
 * IVXLCDM
 * 1510501005001000
 * ↑基本法則1  †
 * 全ての文字はサイズの降順に並ぶ
 * ↑基本法則2  †
 * 引き算ペアについて.
 * X (10) + IX (9) として19=XIXと表せる. ただし, 8をIIXと二文字以上を引くことは許されない.
 * I, X, Cのみが引き算ペアの最初の文字として許される.
 * IはVまたはXの前に来ることが許される
 * XはLまたはCの前に来ることが許される
 * CはDまたはMの前に来ることが許される
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 89\n");
    
    // TODO: Implement solution here
    
    return 0;
}
