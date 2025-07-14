/*
 * Project Euler - Problem 465
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20465
 * 
 * Problem 465 「極多角形」  †
 * 多角形のカーネル (kernel) とは多角形のすべての境界線が見える点の集合と定義される.
 * そのカーネルの内部に原点が完全に含まれるような多角形を極多角形 (polar polygon) と定義しよう.
 * この問題では, 多角形は同一線上となる隣接する頂点を持つことができる. またどんな多角形も自己交差を持たず, 面積がゼロの部分を持たない.
 * 以下の例では, 1つ目の多角形のみが極多角形である (2つ目, 3つ目, 4つ目の多角形のカーネルは原点を完全には含んでいない,
 * また5つ目の多角形はカーネルを持たない):
 * #ref(): File not found: "p465_polygons.png" at page "Problem 465"
 * 1つ目の多角形は3つの連続した同一線上の頂点を持っていることに注意.
 * 絶対値が n 以下となる整数座標 (x, y) を頂点とする極多角形の個数を P(n) としよう.
 * 多角形は異なる辺の集合を持っていれば, それらがおなじ領域を取り囲むものであっても別のものとして数えることに注意. 例えば, 頂点
 * [(0,0),(0,3),(1,1),(3,0)] を持つ多角形は, 頂点 [(0,0),(0,3),(1,1),(3,0),(1,0)]
 * を持つ多角形とは異なる.
 * 例として, P(1) = 131, P(2) = 1648531, P(3) = 1099461296175, そして P(343) mod 1
 * 000 000 007 = 937293740.
 * P(7&sup{13};) mod 1 000 000 007 を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 465\n");
    
    // TODO: Implement solution here
    
    return 0;
}
