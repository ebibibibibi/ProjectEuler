/*
 * Project Euler - Problem 605
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20605
 * 
 * Problem 605 「ペアごとのコイントスゲーム」  †
 * n人のプレイヤーが隣り合ったペア同士で行うゲームを考える．1 ラウンド目にはプレーヤー 1 と 2 が, 2ラウンド目にはプレーヤー 2 と 3
 * が, というようにして, n ラウンド目にはプレーヤー n と 1 が勝負を行う. n+1 ラウンド目には 1 と 2 が行い,
 * その後は同じように繰り返していく.
 * つまり, r ラウンド目にはプレーヤー ((r-1) mod n)+1 とプレーヤー (r mod n)+1 が勝負をする.
 * 各ラウンドでは, 公平なコインを投げることによってどちらのプレーヤーの勝ちかを決める. あるプレーヤーがラウンド r と r+1
 * で両方勝ったとき, そのプレーヤーをこのゲーム全体の勝者とする.
 * Pn(k) を, n 人で行うゲームでプレーヤー k が勝者となる確率を既約分数で表したものとする. 例えば, P3(1)=12/49,
 * P6(2) = 368/1323 である.
 * Mn(k) を, Pn(k) の分子と分母の積とする. 例えば, M3(1) = 588, M6(2) = 486864 である.
 * M108+7(104+7) の末尾の 8 桁を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 605\n");
    
    // TODO: Implement solution here
    
    return 0;
}
