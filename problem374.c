/*
 * Project Euler - Problem 374
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20374
 * 
 * Problem 374 「整数分割の最大の積」  †
 * 数 n の整数分割 (interger partition) とは, 正の整数の和が n となるような書き表し方のことである.
 * 加える数の順序が違うだけの分割は同じものとみなす. n の成分別分割 (partition of n into distinct parts)
 * とはすべての成分がたかだか1回だけ現れる n の分割を表す.
 * 5の成分別分割は以下のようになる:
 * 5, 4+1, 3+2.
 * n の成分別分割のうちその成分の積が最大となる時, その積を f(n), その分割の要素の数を m(n) としよう.
 * すなわち f(5)=6 そして m(5)=2 となる.
 * n=10 の時, 最大の積となる分割は 10=2+3+5 となり, f(10)=30, m(10)=3 となる.
 * また, それらを掛けた積は, f(10)·m(10) = 30·3 = 90 となる.
 * 1 ≤ n ≤ 100 のときの Σf(n)·m(n) = 1683550844462 であることが確かめられる.
 * 1 ≤ n ≤ 10&sup{14}; のときの  Σf(n)·m(n) を求めよ.
 * 5000万番目の素数, 982451653を法として答えよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 374\n");
    
    // TODO: Implement solution here
    
    return 0;
}
