/*
 * Project Euler - Problem 2
 * Source: https://projecteuler.net/problem=2
 * 
 * Problem 2 「偶数のフィボナッチ数」  †
 * フィボナッチ数列の各項は、直前の2項を足すことで生成されます。
 * 1と2から始めると、最初の10項は次のようになります:
 * 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, …
 * 400万を超えない値を持つフィボナッチ数列の項のうち、偶数の項の和を求めなさい。
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