/*
 * Project Euler - Problem 182
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20182
 * 
 * Problem 182 「RSA暗号」  †
 * RSA 暗号は以下のアルゴリズムに基づいている:
 * 鍵生成
 * 二つの異なる素数 p と q を生成する.
 * n=pq とし, φ=(p-1)(q-1) (=φ(n))とする.
 * 1<e<φ の範囲で gcd(e,φ)=1 となる整数 e を決定する.
 * 暗号化
 * 平文を [0,n-1] 中の整数 m とする. 平文は以下の方法で [0,n-1] 中の整数に暗号化される.
 * c=me mod n とし, c を暗号文とする.
 * 復号
 * 暗号文を c とし以下の操作を行う.
 * ed=1 mod φとなる d を計算する. m=cd mod n が元の平文となる.
 * さてある e と m について me mod n = m となることがある. 以下, me mod n=m となる m を公然の平文と呼ぶことにする.
 * 公開鍵の一部 e を選ぶときには, 公然の平文が多くならないという点が重要である.
 * 例えば, p = 19, q = 37 とする. このとき, n = 19 * 37 = 703 でありφ = 18 * 36 = 648
 * である. もし e = 181 とすると, gcd(181, 648) = 1 であるが, 全ての平文 m (0≤m≤n-1)
 * が公然の平文となってしまう. e についてどのような選び方をしても, 必ずいくつかは公然の平文が存在する. 従って,
 * 公然の平文の数を最小化するように e を選ぶのは重要である.
 * さて, p = 1009, q = 3643 とする. このとき, 公然の平文の個数が最小となる全ての e の総和を求めよ (ただし
 * 1<e<φ(1009,3643) かつ gcd(e,φ)=1).
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 182\n");
    
    // TODO: Implement solution here
    
    return 0;
}
