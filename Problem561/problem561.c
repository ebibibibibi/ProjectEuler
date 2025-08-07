/*
 * Project Euler - Problem 561
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20561
 * 
 * Problem 561 「約数が約数を割り切るペア」  †
 * S(n)=「 n の約数 a, b に対して, b が a で割り切れ, a ≠ b であるようなペアの総数」 とします。
 * 例えば, S(6) = 5 です。 なぜなら, (a, b) = (1, 2), (1, 3), (1, 6), (2, 6), (3, 6) の
 * 5 通りの組み合わせがあるからです。
 * pm# を最初の m 個の素数の積とします。(詳しくは Wikipediaの素数階乗のページ を参照)
 * E(m,n)=「 S((pm#)n) が 2k で割り切れるような最大の k 」 とします。
 * 例えば, E(2,1) = 0 です。 なぜなら, S(6) = 5 は 2 で 1 回も割ることができないからです。
 * また, Q(n) = E(904961, 1) + E(904961, 2) + ... + E(904961, n) とします。
 * Q(1012) を求めなさい。
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 561\n");
    
    // TODO: Implement solution here
    
    return 0;
}
