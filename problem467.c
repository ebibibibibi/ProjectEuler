/*
 * Project Euler - Problem 467
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20467
 * 
 * Problem 467 「スーパー整数」  †
 * 整数 n の数字が整数 s の数字の部分列
 * (ここで部分列とは別の数列から残りの要素の順番を変えることなくいくつかの要素を取り去ることで得られる数列のことである) になっているとき,
 * その整数 s は n のスーパー整数と呼ばれる.
 * 例えば, 2718281828 は 18828 のスーパー整数であり, 一方 314159 は 151 のスーパー整数ではない.
 * n 番目の素数を p(n), n 番目の合成数を c(n) としよう. 例えば, p(1) = 2, p(10) = 29, c(1) = 4,
 * そして c(10) = 18.
 * { p(i) : i ≥ 1 } = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, ...}
 * { c(i) : i ≥ 1 } = {4, 6, 8, 9, 10, 12, 14, 15, 16, 18, ...}
 * {p(i)} の数字根 (digital root) からなる数列を P&sup{D}; としよう ( 同様に C&sup{D}; は
 * {c(i)} によって定義される ):
 * P&sup{D}; = {2, 3, 5, 7, 2, 4, 8, 1, 5, 2, ...}
 * C&sup{D}; = {4, 6, 8, 9, 1, 3, 5, 6, 7, 9, ...}
 * P&sup{D}; の最初の n 個の要素を結合して生成される整数を P&sub{n}; としよう ( 同様に C&sub{n}; は
 * C&sup{D}; によって定義される ).
 * P&sub{10}; = 2357248152
 * C&sub{10}; = 4689135679
 * P&sub{n}; と C&sub{n}; に対し共にスーパー整数となる最も小さい正整数を f(n) としよう.
 * 例えば, f(10) = 2357246891352679, そして f(100) mod 1 000 000 007 = 771661825.
 * f(10 000) mod 1 000 000 007 を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 467\n");
    
    // TODO: Implement solution here
    
    return 0;
}
