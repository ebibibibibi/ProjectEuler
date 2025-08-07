/*
 * Project Euler - Problem 127
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20127
 * 
 * Problem 127 「abc-hit」  †
 * n の根基 (radical) を rad(n) と書き, n の異なる素因数の積とする. 例えば, 504 = 23 32 7 なので
 * rad(504) = 2 × 3 × 7 = 42 である.
 * 正整数の3つ組 (a, b, c) が abc-hit であるとは
 * GCD(a, b) = GCD(b, c) = GCD(c, a) = 1
 * a < b
 * a + b = c
 * rad(abc) < c
 * の4つの性質を満たすことである.
 * (5, 27, 32) は abc-hit である:
 * GCD(5, 27) = GCD(5, 32) = GCD(27, 32) = 1
 * 5 < 27
 * 5 + 27 = 32
 * rad(4320) = 30 < 32
 * abc-hit は非常に稀である. c < 1000 のときには31個しかなく, そのときの ∑c は 12523 である.
 * c < 120000 での ∑c を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 127\n");
    
    // TODO: Implement solution here
    
    return 0;
}
