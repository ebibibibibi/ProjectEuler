/*
 * Project Euler - Problem 183
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20183
 * 
 * Problem 183 「分割した積の最大値」  †
 * N を正整数とし, N を k 個に等分する. 即ち, r=N/k とし, N = r + r + ... + r である.
 * P をその分割数の積とする. 即ち, P = r × r × ... × r = rk.
 * 例えば, 11 を 5 つに分割すると, 11 = 2.2 + 2.2 + 2.2 + 2.2 + 2.2 となる. このとき, P = 2.25
 * = 51.53632である.
 * M(N)=Pmaxとする.
 * N=11 の場合には 4 つに分けた場合が Pmax=(11/4)4 で最大となる. M(11) = 14641/256 =
 * 57.19140625であり, 有限小数である.
 * しかし, N=8 の場合には最大値は 3 に分けられたときに得られ, M(8)=512/27 となる. これは無限小数 (循環小数) である.
 * さて, M(N) が無限小数のとき D(N)=N に, M(N) が有限小数のときに D(N)=-N とする.
 * 5 ≦ N ≦ 100のとき, ΣD(N) = 2438となる.
 * 5 ≦ N ≦ 10000のとき, ΣD(N) を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 183\n");
    
    // TODO: Implement solution here
    
    return 0;
}
