/*
 * Project Euler - Problem 508
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20508
 * 
 * Problem 508 「i-1進数の整数」  †
 * ガウス整数 i-1 について考えよう. ガウス整数 a+bi のi-1進数表現とは, 以下のような数字列
 * d&sub{n-1};d&sub{n-2};...d&sub{1};d&sub{0}; からなる有限数列である:
 * a+bi = d&sub{n-1};(i-1)&sup{n-1}; + d&sub{n-2};(i-1)&sup{n-2}; + ... +
 * d&sub{1};(i-1) + d&sub{0};
 * それぞれの d&sub{k}; は {0,1} のいずれか
 * 先行ゼロは持たない, すなわち d&sub{n-1}; ≠ 0, ただし a+bi が 0 の場合を除く
 * ガウス整数のi-1進数表現は以下のようになる:
 * 11+24i → 111010110001101
 * 24-11i → 110010110011
 * 8+0i → 111000000
 * −5+0i → 11001101
 * 0+0i → 0
 * 意外なことに, 全てのガウス整数は一意のi-1進数表現を持っている.
 * a+bi の一意なi-1進数表現内の 1 の個数を f(a+bi) としよう. 例えば f(11+24i) = 9, f(24-11i) = 7.
 * |a| ≤ L, そして |b| ≤ L となるような全ての整数 a, b に対する f(a+bi) の和を B(L) としよう. 例えば,
 * B(500) = 10795060.
 * B(10&sup{15};) mod 1 000 000 007 を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 508\n");
    
    // TODO: Implement solution here
    
    return 0;
}
