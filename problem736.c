/*
 * Project Euler - Problem 736
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20736
 * 
 * Problem 736 「同じになる径路」  †
 * 格子点に関して 2 つの関数を定義する。
 * r(x, y) = (x + 1, 2y)
 * s(x, y) = (2x, y + 1)
 * (a, b) から「関数 r, s を施して a と b が同じ値になるまでの長さ n の径路」は，[ (a1, b1), (a2, b2),
 * ..., (an, bn) ] として，
 * (a1, b1) = (a, b)
 * k > 1 において，(ak, bk) = r(ak-1, bk-1) または
 * (ak, bk) = s(ak-1, bk-1)
 * k < n において ak ≠ bk
 * an = bn
 * たとえば，
 * (45, 90) -r-> (46, 180) -s-> (92, 181) -s-> (184, 182) -s-> (368, 183) -s->
 * (736, 184) -r->
 * (737, 368) -s-> (1474, 369) -r-> (1475, 738) -r-> (1476, 1476)
 * これが，(45, 90) が同じ値になるまでの長さ 10 の径路であり，最終的な値は 1476 である。(45, 90)
 * が同じ値になるまでの長さが 10 未満の径路はない。
 * (45, 90) が同じ値になるまでの長さが奇数で，かつ最小の径路を捜し，最終的な値を答えなさい。
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 736\n");
    
    // TODO: Implement solution here
    
    return 0;
}
