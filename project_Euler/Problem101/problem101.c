/*
 * Project Euler - Problem 101
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20101
 * 
 * Problem 101 「最適多項式」  †
 * 数列のk個の項を与えられたときに, 次の項を確実に求めることは不可能である. その数列に合うような多項式が無限個存在するからである.
 * 例として, 立方数の数列を考えよう. これは生成関数 un = n3 で定義され, 1, 8, 27, 64, 125, 216, ...となる.
 * この数列の最初の2項のみが与えられているとしよう. "Simple is best"の法則にのっとり, 線形の関係があると仮定し,
 * 3つ目の項が15であると予想する (差分が7). もし最初の3項のみが与えられていたとしても, 同じ原則により,
 * 二次の関係があると仮定して次の項を予測する.
 * 数列の最初のk項を生成できる最適な多項式のn項を OP(k, n) で表すことにする.
 * 明らかに, n ≤ k について OP(k, n) は正しい. 最初の異なる項 (First Incorrect Term, FIT) は
 * OP(k, k+1) であろう. これを bad OP (BOP) と呼ぶことにする.
 * 原則より, 最初の項しか与えられていない場合には, 定数項とするのが理に適っているだろう; 即ち, n ≥ 2, OP(1, n) = u1.
 * 従って, 立方数の数列について以下のOPを得る.
 * OP(1, n) = 11, 1, 1, 1, ...
 * OP(2, n) = 7n−61, 8, 15, ...
 * OP(3, n) = 6n2−11n+61, 8, 27, 58, ...
 * OP(4, n) = n31, 8, 27, 64, 125, ...
 * 明らかに, k ≥ 4 のときにはBOPは存在しない.
 * BOPsのFITs (上の例では赤で示されている) の和は, 1 + 15 + 58 = 74 である.
 * 以下の10次多項式からなる生成関数を考える:
 * un = 1 - n + n2 - n3 + n4 - n5 + n6 - n7 + n8 - n9 + n10
 * BOPsのFITsの総和を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 101\n");
    
    // TODO: Implement solution here
    
    return 0;
}
