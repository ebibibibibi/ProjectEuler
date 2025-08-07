/*
 * Project Euler - Problem 212
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20212
 * 
 * Problem 212 「結合直方体の体積」  †
 * 座標軸に平行な直方体 (axis-aligned cuboid) は {(x0, y0, z0), (dx, dy, dz)} で与えられ, x0
 * ≤ X ≤ x0 + dx,
 * y0 ≤ Y ≤ y0 + dy,
 * z0 ≤ Z ≤ z0 + dz,
 * を満たす点で構成される.
 * 直方体の体積は dx dy dzで求められる.
 * 複数の直方体を結合したものの体積を考えた場合, 直方体に重なりがあれば, 結合直方体の体積は
 * それぞれの直方体の体積の和より小さくなる.
 * C1, …, C50000 を以下のパラメータで与えられる座標軸に平行な直方体とする.
 * x0 = S6n-5 modulo 10000
 * y0 = S6n-4 modulo 10000
 * z0 = S6n-3 modulo 10000
 * dx = 1 + (S6n-2 modulo 399)
 * dy = 1 + (S6n-1 modulo 399)
 * dz = 1 + (S6n modulo 399)
 * S1,…,S300000 はラグ付きフィボナッチ法により生成される.
 * 1 ≤ k ≤ 55 の場合, Sk = [100003 - 200003k + 300007k3] (modulo 1000000)
 * 56 ≤ k の場合, [Sk-24 + Sk-55] (modulo 1000000)
 * したがって, C1 は {(7, 53, 183), (94, 369, 56)}, C2 は {(2383, 3563, 5079), (42,
 * 212, 344)} となる
 * C1, …, C100 の結合直方体の体積は 723581599 である.
 * C1, …, C50000 の結合直方体の体積を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 212\n");
    
    // TODO: Implement solution here
    
    return 0;
}
