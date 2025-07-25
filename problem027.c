/*
 * Project Euler - Problem 27
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%2027
 * 
 * Problem 27 「二次式素数」  †
 * オイラーは以下の二次式を考案している:
 * n2 + n + 41.
 * この式は, n を0から39までの連続する整数としたときに40個の素数を生成する. しかし, n = 40 のとき 402 + 40 + 41 =
 * 40(40 + 1) + 41 となり41で割り切れる. また, n = 41 のときは 412 + 41 + 41
 * であり明らかに41で割り切れる.
 * 計算機を用いて, 二次式 n2 - 79n + 1601 という式が発見できた. これは n = 0 から 79
 * の連続する整数で80個の素数を生成する. 係数の積は, -79 × 1601 で -126479である.
 * さて, |a| < 1000, |b| ≤ 1000 として以下の二次式を考える (ここで |a| は絶対値): 例えば |11| = 11
 * |-4| = 4である.
 * n2 + an + b
 * n = 0 から始めて連続する整数で素数を生成したときに最長の長さとなる上の二次式の, 係数 a, b の積を答えよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 27\n");
    
    // TODO: Implement solution here
    
    return 0;
}
