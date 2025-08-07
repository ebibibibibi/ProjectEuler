/*
 * Project Euler - Problem 343
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20343
 * 
 * Problem 343 「分数数列」  †
 * ある正の整数 k において, 分数 xi/yi による有限数列 ai は次のように定義される :
 * a1 = 1 / k
 * ai = (xi-1+1)/(yi-1-1)　[ ただし, i>1 のとき, 約分可能な場合は約分する ]
 * ai がある整数 n になったとき, 数列はそこで終了とする. (つまり, yi=1になった時)
 * ここで関数 f(k) = n と定義する.
 * 例えば, k = 20 のとき,
 * 1/20 → 2/19 → 3/18 = 1/6 → 2/5 → 3/4 → 4/3 → 5/2 → 6/1 = 6
 * したがって f(20) = 6 となる.
 * 同様に, f(1) = 1, f(2) = 2, f(3) = 1, そして 1 ≤ k ≤ 100 のとき, Σf(k3) = 118937
 * となる.
 * 1 ≤ k ≤ 2×106 のときの Σf(k3) を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 343\n");
    
    // TODO: Implement solution here
    
    return 0;
}
