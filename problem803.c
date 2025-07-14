/*
 * Project Euler - Problem 803
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20803
 * 
 * Problem 803 「疑似乱数的な数列」  †
 * Rand48 はいくつかのプログラミング言語で使われる疑似乱数生成器です。これは任意に与えられた整数 a0 から数列をルール「 an = (
 * 25214903917 * an-1 + 11 ) mod 248 」に従って生成します。
 * bn を an/216 の整数部分を 52 で割った余りとします。数列 b0b1b2... は無限文字列 c=c0c1c2...
 * に次のルールを介して変換されます。 : 0 → a, 1 → b, ..., 25 → z, 26 → A, 27 → B, ..., 51→Z
 * 例えば、もし a0 = 123456 と選ぶと c は b Q Y i c N G C Y ... で始まります。さらに、 100
 * 番目のインデックスから始めると最初に R x q L B f W z v という部分文字列に出会います。
 * あるいは c がもし E U L E R c a t s ... で始まっていると、 a0 = 78580612777175 に違いありません。
 * 今 c が P u z z l e O n e ... で始まっていると仮定します。 c の部分列として最初に L u c k y T e x t
 * が現れるインデックスを求めてください。
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 803\n");
    
    // TODO: Implement solution here
    
    return 0;
}
