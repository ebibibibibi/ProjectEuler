/*
 * Project Euler - Problem 553
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20553
 * 
 * Problem 553 「べき集合のべき集合」  †
 * P(n) を n 以下の正整数の集合 {1,2,...,n} とする。
 * Q(n) を P(n) の空でない部分集合全体からなる集合とする。
 * R(n) を Q(n) の空でない部分集合全体からなる集合とする。
 * 元 X ∈ R(n) は Q(n) の空でない部分集合なので、それ自体が集合である。
 * X から次のようにしてグラフを作る。
 * 各 Y ∈ X は、Y をラベルとする頂点に対応する
 * 2つの頂点 Y1, Y2 の間には Y1 ∩ Y2 ≠ ∅ のとき辺がある
 * 例えば X = {{1},{1,2,3},{3},{5,6},{6,7}} から作られるグラフは図のようになる。
 * このグラフは2つの連結成分を持つ。
 * C(n,k) を、R(n) の元のうちグラフがちょうど k 個の連結成分を持つようなものの個数と定める。
 * C(2,1)=6, C(3,1)=111, C(4,2)=486, C(100,10) mod 1 000 000 007 = 728209718
 * である。
 * C(104,10) mod 1 000 000 007 を求めよ。
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 553\n");
    
    // TODO: Implement solution here
    
    return 0;
}
