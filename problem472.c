/*
 * Project Euler - Problem 472
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20472
 * 
 * Problem 472 「気楽な距離 II」  †
 * N 個の一列に並んだ座席がある. N 人の人たちが以下のルールに従って次々に座席を埋めていく:
 * 隣には誰も座っていないこと.
 * 最初の人はどの座席を選んでも良い.
 * 次の人はそれぞれにすでに座った人の座席からルール1に違反しない限りで最も離れた座席を選ぶ. 条件を満たす選択が一つ以上ある場合は, 最左の座席を選ぶ.
 * ルール1により, 座席のいくつかは確実に空いたままとなり, 座席に座ることのできる最大人員は N 未満となる (N > 1 のとき).
 * N = 15 の時に可能な席順は以下の通り:
 * #ref(): File not found: "p472_n15.png" at page "Problem 472"
 * 最初の人が正しく選択すれば, 15個の座席なら7人が座れることがわかる.
 * また最初の人は座れる人数を最大にする選択肢を9つ持っていることがわかる.
 * 一列に並んだ N 個の座席に対し最初の人が座席に座れる人数を最大にできる選択肢の数を f(N) としよう.
 * f(15) = 9, f(20) = 6, そして f(500) = 16.
 * また,  1 ≤ N ≤ 20 に対し ∑f(N) = 83, そして 1 ≤ N ≤ 500 に対し ∑f(N) = 13343.
 * 1 ≤ N ≤ 10&sup{12}; における ∑f(N) を求めよ. 回答として末尾8桁を答えよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 472\n");
    
    // TODO: Implement solution here
    
    return 0;
}
