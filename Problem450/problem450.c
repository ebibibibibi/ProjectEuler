/*
 * Project Euler - Problem 450
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20450
 * 
 * Problem 450 「内サイクロイドと格子点」  †
 * 内サイクロイド (hypocycloid) とは, 大きな円の内部で回転する小さな円上の点が描く曲線である. 原点を中心とし,
 * 右端の点から始まる内サイクロイドのパラメトリック方程式は以下のように与えられる:
 * #ref(): File not found: "p450_1.png" at page "Problem 450"
 * ここで R とは大きい円の半径, r は小さい円の半径である.
 * 半径 R と r からなる内サイクロイド上の整数座標の点で, かつ sin(t) と cos(t)が有理数となる t
 * の相当値を持つ別個の点の集合を C(R, r) としよう.
 * C(R, r) の点の x, y 座標の値の絶対値の総和を S(R, r) = &ref(): File not found:
 * "p450_2.png" at page "Problem 450"; としよう.
 * 整数 N について, R ≤ N, 2r < R の場合の R, r による S(R, r) の総和を T(N) = &ref(): File
 * not found: "p450_3.png" at page "Problem 450"; S(R, r) としよう.
 * 以下のように与えられている:
 * C(3, 1) = {(3, 0), (-1, 2), (-1,0), (-1,-2)}
 * C(2500, 1000) =
 * {(2500, 0), (772, 2376), (772, -2376), (516, 1792), (516, -1792), (500,
 * 0), (68, 504), (68, -504),
 * (-1356, 1088), (-1356, -1088), (-1500, 1000), (-1500, -1000)}
 * 注記: (-625, 0) は C(2500, 1000) の要素ではない, なぜなら相当する値 t で sin(t) が有理数とならないからである.
 * S(3, 1) = (|3| + |0|) + (|-1| + |2|) + (|-1| + |0|) + (|-1| + |-2|) = 10
 * T(3) = 10; T(10) = 524; T(100) = 580442; T(10&sup{3};) = 583108600.
 * T(10&sup{6};) を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 450\n");
    
    // TODO: Implement solution here
    
    return 0;
}
