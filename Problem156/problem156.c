/*
 * Project Euler - Problem 156
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20156
 * 
 * Problem 156 「桁の数え上げ」  †
 * 以下のように, 10進法で自然数を0から書いていく.
 * 0 1 2 3 4 5 6 7 8 9 10 11 12....
 * ある桁の数が d = 1 について考える. 数nを書いた後, 1が出現する回数を更新する. この数を f(n,1) とする. f(n,1)
 * の最初の値は以下のようになる.
 * nf(n,1)
 * 00
 * 11
 * 21
 * 31
 * 41
 * 51
 * 61
 * 71
 * 81
 * 91
 * 102
 * 114
 * 125
 * f(n,1) は決して3にならないことに注意.
 * つまり, f(n,1) = n の最初の2つの解は, n = 0 と n = 1 となる. 次の解は n = 199981 である.
 * 同様にして, f(n,d) はある桁の数dがnまでに何回現れたか, と定義する.
 * 実は, d ≠ 0 の全てのdについて, 0 が f(n,d)=n の最初の解となる.
 * s(d) を, f(n,d) = n の解の総和として定義する.
 * s(1) = 22786974071 となる.
 * 1 ≤ d ≤ 9 について, ∑ s(d) を求めよ.
 * 注意: もし, f(n,d) = n となるnが異なったdについて存在した場合, このnは重複して数えるものとする.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 156\n");
    
    // TODO: Implement solution here
    
    return 0;
}
