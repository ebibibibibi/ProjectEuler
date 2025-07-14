/*
 * Project Euler - Problem 301
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20301
 * 
 * Problem 301 「Nim」  †
 * Nim は 2 人のプレイヤーがいくつかの山に分かれた石を交互にとっていくゲームである.
 * ここでは以下のような Nim について考える.
 * ゲーム開始時点で 3 つの山がある
 * 各ターンでプレイヤーは任意の 1 つの山から 1 つ以上の任意の数の石をとる
 * すべての石がなくなり, 石を取ることができなくなった最初のプレイヤーが負けとなる
 * (n1,n2,n3) がそれぞれの山に残っている石の数を表すとすると
 * 後手必勝の場合 0
 * 先手必勝の場合 0 以外
 * を返す関数 X(n1, n2, n3) が定義できる.
 * 例えば, X(1, 2, 3) = 0 である.
 * なぜなら先手がどのように石をとっても, 後手は二つの山に同じ数の石が残るようにとることができ,
 * その後は先手と同じように他方の山から石をとっていけば勝てるからである.
 * 具体的に書くと以下ようになる
 * 先手 (1, 2, 1)
 * 後手 (1, 0, 1)
 * 先手 (0, 0, 1)
 * 後手 (0, 0, 0)
 * 正の整数 n ≦ 230 のうち X(n, 2n, 3n) = 0 となるものはいくつあるか.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 301\n");
    
    // TODO: Implement solution here
    
    return 0;
}
