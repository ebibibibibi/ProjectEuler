/*
 * Project Euler - Problem 488
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20488
 * 
 * Problem 488 「不安定な Nim」  †
 * アリスとボブは毎日 Nim をプレイして楽しく過ごしている. しかし, 彼らはついに通常の3つの山を使う Nim に飽きてしまった.
 * そこで, 彼らは特別ルールを追加した:
 * 同じサイズの2つの山を作ってはならない.
 * 3つの山の大きさを3つ組み (a, b, c) で表示する.
 * この特別ルールのもとでは, (2, 4, 5) は後手必勝となる山の配置の1つである.
 * 以下に示すように:
 * アリスが (2,4,3) にする
 * ボブが (0,4,3) にする
 * アリスが (0,2,3) にする
 * ボブが (0,2,1) にする
 * 通常の3つの山を使う Nim と違い, (0, 1, 2), そしてこれを並べ替えた配列がこのゲームの最終状態となる.
 * 整数 N に対し, 0 < a < b < c < N において, すべての後手必勝の山の配置による a + b + c の和を F(N)
 * としよう.
 * 例えば, F(8) = 42, なぜなら4つの後手必勝の配置がある, (1,3,5), (1,4,6), (2,3,6), (2,4,5).
 * また F(128) = 496062 であることがわかる.
 * S(10&sup{18};) の末尾9桁を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 488\n");
    
    // TODO: Implement solution here
    
    return 0;
}
