/*
 * Project Euler - Problem 422
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20422
 * 
 * Problem 422 「双曲線上の点列」  †
 * 12x&sup{2}; + 7xy - 12y&sup{2}; = 625 の式で定義される双曲線を H とする.
 * 次に, 点 (7, 1) を X と定義する. X は H 上にあるのがわかるだろう.
 * そして, H 上の点列 (sequence of points) {P&sub{i}; : i ≥ 1} を以下のように定義する:
 * P&sub{1}; = (13, 61/4).
 * P&sub{2}; = (-43/6, -4).
 * i > 2 の i に対して, 点 P&sub{i}; は線分 P&sub{i};P&sub{i-1}; が線分 P&sub{i-2};X
 * と平行になるように引かれた時の P&sub{i-1}; とは異なる方の H 上の唯一の点である. P&sub{i}; は明確に定義することができ,
 * さらにそれらの座標は常に有理数となる.
 * #ref(): File not found: "p422_hyperbola.gif" at page "Problem 422"
 * P&sub{3}; = (-19/2, -229/24), P&sub{4}; = (1267/144, -37/12), P&sub{7}; =
 * (17194218091/143327232, 274748766781/1719926784) がすでに与えられている.
 * n = 11&sup{14}; のときの P&sub{n}; を求め, 以下のフォーマットで答えよ:
 * もし P&sub{n}; を既約分数, また分母を正数として (a/b, c/d) で表した時, 答えは (a + b + c + d) mod
 * 1 000 000 007 とする.
 * 例えば n = 7 のとき, 答えるべき解答は 806236837 となる.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 422\n");
    
    // TODO: Implement solution here
    
    return 0;
}
