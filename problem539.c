/*
 * Project Euler - Problem 539
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20539
 * 
 * Problem 539 「奇数除去」  †
 * 1 から n までのすべて整数からなる順序付きリストからはじめよう. まず左から右に, 最初の数字から 1
 * つおきにある数をリストの最後まで除去していく. 次は右から左にこの手順を繰り返し, 一番右にある数から左に 1 つおきにある数を除去していく.
 * 左から右へ, そして右から左へと交互に 1 つおきの数を除去していき, 最後に数が 1 つとなるまで続けていく.
 * n = 9 の場合はこのようになる :
 * 1 2 3 4 5 6 7 8 9
 * 2 4 6 8
 * 2 6
 * 6
 * 長さ n のリストから始めて最後に残る数を P(n) としよう.
 * &ref(): File not found: "p539_eq.png" at page "Problem 539"; としよう.
 * P(1)=1, P(9) = 6, P(1000)=510, S(1000)=268271 が与えられている.
 * S(10&sup{18};) mod 987654321 を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 539\n");
    
    // TODO: Implement solution here
    
    return 0;
}
