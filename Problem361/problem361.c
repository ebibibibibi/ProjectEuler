/*
 * Project Euler - Problem 361
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20361
 * 
 * Problem 361 「スー・モース数列の部分数列」  †
 * スー・モース数列 (Thue-Morse sequence) {Tn} は, 以下の条件を満たす二値数列である.
 * T&sub{0}; = 0
 * T2n = Tn
 * T2n+1 = 1 - Tn
 * {Tn} の最初のいくつかの項は以下のようになる.
 * 01101001100101101001011001101001....
 * {Tn} の部分数列として現れる各要素を二進表記の整数とし, それを(小さい方から)並べた数列を {An} を定義する.
 * たとえば, 十進数の 18 は二進表記で 10010 と表される. これは {tn} に現れる ( T&sub{8}; から T&sub{12};
 * ). したがって, 18 は {An} の要素となる.
 * 十進数の 14 は二進表記で 1110 と表される. これは {tn} に現れない. したがって, 14 は {An} の要素ではない.
 * 数列 {An} の最初のいくつかの項は以下のようになる.
 * n0123456789101112…
 * An012345691011121318…
 * 同様に, A&sub{100}; = 3251, A&sub{1000}; = 80852364498 となる.
 * &ref(): File not found: "p_361_Thue-Morse1.gif" at page "Problem
 * 361";の最後の9桁を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 361\n");
    
    // TODO: Implement solution here
    
    return 0;
}
