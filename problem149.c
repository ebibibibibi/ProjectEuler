/*
 * Project Euler - Problem 149
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20149
 * 
 * Problem 149 「和が最大となる部分列の探索」  †
 * 下の表において, 任意の方向(縦横斜め)に隣り合うものの和の最大値は 16 (= 8 + 7 + 1) となることは簡単に確かめられる.
 * -2532
 * 9-651
 * 3273
 * -18-48
 * いま, 同じ探索をより大きなものについてもしてみることにする.
 * まず, 400万個の擬似乱数を "Lagged Fibonacci Generator" によって生成する.
 * 1 ≤ k ≤ 55 について, sk = [100003 - 200003k + 300007k3] (modulo 1000000) -
 * 500000
 * 56 ≤ k ≤ 4000000 について, sk = [sk-24 + sk-55 + 1000000] (modulo 1000000) -
 * 500000
 * つまり, s10 = -393027 , s100 = 86613 となる.
 * s の項は, 最初の 2000 個を最初の行に(順番に), 次の 2000 個を 2 番目の行に, というように, 2000x2000
 * の表に並べ替えられる.
 * 任意の方向(縦横斜め)に隣り合うものの和の最大値を求めよ.
 * (連続して足す領域は 3 マス以上でもよい, 斜め 4 マス等も認める)
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 149\n");
    
    // TODO: Implement solution here
    
    return 0;
}
