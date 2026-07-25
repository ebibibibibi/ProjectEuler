/*
 * Project Euler - Problem 9
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%209
 * 
 * Problem 9 「特別なピタゴラス数」  †
 * ピタゴラス数(ピタゴラスの定理を満たす自然数)とは a < b < c で以下の式を満たす数の組である.
 * a2 + b2 = c2
 * 例えば, 3² + 4² = 9 + 16 = 25 = 5² である.
 * a + b + c = 1000 となるピタゴラスの三つ組が一つだけ存在する.
 * これらの積 abc を計算しなさい.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

// MARK: - 愚直実装
int solveBruteForce(int targetSum) {
    for (int a = 1; a < target_sum; a++) {
        for (int b = a + 1; b < target_sum; b++) {
            int c = target_sum - a - b;
            if (c > b && a*a + b*b == c*c) {
                printf("愚直実装: a=%d, b=%d, c=%d\n", a, b, c);
                return a * b * c;
            }
        }
    }
    return 0;
}
