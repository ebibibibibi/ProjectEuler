/*
 * Project Euler - Problem 396
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20396
 * 
 * Problem 396 「弱いグッドスタイン数列」  †
 * ある正の整数 n に対し, n の弱いグッドスタイン数列 {g1, g2, g3, ...} は次のように定義される :
 * g1 = n
 * k > 1 のとき, gk は, 底 k で gk-1 を書き下し, その結果を k+1 を底とした数として解釈し, その結果から 1
 * を引くことで得られる.
 * この数列は gk が 0 になった時に終了となる.
 * 例えば, 6 の弱いグッドスタイン数列は {6, 11, 17, 25, ...} となる :
 * g1 = 6.
 * g2 = 11, なぜなら 6 = 1102, 1103 = 12, そして 12 - 1 = 11 であるから.
 * g3 = 17, なぜなら 11 = 1023, 1024 = 18, そして 18 - 1 = 17 であるから.
 * g4 = 25, なぜなら 17 = 1014, 1015 = 26, そして 26 - 1 = 25 であるから.
 * 以下同様.
 * すべての弱いグッドスタイン数列は有限であることを示すことができる.
 * n の弱いグッドスタイン数列のうち, 非ゼロである要素の数を G(n) としよう.
 * G(2) = 3, G(4) = 21, そして G(6) = 381 であることが確かめられている.
 * 同様に, 1 ≤ n < 8 のときの ΣG(n) = 2517 であることが確かめられている.
 * 1 ≤ n < 16 のときの ΣG(n) の最後の9桁を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 396\n");
    
    // TODO: Implement solution here
    
    return 0;
}
