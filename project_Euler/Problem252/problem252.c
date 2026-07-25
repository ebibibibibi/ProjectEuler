/*
 * Project Euler - Problem 252
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20252
 * 
 * Problem 252 「凸ホール」  †
 * 平面上に与えられた点の集合に対し, 以下を満たす凸多角形を凸ホール(convex hole)と定義する:
 * 頂点は与えられた点のいくつかから成り, 内部に与えられた点を含まない(頂点以外に, 多角形の辺上に与えられた点があっても構わない)
 * 例として, 下の図は 20 個の点とそれに対するいくつかの凸ホールを示している. 赤い多角形で示した凸ホールは 1049694.5
 * の単位正方形と面積が等しく, この点の集合に対し最大の凸ホールである.
 * この例では, 次の擬似乱数によって生成された 最初の 20 個の点 (T2k-1, T2k) (k = 1,2,…,20) を使用した.
 * S0 = 290797
 * Sn+1 = Sn2 mod 50515093
 * Tn = (Sn mod 2000 ) − 1000
 * すなわち, (527, 144), (−488, 732), (−454, −947), ... である.
 * この擬似乱数生成器による最初の 500 個の点を使用する凸ホールの中で, 最大の面積を求めよ.
 * 小数点以下に1桁をつけて回答を入力せよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 252\n");
    
    // TODO: Implement solution here
    
    return 0;
}
