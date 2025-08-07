/*
 * Project Euler - Problem 538
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20538
 * 
 * Problem 538 「最大の四辺形」  †
 * 数列 S = (s&sub{1};, s&sub{2};, ..., s&sub{n};) について考えよう.
 * 四辺が数列 S の 4 つの要素 (s&sub{i};, s&sub{j};, s&sub{k};, s&sub{l};) (i, j, k, l
 * がすべてそれぞれ異なる) からなる面積が最大となる四辺形の外周長を f(S) としよう. 同じ面積を持つ四辺形が複数ある場合は,
 * 最も外周が長い四辺形が選択される.
 * 例えば S = (8, 9, 14, 9, 27) の場合, 要素として (9, 14, 9, 27) を選べば並行辺が 14 と 27
 * で脚の長さが 9 の等脚台形 (等脚台形とは一方の対辺が並行で長さが異なり、もう一方の対辺が同じ長さを持つ四辺形のことである) を形成できる.
 * この四辺形の面積は 127.611470879... となる. これが S
 * から選べる辺の長さを使って形成できる最大面積の四辺形であることがわかる. よって f(S) = 9 + 14 + 9 + 27 = 59 となる.
 * u&sub{n}; = 2&sup{B(3n)}; + 3&sup{B(2n)}; + B(n+1) としよう, ここで B(k) は 2
 * を底とした際の数 k の桁にある 1 の個数とする.
 * 例えば, B(6) = 2, B(10) = 2, B(15) = 4, そして u&sub{5}; = 24 + 32 + 2 = 27.
 * また, (u&sub{1};, u&sub{2};, ..., u&sub{n};) からなる数列を U&sub{n}; とする.
 * 例えば, U&sub{10}; = (8, 9, 14, 9, 27, 16, 36, 9, 27, 28).
 * f(U&sub{5};) = 59, f(U&sub{10};) = 118, f(U&sub{150};) = 3223 であることがわかる.
 * また範囲 4 ≤ n ≤ 150 に対し Σ f(U&sub{n};) = 234761 となる.
 * 範囲 4 ≤ n ≤ 3 000 000 のときの Σ f(U&sub{n};) を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 538\n");
    
    // TODO: Implement solution here
    
    return 0;
}
