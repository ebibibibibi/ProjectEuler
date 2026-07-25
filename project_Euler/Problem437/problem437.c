/*
 * Project Euler - Problem 437
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20437
 * 
 * Problem 437 「フィボナッチ原始根」  †
 * n=0 から 9 までの 8&sup{n}; modulo 11 を計算すると以下のようになる: 1, 8, 9, 6, 4, 10, 3, 2,
 * 5, 7.
 * このように1から10までのすべての取りうる値が現れる. したがって 8 は 11 の原始根である.
 * しかし話はここからだ:
 * よく調べてみると以下のことがわかる:
 * 1+8=9
 * 8+9=17≡6 mod 11
 * 9+6=15≡4 mod 11
 * 6+4=10
 * 4+10=14≡3 mod 11
 * 10+3=13≡2 mod 11
 * 3+2=5
 * 2+5=7
 * 5+7=12≡1 mod 11.
 * したがって 11 を法として 8 のべき乗を割った剰余は周期 10 で循環し, そして 8&sup{n}; + 8&sup{n+1}; ≡
 * 8&sup{n+2}; (mod 11).
 * 8 を 11 のフィボナッチ原始根と呼ぶ.
 * すべての素数がフィボナッチ原始根を持つわけではない.
 * 1つ以上のフィボナッチ原始根を持つ 10000 未満の素数は 323 個あり, その和は 1480491 となる.
 * 100,000,000 未満で少なくとも1つのフィボナッチ原始根を持つ素数の和を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 437\n");
    
    // TODO: Implement solution here
    
    return 0;
}
