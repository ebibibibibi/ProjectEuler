/*
 * Project Euler - Problem 175
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20175
 * 
 * Problem 175 「ある数を2のべき乗の和として表せる方法の数に関する分数」  †
 * f(0) = 1 とし, f(n) = [nを2のべき乗の和(ただし, 同じ数を2回より多く使ってはいけない)として書き表す方法の数], と定義する.
 * 例えば, 10には異なった5通りの方法があるので, f(10) = 5 である.
 * 10 = 8+2 = 8+1+1 = 4+4+2 = 4+2+2+1+1 = 4+4+1+1
 * 全ての分数 p/q (p>0, q>0) について, f(n)/f(n-1) = p/q となるようなnが少なくとも一つ存在することが示せる.
 * 例えば, f(n)/f(n-1) = 13/17 となるような最小のnは241であり, 241の二進表現は11110001である.
 * この二進数を上の位から下の位に読んでいくと, 4つの1, 3つの0, 1つの1となる. 4,3,1を241の"短縮された二進表現"と呼ぶ.
 * f(n)/f(n-1) = 123456789/987654321 となるような最小のnの"短縮された二進表現"を求めよ.
 * スペースを含まないカンマで区切られた整数で答えよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 175\n");
    
    // TODO: Implement solution here
    
    return 0;
}
