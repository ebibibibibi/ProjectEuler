/*
 * Project Euler - Problem 444
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20444
 * 
 * Problem 444 「円卓宝くじ」  †
 * p 人のグループで円卓に座り宝くじのトレードゲームを行う事になった.
 * それぞれの人はランダムに割り当てられたスクラッチが削られていない宝くじから始める. それぞれのくじはスクラッチを削ると,
 * 1ポンドからpポンドの範囲でポンド単位の(整数ポンドの)賞金が出る, 同じくじは2つとない.
 * ゲームの目的は各人がくじの賞金を最大にしてゲームを退場することだ.
 * 任意の人が最初のプレーヤーに選ばれる. テーブルを周回して, 各プレーヤーは2つの選択肢のうちどれか1つを選択する:
 * 1. プレーヤーはくじを削り, テーブルの全員にくじの賞金額を明らかにする.
 * 2. プレーヤーは自分の削られていないくじを前のプレーヤーの削られたくじとトレードし, そのくじを受け取ってゲームから退場する.
 * 前のプレーヤーは自身の新しく割り当てられたくじを削り, テーブルの全員にくじの賞金額を明らかにする.
 * ゲームはすべてのくじが削られた時点で終了となる. テーブルに残ったすべてのプレーヤーはその時に持っているくじとともに退場することとなる.
 * 各プレーヤーは自身のくじの賞金額の期待値を最大化するための最適な戦略を取るものと仮定する.
 * p 人のプレーヤーを含むゲームが終了した時, テーブルに残ったプレーヤーの人数の期待数を E(p) で表すとしよう. (例えば,
 * 5桁の有効桁に四捨五入したとき E(111) = 5.2912 となる)
 * &ref(): File not found: "p444_eq1.png" at page "Problem 444";としよう.
 * k > 1 において &ref(): File not found: "p444_eq2.png" at page "Problem 444";
 * としよう.
 * S&sub{20};(10&sup{14};) を求め, 回答は10桁の有効桁に四捨五入した科学的記数法で表記せよ.
 * 仮数部と指数部のセパレーターには小文字のeを使うこと. (例えば,S3(100) = 5.983679014e5)
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 444\n");
    
    // TODO: Implement solution here
    
    return 0;
}
