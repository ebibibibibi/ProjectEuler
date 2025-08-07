/*
 * Project Euler - Problem 461
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20461
 * 
 * Problem 461 「だいたいπ」  †
 * すべての非負整数 k に対し f&sub{n};(k) = e&sup{k/n}; - 1 としよう.
 * 驚くべきことに, f&sub{200};(6) + f&sub{200};(75) + f&sub{200};(89) +
 * f&sub{200};(226) = 3.141592644529… ≈ π.
 * 実際, これは式 f&sub{n};(a) + f&sub{n};(b) + f&sub{n};(c) + f&sub{n};(d) による, n
 * = 200 におけるπの最良近似である.
 * 誤差 : | f&sub{n};(a) + f&sub{n};(b) + f&sub{n};(c) + f&sub{n};(d) - π | (
 * ここで | x | は値 x の絶対値を表す ) が最小となる a, b, c, d に対し, g(n) = a&sup{2}; +
 * b&sup{2}; + c&sup{2}; + d&sup{2}; としよう.
 * g(200) = 6&sup{2}; + 75&sup{2}; + 89&sup{2}; + 226&sup{2}; = 64658
 * が与えられている.
 * g(10000) を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 461\n");
    
    // TODO: Implement solution here
    
    return 0;
}
