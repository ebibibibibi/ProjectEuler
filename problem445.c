/*
 * Project Euler - Problem 445
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20445
 * 
 * Problem 445 「レトラクション A」  †
 * n > 1 のすべての整数において, 関数族 f&sub{n,a,b}; を, 整数 a,b,x, そして 0 < a < n, 0 ≤ b <
 * n, 0 ≤ x < n に対して f&sub{n,a,b};(x) ≡ ax+b mod n と定義する.
 * 0 ≤ x < n のすべてにおいて f&sub{n,a,b};(f&sub{n,a,b};(x)) ≡ f&sub{n,a,b};(x) mod
 * n のとき, その f&sub{n,a,b}; をレトラクション (retraction) と呼ぼう.
 * n におけるレトラクションの個数を R(n) としよう.
 * c = C(100 000,k), そして 1 ≤ k ≤ 99 999 のとき,
 * ∑R(c) ≡ 628701600 (mod 1 000 000 007) となることがわかっている.
 * ( C(n,k) は二項計数. )
 * c=C(10 000 000,k), そして 1 ≤ k ≤ 9 999 999 のときの ∑R(c) を求めよ.
 * 回答は 1 000 000 007 を法として答えよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 445\n");
    
    // TODO: Implement solution here
    
    return 0;
}
