/*
 * Project Euler - Problem 412
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20412
 * 
 * Problem 412 「グノモンの番号付け」  †
 * 整数 m, n ( 0 ≤ n < m ) において, m×m の格子の右上から n×n の格子を取り除いたものを L(m, n) としよう. (
 * 訳注 : このような図形のことをグノモン (gnomon) と呼ぶ. )
 * 例えば, L(5, 3) は以下のようになる:
 * #ref(): File not found: "p412_table53.png" at page "Problem 412"
 * すべてのマスの数字が下のマスと左のマスにある数字より小さくなるように, L(m, n) のそれぞれのマスに連続する整数 1, 2, 3, ...
 * を付けていきたい.
 * L(5, 3) のときの有効な番号付けを2例示す:
 * #ref(): File not found: "p412_tablenums.png" at page "Problem 412"
 * L(m, n) のときの有効な番号付けの個数を LC(m, n) としよう.
 * LC(3, 0) = 42, LC(5, 3) = 250250, LC(6, 3) = 406029023400, そして LC(10, 5)
 * mod 76543217 = 61251715 であることが確かめられている.
 * LC(10000, 5000) mod 76543217 を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 412\n");
    
    // TODO: Implement solution here
    
    return 0;
}
