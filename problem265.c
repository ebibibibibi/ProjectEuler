/*
 * Project Euler - Problem 265
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20265
 * 
 * Problem 265 「2進円」  †
 * 2&sup{N}; の2進数の数字は, 時計回りに N 桁連続する数字全てで網羅するように円状に並べることができる.
 * 例えば N=3 では, 回転を無視すると2 つの円状の配置が可能である.
 * 最初の配置では, 時計回りの3桁の数列は: 000, 001, 010, 101, 011, 111, 110, 100 である.
 * それぞれの円形の配置は, 全部が 0 であるような数列を最上位にして時計回りに数字をつなげることで, 1 つの数に変換できる.
 * N=3 の 2つの配置は 23 と 29 になる:
 * 00010111 &sub{2}; = 23
 * 00011101 &sub{2}; = 29
 * S(N) を異なる変換した数の合計とすると, S(3) = 23 + 29 = 52 となる.
 * S(5) を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 265\n");
    
    // TODO: Implement solution here
    
    return 0;
}
