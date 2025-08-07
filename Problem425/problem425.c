/*
 * Project Euler - Problem 425
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20425
 * 
 * Problem 425 「素数縁故」  †
 * 2つの正整数 A と B が下記の状態のうち1つを満たすとき, それらは親類であるという. ( "A ↔ B" で表される )
 * (1) A と B が同じ桁数を持ち, ちょうど1つの桁だけ異なる場合; 例えば, 123 ↔ 173.
 * (2) A ( もしくは B ) の左側に新たに1桁追加して B ( もしくは A ) が作られる場合; 例えば, 23 ↔ 223, そして
 * 123 ↔ 23.
 * 2 と 素数 P の間に素数からなる親類関係によるつながりがあり, そのつながりの中に P を超える素数がないとき, その P を2の親戚と呼ぼう.
 * 例えば, 127 は2の親戚である, 可能なつながりの1つを下記に示すと:
 * 2 ↔ 3 ↔ 13 ↔ 113 ↔ 103 ↔ 107 ↔ 127
 * しかし, 11, そして 103 はどうやっても2の親戚にはなり得ない.
 * N 以下の2の親戚ではない素数の和を F(N) としよう.
 * F(103) = 431, そして F(104) = 78728 であることが確かめられている.
 * F(107) を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 425\n");
    
    // TODO: Implement solution here
    
    return 0;
}
