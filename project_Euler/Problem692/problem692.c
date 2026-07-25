/*
 * Project Euler - Problem 692
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20692
 * 
 * Problem 692 「ジークベルトとジョー」  †
 * ジークベルトとジョーがN個の小石の山を使い交互に行うゲームをする．
 * ジークベルトが最初に小石を取る．
 * 彼は（1からNの間で）好きなだけ小石を取ることができる．
 * 以降の各ターンで，順番になったプレイヤーは少なくとも1個，最大で前回のプレイヤーが取った小石の数の倍の個数の小石を取る必要がある．
 * 最後の小石を取ったプレイヤーが勝ちとなる．
 * 
 * ジークベルトは最初のターンにすべての小石を取ることで常に勝つことができるが，ゲームをより面白くするために（ジークベルトとジョーの両方が以降のゲームで最適な手を打つと仮定して）彼がやはり勝つことを保証できる最小数の小石を取ることを選択する．
 * 小石N個の山に対するその最小の量をH(N)とする．
 * H(1)=1, H(4)=1, H(17)=1, H(8)=8, H(18)=5
 * である．
 * G(n)をΣk=1n H(k)とする．
 * G(13)=43である．
 * G(23416728348467685)はいくつか．
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 692\n");
    
    // TODO: Implement solution here
    
    return 0;
}
