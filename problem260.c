/*
 * Project Euler - Problem 260
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20260
 * 
 * Problem 260 「石取りゲーム」  †
 * 3 つの石の山と 2 人のプレイヤーでゲームを行う.
 * 彼女のターンでは, プレイヤーは 1 個以上の石を山から取る. しかし, 2 つ以上の山から取る場合は,
 * 選んだそれぞれの山から同じ数の石を取らないといけない.
 * つまり, プレイヤーは N>0 を選んで取る:
 * N 個の石を 1 つの山から取る, または
 * N 個の石を 2 つの山からそれぞれ取る(合計 2N 個), または
 * N 個の石を 3 つの山からそれぞれ取る(合計 3N 個)
 * 最後の石を取ったプレイヤーが勝者である.
 * 勝利状態 とは最初のプレイヤーが勝つ状態のことである.
 * 例えば, (0,0,13), (0,11,11), (5,5,5) は, 最初のプレイヤーが全ての石を一度に取れるから勝利状態である.
 * 敗北状態 とは最初のプレイヤーがどんなことをしても 2 人目のプレイヤーが勝つ状態のことである.
 * 例えば, (0,1,2) と (1,3,3) は敗北状態である: ルール上のどんな手を取っても 2 人目のプレイヤーの勝利状態となる.
 * x&sub{i}; ≤ y&sub{i}; ≤ z&sub{i}; ≤ 100 を満たす全ての敗北状態
 * (x&sub{i};,y&sub{i};,z&sub{i};) について考える.
 * この場合 Σ(x&sub{i};+y&sub{i};+z&sub{i};) = 173895 であることがわかる.
 * x&sub{i}; ≤ y&sub{i}; ≤ z&sub{i}; ≤ 1000 を満たす全ての敗北状態を表す
 * (x&sub{i};,y&sub{i};,z&sub{i};) について Σ(x&sub{i};+y&sub{i};+z&sub{i};)
 * を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 260\n");
    
    // TODO: Implement solution here
    
    return 0;
}
