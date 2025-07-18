/*
 * Project Euler - Problem 336
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20336
 * 
 * Problem 336 「maximix 配置」  †
 * 汽車を使って, 4 個の貨物を ABCD の順に輸送する. しかし, 汽車が荷物を集めに来た際, ときに貨物が正しい順でないことがある.
 * 並び替えのために貨物はすべて大きな回転台に移される. 特定の点で貨物が切り離されると, 汽車は自身につながったままの貨物ごと回転台から離れる.
 * 残された貨物は 180 度回転する. 貨物はすべて再びつなげられ, 回転台を使う回数がなるだけ少なくなるようにこの手続きが繰り返される.
 * ADCB のような配置は簡単に解くことができる：貨物を A と D の間で切り離し, DCB を回転すると正しい順が得られる.
 * しかし, 汽車の操縦者であるシンプル・サイモンは効率があまりよくなく, いつも最初に貨物 A を正しい位置に移し, 次に貨物 B を移し,
 * 以下これを繰り返すというやり方でこの問題を解く.
 * ４個の貨物を使うと, Simon にとってあり得る最悪の配置（maximix 配置と呼ぶ）は DACB と DBAC である；それぞれ 5
 * 回の回転を要する（最も効率的なアプローチを使うと 3 回の回転のみで解くことができるが）. DACB に対する彼の手順を以下に示す.
 * 6 個の貨物に対する maximix 配置は 24 個あることが確かめられる. そのうち辞書順で 10 番目の maximix 配置は
 * DFAECB である.
 * 11 個の貨物に対し辞書順で 2011 番目の maximix 配置を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 336\n");
    
    // TODO: Implement solution here
    
    return 0;
}
