/*
 * Project Euler - Problem 382
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20382
 * 
 * Problem 382 「ポリゴン生成」  †
 * ポリゴンとは, 閉じた閉路になるよう組み合わされた直線分から成る平面図形のことである. ポリゴンは少なくとも3つの辺から成り,
 * それ自身と交わることはない.
 * 正の整数の集合 S が以下の条件を満たすとき ポリゴン P を作る と呼ぼう :
 * ポリゴン P が同じ長さの2つの辺を持たず,
 * ポリゴン P のすべての辺の長さが集合 S に含まれ, かつ
 * 集合 S がその他の値を含まない.
 * 例えば :
 * 集合 {3, 4, 5} は 3, 4, 5, の長さの辺を持つポリゴン(三角形)を作る.
 * 集合 {6, 9, 11, 24} は 6, 9, 11, 24 の長さの辺を持つポリゴン(四角形)を作る.
 * 集合 {1, 2, 3} そして {2, 3, 4, 9} からはどんなポリゴンも作られない.
 * 以下のように定義される数列 s を考えよう :
 * s&sub{1}; = 1, s&sub{2}; = 2, s&sub{3}; = 3
 * sn = sn-1 + sn-3  [n > 3 のとき]
 * 集合 {s&sub{1};, s&sub{2};, ..., sn} を Un としよう. 例えば, U&sub{10}; = {1, 2, 3,
 * 4, 6, 9, 13, 19, 28, 41}.
 * 少なくとも一つのポリゴンを作ることができる Un の部分集合の個数を f(n) としよう.
 * 例えば, f(5) = 7, f(10) = 501, そして f(25) = 18635853 となる.
 * f(10&sup{18};) の最後の9桁を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 382\n");
    
    // TODO: Implement solution here
    
    return 0;
}
