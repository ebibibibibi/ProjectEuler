/*
 * Project Euler - Problem 255
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20255
 * 
 * Problem 255 「丸め平方根」  †
 * 正整数 n の丸め平方根(rounded-square-root)を, n の平方根を一番近い整数に丸めたものと定義する.
 * 次の方法(本質的には整数論に適用したヘロンの方法)で n の丸め平方根が求まる:
 * d を数 n の桁数とする.
 * もし d が奇数なら, x&sub{0}; = 2 × 10&sup{(d-1)/2};
 * もし d が偶数なら, x&sub{0}; = 7 × 10&sup{(d-2)/2};
 * x&sub{k+1}; = x&sub{k}; になるまで
 * を繰り返す.
 * 例えば, n = 4321 の丸め平方根を求めてみよう.
 * n は4桁である, だから x&sub{0}; = 7 × 10&sup{(4-2)/2}; = 70 である.
 * x&sub{2}; = x&sub{1}; だから, ここで止める.
 * つまり, たった 2 回の繰り返しで, 4321 の丸め平方根は 66 であることがわかる
 * (実際の平方根は 65.7343137... である)
 * この方法を使うと繰り返しの回数は意外に少ない.
 * 例えば, 5 桁の整数(10,000 ≤ n ≤ 99,999) では平均 3.2102888889 である
 * (平均は小数点以下 10 桁に四捨五入した).
 * 上記の方法を用いて, 14 桁の数(10&sup{13}; ≤ n <
 * 10&sup{14};)の丸め平方根を求めるのに必要な繰り返しの回数の平均を求めよ.
 * 回答は小数点以下 10 桁に四捨五入せよ.
 * 注意: 記号 ⌊x⌋ と ⌈x⌉ はそれぞれ床関数と天井関数を表す.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 255\n");
    
    // TODO: Implement solution here
    
    return 0;
}
