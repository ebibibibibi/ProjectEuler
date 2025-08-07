/*
 * Project Euler - Problem 244
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20244
 * 
 * Problem 244 「スライダー」  †
 * おそらく15パズルはご存知だろう. ここでは, 数字の書かれたタイルの代わりに, 7枚の赤いタイルと8枚の青いタイルを使用する.
 * 移動は, タイルの動いた方向(Left, Right, Up, Down)の大文字のイニシャルで表す.
 * すなわち, 最初の状態 (S) から文字列 LULUR を経て状態 (E) にたどり着く.
 * (S)
 * ,
 * (E)
 * 各経路は, 以下に示す擬似コードによってチェックサムが計算される:
 * checksum = 0
 * checksum = (checksum × 243 + m&sub{1};) mod 100 000 007
 * checksum = (checksum × 243 + m&sub{2};) mod 100 000 007
 * …
 * checksum = (checksum × 243 + m&sub{n};) mod 100 000 007
 * m&sub{k}; は移動の文字列の k 番目の文字のアスキーコードの値である. アスキーコードは以下の通り:
 * L76
 * R82
 * U85
 * D68
 * 上で例に挙げた文字列 LULUR の場合, チェックサムは 19761398 になるだろう.
 * では, 状態 (S) から始めて, 状態 (T) に到達する最短の経路を全て求めよ.
 * (S)
 * ,
 * (T)
 * 最小の長さとなる経路のチェックサム全ての合計を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 244\n");
    
    // TODO: Implement solution here
    
    return 0;
}
