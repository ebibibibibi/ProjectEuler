/*
 * Project Euler - Problem 502
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20502
 * 
 * Problem 502 「城の数え上げ」  †
 * 高さが 1, そして整数値の長さを持つ直方体からなるブロックを定義しよう. そして積み重ねたブロックの配置を城と呼ぶことにする.
 * w の幅と h の高さを持つゲーム盤が与えられており, 城は以下のルールに従って生成される:
 * ブロックは端から飛び出たり空間に張り出したりすることがなければ, 他のブロックの上に配置することができる.
 * 全てのブロックはゲーム盤の格子に整列/スナップされていること.
 * 同じ段の近接する2つのブロックには少なくともその間に1単位分の空間がなければならない.
 * 最下段には w の長さのブロックが置かれている.
 * 城全体で最も積み上がっている部分の高さはぴったり h の高さである.
 * 城は偶数個のブロックによって作られる.
 * 下記にあるのは w=8 そして h=5 のときの城の例である:
 * #ref(): File not found: "p502_castles.png" at page "Problem 502"
 * 格子の変数 w, h が与えられた時の条件を満たす城の個数を F(w,h) で表すとしよう.
 * 例として, F(4,2) = 10, F(13,10) = 3729050610636, F(10,13) = 37959702514, そして
 * F(100,100) mod 1 000 000 007 = 841913936.
 * (F(10&sup{12};,100) + F(10000,10000) + F(100,10&sup{12};)) mod 1 000 000
 * 007 を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 502\n");
    
    // TODO: Implement solution here
    
    return 0;
}
