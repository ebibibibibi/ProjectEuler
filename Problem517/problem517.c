/*
 * Project Euler - Problem 517
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20517
 * 
 * Problem 517 「実数再帰」  †
 * a > 1 となるような全ての実数 a に対し, 数列 g&sub{a}; が以下のように与えられている:
 * g&sub{a};(x)=1 (x < a の場合)
 * g&sub{a};(x)=g&sub{a};(x−1) + g&sub{a};(x−a) (x ≥ a の場合)
 * G(n) = g&sub{√n};(n)
 * G(90)=7564511 となる.
 * 10000000 < p < 10010000 の間の素数 p における ΣG(p) を求めよ.
 * 回答は 1000000007 を法として答えよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 517\n");
    
    // TODO: Implement solution here
    
    return 0;
}
