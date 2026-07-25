/*
 * Project Euler - Problem 400
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20400
 * 
 * Problem 400 「フィボナッチ木ゲーム」  †
 * フィボナッチ木とは以下のように再帰的に定義された二分木のことである:
 * T(0) はノード(節点)を持たない木(空木)である.
 * T(1) はノードを一つだけ持つ二分木である.
 * T(k) は T(k-1) と T(k-2) を子ノードとして持つルートノード(最上位にあるノード)からなる.
 * このような木構造上で二人の対局者がゲームをする. それぞれの局面で対局者はあるノードを選択し, そのノードをルートとする部分木全体を削除する.
 * 木全体のルートノードを強制的に取らされた対局者が敗者となる.
 * k=1 から k=6 までの T(k) に対し最初の局面で先手必勝となる手は以下のようになる. (訳注:赤いノードで示されている)
 * T(k) の木構造上でゲームをした時, 最初の局面で先手必勝となる(すなわち, 後手が勝てる戦略がない)手の数を f(k) としよう.
 * 例として f(5) = 1, f(10) = 17 となる.
 * f(10000) を求めよ. 末尾18桁を回答として答えよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 400\n");
    
    // TODO: Implement solution here
    
    return 0;
}
