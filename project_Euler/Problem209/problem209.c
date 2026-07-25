/*
 * Project Euler - Problem 209
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20209
 * 
 * Problem 209 「堂々巡り」  †
 * k 入力の2進真理値表は k 個の入力ビット(2進数, 0(偽)または1(真))から
 * 1 個の出力ビットへの写像である.
 * 例えば, 論理和(AND)と排他的論理和(XOR)の 2 入力真理値表は以下の通り:
 * xyx AND y
 * 000
 * 010
 * 100
 * 111
 * xyx XOR y
 * 000
 * 011
 * 101
 * 110
 * 6ビットの入力(a,b,c,d,e,f)に対し, 以下の式を満たす6入力の2進真理値表 τ
 * はいくつあるか.
 * τ(a, b, c, d, e, f) AND τ(b, c, d, e, f, a XOR (b AND c)) = 0
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 209\n");
    
    // TODO: Implement solution here
    
    return 0;
}
