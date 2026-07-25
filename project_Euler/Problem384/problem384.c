/*
 * Project Euler - Problem 384
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20384
 * 
 * Problem 384 「ルーディン-シャピロ数列」  †
 * n を二進展開したものに存在する1の隣接ペアの個数を表す数列 a(n) を定義しよう(隣接ペアは7の場合のように重複して存在する可能性がある).
 * 例えば, a(5) = a(1012) = 0, a(6) = a(1102) = 1, a(7) = a(1112) = 2 となる.
 * 数列 b(n) を b(n) = (-1)a(n) と定義しよう.
 * この数列はルーディン-シャピロ数列(Rudin-Shapiro sequence)と呼ばれる.
 * b(n) を順次総和してできる数列(summatory sequence)を考えよう.: s(n)= Σi=0nb(i)
 * これらの数列の最初の値は以下のようになる.
 * n01234567
 * a(n)00010012
 * b(n)111-111-11
 * s(n)12323434
 * 数列 s(n) はすべての要素が正の整数となり, さらにその整数 k はちょうど k 回現れるという注目すべき性質を持っている.
 * 数列 s(n) に t が c 回目に現れたときの s(n) における添字を, 1 ≤ c ≤ t のとき g(t,c) と表すと定義しよう.
 * 例えば, g(3,3) = 6, g(4,2) = 7 そして g(54321,12345) = 1220847710 となる.
 * F(n) を以下のように定義されるフィボナッチ数列としよう.
 * F(0)=F(1)=1, そして
 * n>1 のとき F(n)=F(n-1)+F(n-2).
 * GF(t)=g(F(t),F(t-1)) と定義しよう.
 * 2 ≤ t ≤ 45 のときの ΣGF(t) を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 384\n");
    
    // TODO: Implement solution here
    
    return 0;
}
