/*
 * Project Euler - Problem 559
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20559
 * 
 * Problem 559 「並び替え行列」  †
 * 行列の全ての行で j 列目の要素が j+1 列目の要素より小さいとき、 j 列目は上昇しているという。
 * 次の条件を満たす r×n 行列の個数を P(k,r,n) とする。
 * どの行も {1,2,3,...,n} の並び替えである
 * 最初の列を 1 列目として、列 j < n は j が k の倍数でないときかつそのときに限り上昇している
 * 例えば P(1,2,3)=19, P(2,4,6)=65508751, P(7,5,30) mod 1000000123 = 161858102
 * である。
 * Q(n)=∑nk=1 P(k,n,n) とする。
 * 例えば Q(5)=21879393751, Q(50) mod 1000000123 = 819573537 である。
 * Q(50000) mod 1000000123 を求めよ。
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 559\n");
    
    // TODO: Implement solution here
    
    return 0;
}
