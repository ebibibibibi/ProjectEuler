/*
 * Project Euler - Problem 535
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20535
 * 
 * Problem 535 「フラクタル数列」  †
 * 以下の列から始まる無限整数列 S を考えよう:
 * S = 1, 1, 2, 1, 3, 2, 4, 1, 5, 3, 6, 2, 7, 8, 4, 9, 1, 10, 11, 5, ...
 * 初めて現れる整数それぞれに丸をつけよう.
 * S = ①, 1, ②, 1, ③, 2, ④, 1, ⑤, 3, ⑥, 2, ⑦, ⑧, 4, ⑨, 1, ⑩, ⑪, 5, ...
 * この数列は以下の性質を特徴とする:
 * この丸で囲んだ数は 1 から始まる連続する整数となる.
 * 丸囲みされていない数 a&sub{i}; それぞれの直前には, ちょうど ⌊√a&sub{i};⌋ 個の丸囲み数がある, ここで ⌊⌋
 * は床関数とする.
 * もしすべての丸囲み数を除くと, 残された数は S と一致する数列を形作る, したがって S はフラクタル数列である.
 * この数列の初項から第 n 項までの和を T(n) としよう.
 * T(1) = 1, T(20) = 86, T(10&sup{3};) = 364089, T(10&sup{9};) =
 * 498676527978348241 となる.
 * T(10&sup{18};) を求めよ. 回答として末尾 9 桁を答えよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 535\n");
    
    // TODO: Implement solution here
    
    return 0;
}
