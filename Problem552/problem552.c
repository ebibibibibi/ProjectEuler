/*
 * Project Euler - Problem 552
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20552
 * 
 * Problem 552 「連立合同式 2」  †
 * 数列 A を次のように定める。
 * Ai = (1 ≦ k ≦ i で Ai mod pi = i となるような最小の自然数) とする。
 * 例えば, A2 = 5 である。 なぜなら,
 * A2 mod 2 = 1
 * A2 mod 3 = 2
 * を満たし, かつこれが最小だからである。
 * また, A3 = 23 である。　なぜなら,
 * A3 mod 2 = 1
 * A3 mod 3 = 2
 * A3 mod 5 = 3
 * を満たし, かつこれが最小だからである。
 * また, A4 = 53, A5 = 1523 である。また, A10 = 5765999453 である。
 * そこで, S(n) = (1 ≦ i ≦ n (i は素数) で 数列 A の中に i で割り切れるものが1つ以上あるような整数 i の個数)
 * とする。
 * 例えば, S(50) = 5 + 23 + 41 = 69 です。 なぜなら, 5 は A2 = 5 を割ることができ, 23 は A3 = 23
 * を割ることができ, 41 は A10 = 5765999453 を割ることができるからである。
 * また, 50以下の5, 23, 41ではない他の12個の素数は, Aに入っているいずれの整数も割ることができない。
 * そのとき, S(300000) を求めなさい。
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 552\n");
    
    // TODO: Implement solution here
    
    return 0;
}
