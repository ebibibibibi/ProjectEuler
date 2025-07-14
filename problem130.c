/*
 * Project Euler - Problem 130
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20130
 * 
 * Problem 130 「素数桁レピュニットと同じ性質を持つ合成数」  †
 * 1からのみなる数をレピュニットと呼ぶ. R(k)で長さ k のレピュニットを表す. 例えばR(6) = 111111である.
 * GCD(n, 10) = 1 となる正整数 n について, 必ず正整数 k が存在し nが R(k) を割り切ることが証明できる. A(n)
 * でそのような最小の k を表す. 例: A(7) = 6. A(41) = 5.
 * 5より大きい素数 p について, A(p) が p - 1 を割り切ることが知られている. p = 41 のときには, A(41) = 5
 * であり, 40 は 5で割り切れる.
 * 非常に少ないのだが, 合成数においても上が成立する場合がある. 最初の5つの例は 91, 259, 451, 481, 703 である.
 * GCD(n, 10) = 1 かつ A(n) が n - 1 を割り切るような最初の25個の合成数 n の総和を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 130\n");
    
    // TODO: Implement solution here
    
    return 0;
}
