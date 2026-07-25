/*
 * Project Euler - Problem 122
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20122
 * 
 * Problem 122 「効率的なべき乗計算」  †
 * n15を求めるのに最も単純な方法では 14 回の掛け算が必要である.
 * n × n × ... × n = n15
 * しかし2進法を用いれば, 6 回の掛け算で計算できる.
 * n × n = n2
 * n2 × n2 = n4
 * n4 × n4 = n8
 * n8 × n4 = n12
 * n12 × n2 = n14
 * n14 × n = n15
 * ところがたった 5 回の掛け算のみでも計算できる.
 * n × n = n2
 * n2 × n = n3
 * n3 × n3 = n6
 * n6 × n6 = n12
 * n12 × n3 = n15
 * m(k)を nk を求めるのに必要最低限な掛け算の回数と定義する.
 * たとえば m(15)=5 である.
 * 1 ≤ k ≤ 200 に対し, Σ m(k) を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 122\n");
    
    // TODO: Implement solution here
    
    return 0;
}
