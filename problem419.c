/*
 * Project Euler - Problem 419
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20419
 * 
 * Problem 419 「look and say 数列」  †
 * look and say 数列は 1, 11, 21, 1211, 111221, 312211, 13112221, 1113213211,
 * ... と続いていく数列である.
 * この数列は1から始まり, 他の項は前項の数について連続する桁をひとまとめにして言い表すことで得られる.
 * 声に出してみるとやりやすい:
 * 1 は 「1個の 1」 ('one one') → 11
 * 11 は 「2個の 1」 ('two ones') → 21
 * 21 は 「1個の 2 と1個の 1」 ('one two and one one') → 1211
 * 1211 は 「1個の 1 と1個の 2 と2個の 1」 ('one one, one two and two ones') → 111221
 * 111221 は 「3個の 1 と2個の 2 と1個の 1」 ('three ones, two twos and one one') →
 * 312211
 * ...
 * この数列の n 番目の項の 1, 2, 3 の数をそれぞれ A(n), B(n), C(n) としよう.
 * A(40) = 31254, B(40) = 20259, C(40) = 11625 であることが確かめられている.
 * n が 10&sup{12}; のときの A(n), B(n), C(n) を求めよ.
 * 回答はそれぞれを 2&sup{30}; を法として, A,B,C とコンマで分かち書きして答えよ.
 * 例えば, n が 40 のときの解答は 31254,20259,11625 となる.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 419\n");
    
    // TODO: Implement solution here
    
    return 0;
}
