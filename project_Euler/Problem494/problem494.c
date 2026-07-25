/*
 * Project Euler - Problem 494
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20494
 * 
 * Problem 494 「コラッツプレフィックスファミリー」  †
 * コラッツ数列は次のように定義される: &ref(): File not found: "p494_eq.png" at page "Problem
 * 494";
 * コラッツ予想ではいかなる正の整数から始めても, この数列は最終的に 1,4,2,1... という周期に入るとされている.
 * a&sub{1}; = n から始まるコラッツ数列のうち, 2のべき乗でない数 (この問題では 2&sup{0}; = 1 は2のべき乗と見なす)
 * からなる部分数列を, その数列の先頭の数(プレフィックス)を使って p(n) で表し, これを「数列プリフィックス」と定義する. 例えば:
 * p(13) = {13, 40, 20, 10, 5}
 * p(8) = {}
 * このコラッツ予想を無効にする数があった場合はこの部分数列は無限の長さを持つことになる.
 * 長さ m を持つすべての数列プレフィックスの集合を S&sub{m}; としよう. S&sub{m}; 内の2つの数列 {a&sub{1};,
 * a&sub{2};, ..., a&sub{m};} と {b&sub{1};, b&sub{2};, ..., b&sub{m};} が, 1
 * ≤ i, j ≤ m において a&sub{i}; < a&sub{j}; の時に限り b&sub{i}; < b&sub{j};
 * となっている場合, この数列は同じプレフィックスファミリーに属すると言うことにする.
 * 例えば, 集合 S&sub{4}; 内では, {6, 3, 10, 5} は {454, 227, 682, 341}
 * と同じファミリーに属するが, {113, 340, 170, 85} はそうではない.
 * S&sub{m}; 内の異なるプレフィックスファミリーの個数を f(m) と定義しよう.
 * f(5) = 5, f(10) = 55, f(20) = 6771 が与えられている.
 * f(90) を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 494\n");
    
    // TODO: Implement solution here
    
    return 0;
}
