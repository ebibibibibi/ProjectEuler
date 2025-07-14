/*
 * Project Euler - Problem 558
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20558
 * 
 * Problem 558 「無理数の基底」  †
 * x3=x2+1 の実数解を r とする。
 * すべての正の整数は、rの異なるべき乗の和として書くことができる。
 * 項の数を有限、2つの指数の差が3以上とすると、一意に表現される。
 * たとえば、 3=1/r10+1/r5+1/r1+r2 10=1/r10+1/r7+r6 である。
 * 興味深いことに、この関係はx3=x2+1 の複素数解にも成り立つ。
 * n の一意表現の項数を w(n) とする。したがって w(3)=4、w(10)=3 である。
 * より、形式的には、すべての正の整数 n について、いくつかの条件のもとで一意に表せる。
 * n=∑bkrk
 * （ただし∑は、k=−∞ から∞までの和をとる）
 * すべてのkについて bkは0か1であり、
 * bk+bk+1+bk+2≦1。
 * w(n)=∑bk は有限である。
 * いま、S(m)=∑w(j2) とする。(ただしΣはj=1からmまで、w(j^2)の和をとる)
 * S(10)=61とS(1000)=19403である。
 * S(5000000)を求めよ。
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 558\n");
    
    // TODO: Implement solution here
    
    return 0;
}
