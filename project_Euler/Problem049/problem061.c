/*
 * Project Euler - Problem 61
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%2061
 * 
 * Problem 61 「巡回図形数」  †
 * 三角数, 四角数, 五角数, 六角数, 七角数, 八角数は多角数であり, それぞれ以下の式で生成される.
 * 三角数P3,n=n(n+1)/21, 3,  6, 10, 15, ...
 * 四角数P4,n=n21, 4,  9, 16, 25, ...
 * 五角数P5,n=n(3n-1)/21, 5, 12, 22, 35, ...
 * 六角数P6,n=n(2n-1)1, 6, 15, 28, 45, ...
 * 七角数P7,n=n(5n-3)/21, 7, 18, 34, 55, ...
 * 八角数P8,n=n(3n-2)1, 8, 21, 40, 65, ...
 * 3つの4桁の数の順番付きの集合 (8128, 2882, 8281) は以下の面白い性質を持つ.
 * この集合は巡回的である. 最後の数も含めて, 各数の後半2桁は次の数の前半2桁と一致する
 * それぞれ多角数である: 三角数 (P3,127=8128), 四角数 (P4,91=8281), 五角数 (P5,44=2882)
 * がそれぞれ別の数字で集合に含まれている
 * 4桁の数の組で上の2つの性質をもつはこの組だけである.
 * 三角数, 四角数, 五角数, 六角数, 七角数, 八角数が全て表れる6つの巡回する4桁の数からなる唯一の順序集合の和を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 61\n");
    
    // TODO: Implement solution here
    
    return 0;
}
