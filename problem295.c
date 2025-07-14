/*
 * Project Euler - Problem 295
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20295
 * 
 * Problem 295 「レンズホール」  †
 * 次の条件を満たす時, 2つの円に囲まれた凸状の領域をレンズホール(lenticular hole)と呼ぶ:
 * 円の中心が両方とも格子点上にある.
 * 2つの円は異なる2つの格子点上で交差する.
 * 両方の円で囲まれた凸状の領域の内部は格子点を含まない.
 * 次の円について考える:
 * C&sub{0};: x&sup{2};+y&sup{2};=25
 * C&sub{1};: (x+4)&sup{2};+(y-4)&sup{2};=1
 * C&sub{2};: (x-12)&sup{2};+(y-4)&sup{2};=65
 * 円 C&sub{0};, C&sub{1};, C&sub{2}; は以下の図で示す.
 * C&sub{0}; と C&sub{1}; はレンズホールを形成する. C&sub{0}; と C&sub{2}; も同様である.
 * 正の実数のペア (r&sub{1};, r&sub{2};) が次の条件を満たす時, これをレンズペア(lenticular pair)と呼ぶ:
 * レンズホールを形成するような半径 r&sub{1}; と半径 r&sub{2}; の2つの円が存在する.
 * (1, 5) と (5, √65) は共にレンズペアであることが上の例から確かめられる.
 * L(N) を 0 < r&sub{1}; ≤ r&sub{2}; ≤ N を満たす異なるレンズペア (r&sub{1};, r&sub{2};)
 * の数とする.
 * L(10) = 30, L(100) = 3442 であることが確かめられる.
 * L(100 000)を求めよ.
 * 注意: 最近上限を変更した. 正しい上限を使用しているか確認せよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 295\n");
    
    // TODO: Implement solution here
    
    return 0;
}
