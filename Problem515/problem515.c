/*
 * Project Euler - Problem 515
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20515
 * 
 * Problem 515 「不協和数」  †
 * 素数 p を法としたときの n の逆数を d(p,n,0) としよう、つまり n × d(p,n,0) = 1 mod p と定義される.
 * k ≥ 1 となるような k に対し d(p,n,k) = Σni=1 d(p,i,k-1) としよう.
 * a ≤ p < a + b となるような全ての素数 p に対し D(a,b,k) = Σ(d(p,p-1,k) mod p) としよう.
 * 次のように与えられている:
 * D(101,1,10) = 45
 * D(103,102,102) = 8334
 * D(106,103,103) = 38162302
 * D(109,105,105) を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 515\n");
    
    // TODO: Implement solution here
    
    return 0;
}
