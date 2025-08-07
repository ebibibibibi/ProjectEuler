/*
 * Project Euler - Problem 1
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%201
 * 
 * Problem 1 「3と5の倍数」  †
 * 10未満の自然数のうち, 3 もしくは 5 の倍数になっているものは 3, 5, 6, 9 の4つがあり,
 * これらの合計は 23 になる.
 * 同じようにして, 1000 未満の 3 か 5 の倍数になっている数字の合計を求めよ.
 * int a =10;
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 1\n");
    
    // TODO: Implement solution here
    
    return 0;
}

int solve_mathematical(int limit) {
 // 指定された除数の偶数の合計を求める関数
 int sum_of_mulitiples(int divisor) {
    int count = (limit - 1) / divisor;
    return divisor * count * (count + 1) / 2;
 }

  return sum_of_multiples(3) +
         sum_of_mulitiples(5) -
         sum_of_mulitiples(15);
}

int solve_brute_force(int limit) {
    int sum = 0;
    for (int i = 1; i < limit; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    return sum;
}