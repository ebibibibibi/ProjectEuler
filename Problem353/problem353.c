/*
 * Project Euler - Problem 353
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20353
 * 
 * Problem 353 「危険な月」  †
 * 月を中心 (0,0,0), 半径 r の球 C(r) として表そう.
 * 整数の座標を持つ C(r) の月面上には, 駅が存在している. 座標 (0,0,r) にある駅を北極駅, 座標 (0,0,-r)
 * にある駅を南極駅と呼ぼう.
 * すべての駅は, 他の駅と大きな弧を描いて最短距離となる道路で結ばれている. 2駅間の旅行には危険をともなう. 2駅間の距離を d で表すと,
 * 旅行のリスク測度は (d/πr)&sup{2};となる (これを道程リスクと呼ぼう). 2駅以上を含む旅行の場合,
 * 利用する道程のリスクの合計がその旅行のリスクとなる.
 * 直接北極駅から南極駅へ旅行すると距離は πr となりリスクは1になる. (0,r,0)
 * にある駅を経由して北極駅から南極駅へ旅行すると距離は同じだが, リスクは小さくなる. :
 * (½πr/(πr))&sup{2};+(½πr/(πr))&sup{2};=0.5.
 * 月 C(r) 上にある北極駅から南極駅への旅行にともなう最小リスクを M(r) としよう.
 * 小数点以下11桁で四捨五入すると M(7)=0.1784943998 となる.
 * 1≤n≤15 のときの ΣM(2&sup{n};-1) を求めよ.
 * 小数点以下11桁で四捨五入し a.bcdefghijk の形式で回答せよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 353\n");
    
    // TODO: Implement solution here
    
    return 0;
}
