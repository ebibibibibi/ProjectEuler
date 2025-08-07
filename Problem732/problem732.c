/*
 * Project Euler - Problem 732
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20732
 * 
 * Problem 732 「トロールたちの肩に立つ」  †
 * N 人のトロールが，深さ Dn cm の穴の中にいる。n 番目のトロールは以下の特性を持つ。
 * 踵から肩まで hn cm
 * 腕の長さは ln cm
 * IQ（短気指数) は qn
 * 
 * トロールたちは下にいるトロールの肩の上に立つことにより，積み上がることができる。一番上のトロールの手が地面に届くとトロールは穴から逃げ出せる。逃げたトロールは，この脱出作戦にはもはや関与できなくなる。
 * トロールたちは，逃げ出したトロールの IQ の合計 Q(N) を最大にするように最適の作戦を立てる。
 * rn = [(5n mod (109 + 7)) mod 101] + 50
 * hn = r3n
 * ln = r3n+1
 * qn = r3n+2
 * DN = (1/2) n=0N-1 hn
 * たとえば，最初のトロール(n=0) は 肩まで 51cm，手の長さは 55 cm，IQ は 75 であるとしよう。
 * このとき，Q(5)=401, Q(15)=941 である。
 * Q(1000) を求めよ。
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 732\n");
    
    // TODO: Implement solution here
    
    return 0;
}
