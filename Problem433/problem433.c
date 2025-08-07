/*
 * Project Euler - Problem 433
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20433
 * 
 * Problem 433 「ユークリッドの互除法のステップ数」  †
 * x&sub{0}; と y&sub{0}; の最大公約数をユークリッドの互除法 (Euclid's algorithm)
 * を用いて割り出す時に必要となるステップ数を E(x&sub{0};, y&sub{0};) としよう. より形式的に表すと:
 * x&sub{1}; = y&sub{0};, y&sub{1}; = x&sub{0}; mod y&sub{0};
 * x&sub{n}; = y&sub{n-1};, y&sub{n}; = x&sub{n-1}; mod y&sub{n-1};
 * E(x&sub{0};, y&sub{0};) は y&sub{n}; = 0 となるような最小の n である.
 * E(1,1) = 1, E(10,6) = 3, そして E(6,10) = 4 であることがわかっている.
 * 1 ≤ x,y ≤ N における E(x, y) の和を S(N) と定義しよう.
 * S(1) = 1, S(10) = 221, そして S(100) = 39826 であることがわかっている.
 * S(5·10&sup{6};) を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 433\n");
    
    // TODO: Implement solution here
    
    return 0;
}
