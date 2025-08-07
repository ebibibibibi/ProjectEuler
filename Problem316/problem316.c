/*
 * Project Euler - Problem 316
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20316
 * 
 * Problem 316 「10進小数展開に現れる数字」  †
 * p = p&sub{1}; p&sub{2}; p&sub{3}; ... を, {0,1,2,3,4,5,6,7,8,9}
 * から等確率で選んだランダムな数字からなる無限数列とする.
 * p は実数 0.p&sub{1}; p&sub{2}; p&sub{3}; ... に対応することが分かる.
 * また, 区間 [0,1) からランダムに実数を選ぶことは, {0,1,2,3,4,5,6,7,8,9}
 * から等確率で選んだランダムな数字からなる無限数列を選ぶことと等価であることが分かる.
 * 任意の d 桁の正の整数 n に対して, p&sub{k};, p&sub{k+1};, ...p&sub{k+d-1}; が n
 * の十進数と同じ順序で一致するような最小の添字を k とする.
 * また, g(n) を k の期待値とする；g(n) は常に有限であり, 面白いことに, 常に整数であることが示せる.
 * たとえば, n = 535 なら,
 * p = 31415926535897... に対して, k = 9 である.
 * p = 355287143650049560000490848764084685354... に対して, k = 36 である.
 * 他も同様にして, g(535) = 1008 となることが分かる.
 * である.  を求めよ.
 * 注： は床関数を表す.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 316\n");
    
    // TODO: Implement solution here
    
    return 0;
}
