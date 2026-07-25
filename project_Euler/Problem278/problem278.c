/*
 * Project Euler - Problem 278
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20278
 * 
 * Problem 278 「半素数の線型結合」  †
 * いくつかの整数 1 < a&sub{1}; < a&sub{2}; < ... < a&sub{n}; に対し,
 * 次の線形の組み合わせについて考える. q&sub{1};a&sub{1}; + q&sub{2};a&sub{2}; + ... +
 * q&sub{n};a&sub{n}; = b, ただし q&sub{k}; ≥ 0 は整数のみとする.
 * 与えられた a&sub{k}; に対して, b は全ての値を網羅しないかもしれないことに注意せよ.
 * 例えば, a&sub{1}; = 5, a&sub{2}; = 7 なら, b が 1, 2, 3, 4, 6, 8, 9, 11, 13,
 * 16, 18 または 23 であるような q&sub{1}; ≥ 0, q&sub{2}; ≥ 0 は存在しない.
 * 実際, 23 は　a&sub{1}; = 5, a&sub{2}; = 7　に対して b の値とならない最大の数である.
 * これを f(5, 7) = 23 とする.
 * 同様に, f(6, 10, 15) = 29, f(14, 22, 77) = 195 であることを示せる.
 * p, q, r が素数で p < q < r < 5000 であるとき, Σf(p*q,p*r,q*r) を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 278\n");
    
    // TODO: Implement solution here
    
    return 0;
}
