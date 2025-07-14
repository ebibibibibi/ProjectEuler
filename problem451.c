/*
 * Project Euler - Problem 451
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20451
 * 
 * Problem 451 「モジュラ逆数」  †
 * 数 15 について考えよう.
 * 15と互いに素となる15以下の正数は8個ある: 1, 2, 4, 7, 8, 11, 13, 14.
 * それらの数の15を法とするモジュラ逆数 (modular inverse) は: 1, 8, 4, 13, 2, 11, 7, 14.
 * なぜなら
 * 1*1 mod 15 = 1
 * 2*8 = 16 mod 15 = 1
 * 4*4 = 16 mod 15 = 1
 * 7*13 = 91 mod 15 = 1
 * 11*11 = 121 mod 15 = 1
 * 14*14 = 196 mod 15 = 1
 * m の法 n に対するモジュラ逆数が m 自身となるような n-1 より小さい最大の正数 m を I(n) としよう.
 * したがって  I(15)=11.
 * そして I(100)=51, I(7)=1.
 * 3 ≤ n ≤ 2·10&sup{7}; における ΣI(n) を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 451\n");
    
    // TODO: Implement solution here
    
    return 0;
}
