/*
 * Project Euler - Problem 344
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20344
 * 
 * Problem 344 「銀貨ゲーム」  †
 * N.G. de Bruijn の銀貨ゲームの一変種は次のように説明される :
 * 四角いマスが帯状に並んだ盤面があり, そこにある個数の硬貨が最大一マスに一個で置かれている.
 * 銀貨と呼ばれる硬貨がひとつだけ任意の位置にあり, 二人のプレイヤーは交互に硬貨の移動を繰り返す.
 * プレイヤーはそれぞれの局面で基本移動か特殊移動のどちらかを行わなければならない.
 * 基本移動はひとつの硬貨を選択しマスひとつ以上左に移動させる. 硬貨は盤面を出たり, 他の硬貨の上に乗せたり飛び越えたりしてはならない.
 * その一方, プレイヤーは基本移動ではなく, 一番左にある硬貨を手に入れるという特殊移動を選択することができる. もし基本移動が不可能な場合,
 * プレイヤーは強制的に一番左の硬貨を手に入れなければならない.
 * 銀貨を手に入れたプレイヤーが勝者となる.
 * &ref(): File not found: "p_344_silverdollar.gif" at page "Problem 344";
 * 後手がどのようにプレイしても, 先手が勝利できる硬貨の配列を「勝利配置」と呼ぶ.
 * 仮に n 個のマスの盤面, c 個の普通の硬貨, 1個の銀貨の場合の勝利配置の数を W(n,c) とする.
 * すでに W(10,2) = 324, W(100,10) = 1514704946113500 が求められている.
 * 半素数 1 000 036 000 099 (= 1 000 003 · 1 000 033 ) を法とする W(1 000 000, 100)
 * の値を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 344\n");
    
    // TODO: Implement solution here
    
    return 0;
}
