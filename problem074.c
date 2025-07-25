/*
 * Project Euler - Problem 74
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%2074
 * 
 * Problem 74 「桁の階乗による連鎖」  †
 * 145は各桁の階乗の和が145と自分自身に一致することで有名である.
 * 1! + 4! + 5! = 1 + 24 + 120 = 145
 * 169の性質はあまり知られていない. これは169に戻る数の中で最長の列を成す. このように他の数を経て自分自身に戻るループは3つしか存在しない.
 * 169 → 363601 → 1454 → 169
 * 871 → 45361 → 871
 * 872 → 45362 → 872
 * どのような数からスタートしてもループに入ることが示せる.
 * 例を見てみよう.
 * 69 → 363600 → 1454 → 169 → 363601 (→ 1454)
 * 78 → 45360 → 871 → 45361 (→ 871)
 * 540 → 145 (→ 145)
 * 69から始めた場合, 列は5つの循環しない項を持つ. また100万未満の数から始めた場合最長の循環しない項は60個であることが知られている.
 * 100万未満の数から開始する列の中で, 60個の循環しない項を持つものはいくつあるか?
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 74\n");
    
    // TODO: Implement solution here
    
    return 0;
}
