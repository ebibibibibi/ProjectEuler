/*
 * Project Euler - Problem 734
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20734
 * 
 * Problem 734 「素数のビット」  †
 * 2 個のビットの「論理OR」は両方のビットが 0 のときに 0，それ以外のときに 1である。
 * 2 個の正整数の「ビットワイズOR」はそれぞれの整数を二進表現し，対応するビットについて「論理OR」を施したものである。
 * たとえば，10 と 6 の「ビットワイズOR」は 14 である。10 = 10102，6 = 11102，14 = 11102
 * T(n, k) を，以下のような k-タプル (x1, x2, …xk) の数とする。
 * 全てのxi は n 以下の素数である。
 * タプルのビットワイズORは n 以下の素数である。
 * たとえば，T(5, 2) = 5。5 個の 2-タプルは (2, 2), (2, 3), (3, 2), (3, 3), (5, 5) である。
 * T(100, 3) = 3355，T(1000, 10) = 2071632(mod 1,000,000,007) である。
 * T(106, 999983) を求め，1,000,000,007 での剰余を回答せよ。
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 734\n");
    
    // TODO: Implement solution here
    
    return 0;
}
