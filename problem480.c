/*
 * Project Euler - Problem 480
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20480
 * 
 * Problem 480 「最後の質問」  †
 * 下記のフレーズから, 文字を選択して作る事ができる全ての単語について考えよう:
 * thereisasyetinsufficientdataforameaningfulanswer
 * (訳注: "THERE IS AS YET INSUFFICIENT DATA FOR A MEANINGFUL ANSWER."
 * 「意味ある答えを出すにはデータ不足」
 * アイザック・アシモフの短編「The Last Question (最後の質問)」より)
 * 15文字ないしそれ以下の単語がアルファベット順にリストされ, 1から順番に番号付けされているとしよう.
 * そのリストはこのようになる:
 * 1 : a
 * 2 : aa
 * 3 : aaa
 * 4 : aaaa
 * 5 : aaaaa
 * 6 : aaaaaa
 * 7 : aaaaaac
 * 8 : aaaaaacd
 * 9 : aaaaaacde
 * 10 : aaaaaacdee
 * 11 : aaaaaacdeee
 * 12 : aaaaaacdeeee
 * 13 : aaaaaacdeeeee
 * 14 : aaaaaacdeeeeee
 * 15 : aaaaaacdeeeeeef
 * 16 : aaaaaacdeeeeeeg
 * 17 : aaaaaacdeeeeeeh
 * ...
 * 28 : aaaaaacdeeeeeey
 * 29 : aaaaaacdeeeeef
 * 30 : aaaaaacdeeeeefe
 * ...
 * 115246685191495242: euleoywuttttsss
 * 115246685191495243: euler
 * 115246685191495244: eulera
 * ...
 * 525069350231428029: ywuuttttssssrrr
 * 単語 w の位置を P(w) と定義する.
 * 位置 p の単語を W(p) と定義する.
 * P(w) と W(p) は逆元になっていることがわかる: P(W(p)) = p,そして W(P(w)) = w.
 * 例:
 * W(10) = aaaaaacdee
 * P(aaaaaacdee) = 10
 * W(115246685191495243) = euler
 * P(euler) = 115246685191495243
 * W(P(legionary) + P(calorimeters) - P(annihilate) + P(orchestrated) -
 * P(fluttering)) を求めよ.
 * 回答は小文字を使用して答えよ. (句読点やスペース無しで)
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 480\n");
    
    // TODO: Implement solution here
    
    return 0;
}
