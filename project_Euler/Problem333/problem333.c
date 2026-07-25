/*
 * Project Euler - Problem 333
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20333
 * 
 * Problem 333 「特殊分割」  †
 * あらゆる正の整数は, 各項がいずれも 2i×3j（i,j≧0）と表されるように分割することができる.
 * いずれの項も他の任意の項を割り切らないような分割のみを考えよう.
 * 例えば, 17 = 2 + 6 + 9 = (21×30 + 21×31 + 20×32) という分割は, 2 が 6 を割り切るので有効でない.
 * 17 = 16 + 1 = (24×30 + 20×30) という分割も, 1 が 16 を割り切るので有効でない. 17 の唯一の有効な分割は
 * 8 + 9 = (23×30 + 20×32) である.
 * 多くの整数は, １つより多くの有効な分割がある. そのような最初の数である 11 は次の２つの分割がある.
 * 11 = 2 + 9 = (21×30 + 20×32)
 * 11 = 8 + 3 = (23×30 + 20×31)
 * n の有効な分割の数を P(n) としよう. 例えば, P(11)=2 である.
 * P(17) のように, 有効な分割が１つのみとなる素数 q だけを考えよう.
 * P(q)=1 となる素数 q<100 の和は 233 に等しい.
 * P(q)=1 となる素数 q<1000000 の和を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 333\n");
    
    // TODO: Implement solution here
    
    return 0;
}
