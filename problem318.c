/*
 * Project Euler - Problem 318
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20318
 * 
 * Problem 318 「2011個の9」  †
 * 実数√2+√3について考える.
 * √2+√3の偶数乗を計算すると以下が得られる.
 * (√2+√3)&sup{2}; = 9.898979485566356...
 * (√2+√3)&sup{4}; = 97.98979485566356...
 * (√2+√3)&sup{6}; = 969.998969071069263...
 * (√2+√3)&sup{8}; = 9601.99989585502907...
 * (√2+√3)&sup{10}; = 95049.999989479221...
 * (√2+√3)&sup{12}; = 940897.9999989371855...
 * (√2+√3)&sup{14}; = 9313929.99999989263...
 * (√2+√3)&sup{16}; = 92198401.99999998915...
 * これらの小数部分の先頭から連続している9の数は非減少であるように見える.
 * 実際に(√2+√3)&sup{2n};の小数部分はnを大きくすると1に近づいていくことが証明できる.
 * p,qを正の整数でp<qとしたときに, (√p+√q)&sup{2n};の小数部分が1に近づいていくような全ての実数√p+√qについて考える.
 * C(p,q,n)を(√p+√q)&sup{2n};の小数部分の先頭から連続する9の数とする.
 * N(p,q)をC(p,q,n)≧2011となる最小のnとする.
 * p+q≦2011についてΣN(p,q)を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 318\n");
    
    // TODO: Implement solution here
    
    return 0;
}
