/*
 * Project Euler - Problem 325
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20325
 * 
 * Problem 325 「石取りゲーム その2」  †
 * 2 つの石の山と 2 人のプレイヤーでゲームをプレイする. 各ターンでは, プレイヤーは大きいほうの山から石を取り除く. 取り除く石の個数は,
 * 小さい方の山の石の個数の整数倍でなくてはならない.
 * 例えば, 順序つきの対 (6,14) で, 小さいほうの山に 6 個の石, 大きいほうの山に 14 個の石がある状態を表すとすると,
 * 先手は大きいほうの山から 6 または 12 個の石を取り除くことができる.
 * いずれかの山から石を全て取り除いたプレイヤーが勝利する.
 * 先手が必勝となる状態を勝利状態と呼ぶ. 例えば, (1,5), (2,6), (3,12) は,
 * 先手は二つ目の山から即座に全ての石を取り除けるため, 勝利状態である.
 * 先手がどうしようとも後手が必勝となる状態を敗北状態と呼ぶ. 例えば, (2,3) や (3,4)
 * は敗北状態である：どのような手をとっても後手が勝利状態となる.
 * 0＜x&sub{i};＜y&sub{i};≦N について, すべての敗北状態 (x&sub{i};,y&sub{i};) に対する
 * (x&sub{i};+y&sub{i};) の和を S(N) と定義する. S(10) = 211, S(10&sup{4};) =
 * 230312207313 となることが確かめられる.
 * S(10&sup{16};) mod 7&sup{10}; を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 325\n");
    
    // TODO: Implement solution here
    
    return 0;
}
