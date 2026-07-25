/*
 * Project Euler - Problem 304
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20304
 * 
 * Problem 304 「Primonacci」  †
 * 任意の自然数nについて関数next_prime(n)はp>nとなるような最小の素数pを返す.
 * 数列a(n)は
 * a(1)=next_prime(1014), a(n)=next_prime(a(n-1)) for n>1
 * で定義される.
 * フィボナッチ数列f(n)は
 * f(0)=0, f(1)=1, f(n)=f(n-1)+f(n-2) for n>1
 * で定義される.
 * 数列b(n)はf(a(n))で定義される.
 * 1 ≦ n ≦ 100000 について Σb(n) mod 1234567891011 を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 304\n");
    
    // TODO: Implement solution here
    
    return 0;
}
