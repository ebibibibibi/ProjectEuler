/*
 * Project Euler - Problem 167
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20167
 * 
 * Problem 167 「Ulam数列について調べ上げよ」  †
 * 正の整数a,bについて, Ulam数列 U(a,b)は以下のように定義される. U(a,b)1 = a , U(a,b)2 = b , k >
 * 2については,
 * U(a,b)kは二つの異なったU(a,b)のそれまでの値の和としての表し方が一通りである数のU(a,b)k-1を超える最小値となる.
 * 例えば, 数列U(1,2)は,
 * 1, 2, 3 = 1 + 2, 4 = 1 + 3, 6 = 2 + 4, 8 = 2 + 6, 11 = 3 + 8; となる.
 * 5は, 5 = 1 + 4 = 2 + 3 というように二つの和の表し方があるのでこの数列に含まれない. 7 = 1 + 6 = 3 + 4
 * も同様である.
 * U(2,2n+1)1e11を 2 ≤ n ≤10 について求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 167\n");
    
    // TODO: Implement solution here
    
    return 0;
}
