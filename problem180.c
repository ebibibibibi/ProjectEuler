/*
 * Project Euler - Problem 180
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20180
 * 
 * Problem 180 「3変数をもつ関数の有理数の零点」  †
 * あるnについて, 以下の三つの関数を定義する.
 * f1,n(x,y,z) = xn+1 + yn+1 - zn+1
 * f2,n(x,y,z) = (xy + yz + zx)*(xn-1 + yn-1 - zn-1)
 * f3,n(x,y,z) = xyz*(xn-2 + yn-2 - zn-2)
 * そしてそれらの組み合わせで以下を定義する.
 * fn(x,y,z) = f1,n(x,y,z) + f2,n(x,y,z) - f3,n(x,y,z)
 * x,y,zの全てがa / b (0 < a < b ≤ k)という形の有理数であり, かつfn(x,y,z) =
 * 0となる整数nが（少なくとも一つ）存在するときに, (x,y,z)の組を"オーダーkの黄金の三つ組"と呼ぶことにする.
 * s(x,y,z) = x + y + zとして, オーダー35の黄金の三つ組について, 全ての相異なるs(x,y,z)の和をt = u /
 * vとする. ただし, s(x,y,z)と t は既約であるとする.
 * u + vを求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 180\n");
    
    // TODO: Implement solution here
    
    return 0;
}
