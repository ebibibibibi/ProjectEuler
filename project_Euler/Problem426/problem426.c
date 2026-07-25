/*
 * Project Euler - Problem 426
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20426
 * 
 * Problem 426 「箱玉系」  †
 * 無限に連なる箱を考えてみよう. いくつかの箱には玉が入っている. 例えば, 2個連続して玉の入った箱, それに続いて2個の空箱,
 * 2個の玉の入った箱, 1個の空箱, 2個の玉の入った箱が並んだ初期配置について, これを交互に現れる玉の入った箱と空箱の数により数列 (2, 2,
 * 2, 1, 2) と表すことができる.
 * 一回の操作は, 以下のルールに従って玉それぞれについて一回だけ移動させることにより構成される:
 * まだ移動していない最も左の玉を右側の一番近い空箱に入れる.
 * 一回の操作で下記に示すように箱列の数列 (2, 2, 2, 1, 2) は (2, 2, 1, 2, 3) に変化する;
 * 新しくできた数列は最初の玉の入った箱の数から始まっていることに注意.
 * #ref(): File not found: "p_426_baxball1.gif" at page "Problem 426"
 * このような系を箱玉系 (Box-Ball System), または略して BBS と呼ぶ.
 * 十分にこの操作を繰り返したあと, この系は玉の入った箱の連続数が変わらない状態へと発展することがわかる. 以下に示した例では,
 * 玉の入った箱の連続数は [1, 2, 3] に発展する; これを最終状態と呼ぼう.
 * #ref(): File not found: "p_426_baxball2.gif" at page "Problem 426"
 * 数列 {t&sub{i};} を以下のように定義する:
 * s&sub{0}; = 290797
 * s&sub{k+1}; = s&sub{k};&sup{2}; mod 50515093
 * t&sub{k}; = (s&sub{k}; mod 64) + 1
 * 初期配置 (t&sub{0};, t&sub{1};, …, t&sub{10};) から開始すると, 最終状態は [1, 3, 10, 24,
 * 51, 75] となる.
 * 初期配置 (t&sub{0};, t&sub{1};, …, t&sub{10 000 000};) から開始した時の最終状態を求めよ.
 * 回答は最終状態の要素の自乗の和で答えよ. 例えば, 最終状態が [1, 2, 3] のとき, 14 ( = 1&sup{2}; +
 * 2&sup{2}; + 3&sup{2};) が答えるべき回答となる.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 426\n");
    
    // TODO: Implement solution here
    
    return 0;
}
