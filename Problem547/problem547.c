/*
 * Project Euler - Problem 547
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20547
 * 
 * Problem 547 「穴の空いた長方形状の板上にあるランダム点間の距離」  †
 * 長方形内に2点をランダムに(一様分布で)選ぶと仮定したとき, その2点間距離の期待値を特定できる.
 * 例えば, 単位正方形内のランダムな2点間距離の期待値は 0.521405 に, 辺が 2 と 3
 * の長さを持つ長方形のランダムな2点間距離の期待値は 1.317067 になる.
 * ここで, 長さ n ≥ 3 の辺からなり n&sup{2}; 個の単位正方形からなる整数サイズの正方形から, x × y 個の単位正方形 (ここで
 * 1 ≤ x,y ≤ n - 2) からなる長方形を取り除いた, サイズ n の穴の空いた長方形状の板を定義しよう.
 * n = 3 の場合は穴の空いた長方形状の板はひとつだけ存在する.
 * #ref(): File not found: "p547-holes-1.png" at page "Problem 547"
 * n = 4 の場合, 回転や鏡像による重複を許せば 9 個の個別な穴の空いた長方形状の板が得られる.
 * #ref(): File not found: "p547-holes-2.png" at page "Problem 547"
 * サイズ n の存在しうる穴の空いた長方形状の板に対してそれぞれの上にランダムに選んだ2点間距離の期待値の和を S(n) としよう.
 * その2点は内部の長方形を取り除いて残った領域, すなわち上記で示した灰色の領域に置かれるものとする.
 * 例えば, 小数点以下が4桁になるよう四捨五入すると, S(3) = 1.6514, S(4) = 19.6564 となる.
 * 小数点以下が4桁になるよう四捨五入した S(40) を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 547\n");
    
    // TODO: Implement solution here
    
    return 0;
}
