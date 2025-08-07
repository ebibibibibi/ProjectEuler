/*
 * Project Euler - Problem 531
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20531
 * 
 * Problem 531 「中国の余剰」  †
 * 以下の系における最小の負でない x の解を g(a,n,b,m) としよう:
 * x = a mod n
 * x = b mod m
 * 解が存在しないとき, x は 0 とする.
 * 例えば, g(2,4,4,6)=10, しかし g(3,4,4,6)=0.
 * φ(n) をオイラーのトーシェント関数とする.
 * f(n,m) = g(φ(n),n,φ(m),m) とする.
 * 範囲 1000000 ≤ n < m < 1005000 における ∑f(n,m) を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 531\n");
    
    // TODO: Implement solution here
    
    return 0;
}
