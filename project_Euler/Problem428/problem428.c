/*
 * Project Euler - Problem 428
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20428
 * 
 * Problem 428 「円のネックレス」  †
 * a, b, c を正の整数とする.
 * |WX| = a, |XY| = b, |YZ| = c, |WZ| = a + b + c となる同一直線上の四点 W, X, Y, Z
 * があるとしよう.
 * XY を直径とする円を C&sub{in}; とする.
 * WZ を直径とする円を C&sub{out}; とする.
 * k ≥ 3 のときに k 個の円 C&sub{1};, C&sub{2};, ..., C&sub{k}; を以下のように配置できるとき, 三つ組
 * (a, b, c) をネックレス三つ組と呼ぶ.
 * C&sub{i}; は 1 ≤ i, j ≤ k かつ i ≠ j において, いかなる C&sub{j}; とも共有する内点を持たない.
 * C&sub{i}; は 1 ≤ i ≤ k において, C&sub{in};, C&sub{out}; と共に接している.
 * C&sub{i}; は 1 ≤ i < k において, C&sub{i+1}; に接している.
 * C&sub{k}; は C&sub{1}; に接している.
 * 例えば, (5, 5, 5) と (4, 3, 21) はネックレス三つ組であり, (2, 2, 5) はそうではないことも示される.
 * #ref(): File not found: "p428_necklace.png" at page "Problem 428"
 * a, b, c が正の整数でかつ b ≤ n のときのネックレス三つ組の個数を T(n) としよう. 例えば, T(1) = 9, T(20) =
 * 732, T(3000) = 438106.
 * T(1 000 000 000) を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 428\n");
    
    // TODO: Implement solution here
    
    return 0;
}
