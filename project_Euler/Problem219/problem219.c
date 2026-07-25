/*
 * Project Euler - Problem 219
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20219
 * 
 * Problem 219 「非対称コスト符号化」  †
 * AとBをビット列(0と1の連続列)とする.
 * Bの左端から"Aの長さ"ビットがAと一致する時, AをBの"接頭部"(prefix)と呼ぶ.
 * 例えば 00110 は 001101001 の接頭部だが, 00111 や 100110 の接頭部ではない.
 * サイズnの"接頭符号"(prefix-free code)とは, 次の条件を満たす n 個の異なるビット列の集合である:
 * どのビット列も他のビット列の接頭部ではない. 下の例はサイズ6の接頭符号である.
 * 0000, 0001, 001, 01, 10, 11
 * ここでビット0を送るのに1ペニー, ビット1を送るのに4ペンスかかると仮定する.
 * 上で挙げた接頭符号にかかる総計は35ペンスとなる.
 * この例は非対称なコスト分布となるが, なんと(同じサイズの中で)もっとも安い符号の１つである. 短く書くと, Cost(6)=35 となる.
 * Cost(109)を求めよ.
 * [訳注  ペンス: ペニーの複数形]
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 219\n");
    
    // TODO: Implement solution here
    
    return 0;
}
