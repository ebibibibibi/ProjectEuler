/*
 * Project Euler - Problem 554
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20554
 * 
 * Problem 554 「Centaurの配置」  †
 * チェス盤の上で, Centaurs という駒は次の図のような場所を攻撃することができます。
 * &ref(): File not found: "p554-centaurs[1].png" at page "Problem 554";
 * そのとき, 2n×2n のチェス盤の上には n×n 個の Centaur を互いに攻撃し合わないように配置することができます。
 * C(n) = (2n×2n のチェス盤の上には n×n 個の Centaur を互いに攻撃し合わないように配置する方法の総数) とします。
 * そのとき, C(1) = 4, C(2) = 25, C(10) = 1477721 となります。
 * F1=1, F2=1, Fi=Fi-1+Fi-2 によって定義される数列があります。(これはフィボナッチ数列です)
 * C(F2)+C(F3)+C(F4)+,...,+C(F90) を求めなさい。
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 554\n");
    
    // TODO: Implement solution here
    
    return 0;
}
