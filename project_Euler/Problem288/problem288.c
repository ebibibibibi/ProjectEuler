/*
 * Project Euler - Problem 288
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20288
 * 
 * Problem 288 「巨大階乗」  †
 * 任意の素数 p に対し N(p,q) = Σn=0 to q Tn* pn とする.
 * Tn は以下の乱数生成器で生成する:
 * S0 = 290797
 * Sn+1 = Sn2 mod 50515093
 * Tn = Sn mod p
 * Nfac(p,q) を N(p,q) の階乗とする.
 * NF(p,q) を Nfac(p,q) 内の因数 p の数とする.
 * NF(3,10000) mod 320=624955285 であることがわかる.
 * NF(61,107) mod 6110 を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 288\n");
    
    // TODO: Implement solution here
    
    return 0;
}
