/*
 * Project Euler - Problem 262
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20262
 * 
 * Problem 262 「山脈」  †
 * 次の式は山岳地帯の連続した地形図を示し, 各ポイント (x,y) の標高 h を表す:
 * 蚊が領域 0 ≤ x,y ≤ 1600 を抜けずに A(200,200) から B(1400,1400) まで飛ぼうとする.
 * 邪魔する山岳のために, 最初に蚊は標高 f のポイント A' までまっすぐ上へ飛ぶ. 次に, 同じ高さ f を保ったまま, 障害をよけて飛び B
 * の真上にあたるポイント B' まで飛ぶ.
 * 最初に, 決められた領域をでないように A から B へ上記のように移動できる最小の f&sub{min}; を決める.
 * 次に, 標高 f&sub{min}; を保ったまま飛ぶ上で, A' と B' の最短の経路を求める.
 * 小数点以下 3 桁に四捨五入した経路の長さを答えとして入力せよ.
 * 注意: 簡単のため, 上に示した標高の関数をほとんどのプログラム言語に適した形で下に記す:
 * h=( 5000-0.005*(x*x+y*y+x*y)+12.5*(x+y) ) * exp(
 * -abs(0.000001*(x*x+y*y)-0.0015*(x+y)+0.7) )
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 262\n");
    
    // TODO: Implement solution here
    
    return 0;
}
