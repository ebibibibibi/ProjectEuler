/*
 * Project Euler - Problem 430
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20430
 * 
 * Problem 430 「範囲返し」  †
 * N 枚の円盤が一列に並んでいて, 左から右に 1 から N まで番号付けされている.
 * それぞれの円盤は黒い面と白い面を持っている. 当初すべての円盤は白い面が見える状態にある.
 * それぞれのターンで, 2つの, 異なる必要のない整数 A と B が 1 から N までの間 ( 1 と N を範囲に含む )
 * からランダムかつ一様に選ばれる.
 * そして A から B までの番号付けされたすべての円盤 ( A, B の番号の円盤を含む ) が裏返される.
 * 下記に N = 8 の場合の例を示す. 最初のターンでは A = 5 と B = 2, 2回目のターンでは A = 4 と B = 6
 * が選ばれている.
 * #ref(): File not found: "p_430_flips.gif" at page "Problem 430"
 * M 回のターンのあと白い面が見えている円盤の個数の期待値を E(N, M) としよう.
 * E(3, 1) = 10/9, E(3, 2) = 5/3, E(10, 4) ≈ 5.157, そして E(100, 10) ≈ 51.893
 * であることを確認できる.
 * E(10&sup{10};, 4000) を求めよ.
 * 回答は小数点以下2桁になるよう四捨五入して答えよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 430\n");
    
    // TODO: Implement solution here
    
    return 0;
}
