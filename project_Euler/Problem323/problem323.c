/*
 * Project Euler - Problem 323
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20323
 * 
 * Problem 323 「ランダムな整数のビット論理和演算」  †
 * y0, y1, y2,... を, ランダムな 32 ビット符号なし整数からなる数列とする.
 * （つまり 0 ≦ yi ＜ 232 で全ての値が同様に確からしい. ）
 * 数列 xi に対し次の反復が与えられる:
 * x0 = 0
 * xi = xi-1 | yi-1 （i > 0）（ | はビット単位の OR 演算）
 * すべての i ≧ N に対し xi = 232-1（ビットがすべて1となるパターン）となるような添え字 N が最終的に存在することが分かる.
 * N の期待値を求めよ.
 * 答を小数点以下 10 桁に四捨五入して求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 323\n");
    
    // TODO: Implement solution here
    
    return 0;
}
