/*
 * Project Euler - Problem 247
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20247
 * 
 * Problem 247 「双曲線下の正方形」  †
 * 1 ≤ x, 0 ≤ y ≤ &sup{1};/&sub{x}; の領域について考える.
 * S&sub{1}; をこの曲線の下に入る最大の正方形とする.
 * S&sub{2}; を残りの空間に入る最大の正方形とし, これを繰り返す.
 * S&sub{n}; のインデックスを (left, below) とする. left は S&sub{n}; の左にある正方形の数を, below
 * は S&sub{n}; の下にある正方形の数を表す.
 * これらの正方形に番号を記したものを上の図に示す.
 * S&sub{2}; は左に 1 個, 下に 0 個の正方形があるので, S&sub{2}; のインデックスは (1,0) である.
 * S&sub{32}; のインデックスは (1,1) であることがわかる. S&sub{50}; のインデックスも同じである.
 * 50 は (1,1) をインデックスに持つ S&sub{n}; の中で, 最大の n である.
 * (3,3) をインデックスに持つ S&sub{n}; の中で, 最大の n を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 247\n");
    
    // TODO: Implement solution here
    
    return 0;
}
