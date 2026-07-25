/*
 * Project Euler - Problem 274
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20274
 * 
 * Problem 274 「整除乗数」  †
 * 10 と互いに素な整数 p > 1 に対し, 次のような性質がある正の整除乗数(divisibility multiplier) m < p
 * が存在する: 任意の正の整数 n に対し次の関数と p で割り切れるかどうかが同じである:
 * f(n) = (n の最後の桁以外) + (n の最後の桁) * m
 * つまり, もし m が p の整除乗数であるなら, f(n) が p で割り切れる必要十分条件は n が p で割り切れることである.
 * (n が p より十分大きければ, f(n) は n より小さくなり, f を繰り返し適用することで p の整除乗数のテストに使用できる)
 * 例えば, 113 の整除乗数は 34 である.
 * f(76275) = 7627 + 5 * 34 = 7797 : 76275 と 7797 は共に 113 で割り切れる.
 * f(12345) = 1234 + 5 * 34 = 1404 : 12345 と 1404 は共に 113 で割り切れない.
 * 1000 未満で 10 と互いに素な素数の整除乗数の合計は 39517 である. 107 未満で10 と互いに素な素数の整除乗数の合計は?
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 274\n");
    
    // TODO: Implement solution here
    
    return 0;
}
