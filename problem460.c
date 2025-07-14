/*
 * Project Euler - Problem 460
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20460
 * 
 * Problem 460 「移動する蟻」  †
 * ユークリッド平面上において, 点 A(0, 1) から, ある整数を d として, 点 B(d, 1) まで蟻が旅をする.
 * 各段階で, (x&sub{0};, y&sub{0};) にいる蟻は x&sub{1}; ≥ 0, そして y&sub{1}; ≥ 1
 * を満たす格子点 (x&sub{1};, y&sub{1};) の一つを選択し, その (x&sub{1};, y&sub{1};) まで一定速度
 * v でまっすぐに進む. v の値は以下のように y&sub{0}; と y&sub{1}; によって決まる :
 * もし y&sub{0}; = y&sub{1}; なら, v の値は y&sub{0}; に等しい.
 * もし y&sub{0}; ≠ y&sub{1}; なら, v の値は (y&sub{1}; - y&sub{0};) /
 * (ln(y&sub{1};) - ln(y&sub{0};)) に等しい.
 * 左の図は d = 4 のときに起こりうる道のりのひとつである. 最初に蟻は A(0, 1) から P&sub{1};(1, 3) まで速度 (3
 * - 1) / (ln(3) - ln(1)) ≈ 1.8205 で向かう. その結果所要時間は sqrt(5) / 1.8205 ≈ 1.2283
 * となる.
 * 点 P&sub{1};(1, 3) から点 P&sub{2};(3, 3) まで蟻は速度 3 で移動し, 所要時間は 2 / 3 ≈ 0.6667
 * となる. 点 P&sub{2};(3, 3) から点 B(4, 1) まで蟻は速度 (1 - 3) / (ln(1) - ln(3)) ≈
 * 1.8205 で移動し, 所要時間は sqrt(5) / 1.8205 ≈ 1.2283 となる.
 * したがって総所要時間は 1.2283 + 0.6667 + 1.2283 = 3.123 となる.
 * 右の図は別の道のりの場合である. 総所要時間は 0.98026 + 1 + 0.98026 = 2.96052 と計算される. これは d = 4
 * の場合における最速のコースであることがわかる.
 * #ref(): File not found: "p_460_ant.jpg" at page "Problem 460"
 * 蟻が最速のコースを選んだ時の総所要時間を F(d) としよう. 例として, F(4) ≈ 2.960516287.
 * F(10) ≈ 4.668187834, そして F(100) ≈ 9.217221972 となることが確認できる.
 * F(10000) を求めよ. 回答は小数点以下9桁となるよう四捨五入して答えよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 460\n");
    
    // TODO: Implement solution here
    
    return 0;
}
