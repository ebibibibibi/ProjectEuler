/*
 * Project Euler - Problem 459
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20459
 * 
 * Problem 459 「どんでん返しゲーム」  †
 * どんでん返しゲームとは N x N マスの盤面でプレイする二人用のゲームである.
 * それぞれのマスには片面が白,もう片面が黒のコマが置かれている.
 * ゲームはすべてのコマの白い面が見える状態からスタートする.
 * 対局では, 以下の性質を持つ長方形の中のすべてのコマを裏返す:
 * 長方形の一番右上のマスは白のコマ
 * 長方形の幅は完全平方数 (1, 4, 9, 16, ...)
 * 長方形の高さは三角数 (1, 3, 6, 10, ...)
 * #ref(): File not found: "p459-flipping-game-0.png" at page "Problem 459"
 * 対局者は交互に上記の作業を行う. すべてのマスを黒に変えたものが勝者となる.
 * すべてが白いコマの状態になっている N x N の盤面で, 完璧な対局を行うと仮定した時, 先手必勝となる手
 * (相手がどんな手を差しても勝つことができる最初の手) の数を W(N) としよう.
 * W(1) = 1, W(2) = 0, W(5) = 8, そして W(10&sup{2};) = 31395.
 * N=5 の場合, 8つの先手必勝の手がある:
 * #ref(): File not found: "p459-flipping-game-1.png" at page "Problem 459"
 * #ref(): File not found: "p459-flipping-game-2.png" at page "Problem 459"
 * W(10&sup{6};) を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 459\n");
    
    // TODO: Implement solution here
    
    return 0;
}
