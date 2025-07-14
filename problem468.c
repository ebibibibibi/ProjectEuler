/*
 * Project Euler - Problem 468
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20468
 * 
 * Problem 468 「二項係数のスムーズ約数」  †
 * ある整数が B より大きい素因数を持たないとき, その整数をB-スムーズと呼ぶ.
 * n の最大のB-スムーズ約数を S&sub{B};(n) としよう.
 * 例として:
 * S&sub{1};(10) = 1
 * S&sub{4};(2100) = 12
 * S&sub{17};(2496144) = 5712
 * F(n) = ∑&sub{1≤B≤n}; ∑&sub{0≤r≤n}; S&sub{B};(C(n,r)) と定義しよう. ここで C(n,r)
 * は二項係数を意味する.
 * 例として:
 * F(11) = 3132
 * F(1 111) mod 1 000 000 993 = 706036312
 * F(111 111) mod 1 000 000 993 = 22156169
 * F(11 111 111) mod 1 000 000 993 を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 468\n");
    
    // TODO: Implement solution here
    
    return 0;
}
