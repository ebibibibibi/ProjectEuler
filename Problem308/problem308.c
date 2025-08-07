/*
 * Project Euler - Problem 308
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20308
 * 
 * Problem 308 「脅威の素数生成オートマトン」  †
 * プログラミング言語 Fractran で書かれたプログラムは, 分数のリストから構成される.
 * Fractran の仮想マシンの内部状態は正の整数であり, あるシード値が初期にセットされる. Fractran の各反復では, リストのうち,
 * 状態の整数との積が整数となる初めの分数が状態の整数に掛けられる.
 * 例えば, John Horton Conway が書いた素数生成に対する Fractran のプログラムの一つは, 次の 14 の分数から構成される:
 * &ref(): File not found: "p_308.gif" at page "Problem 308";
 * シードの整数 2 から始めると, プログラムの反復計算を行うと次の数列が得られる: 15, 825, 725, 1925, 2275, 425,
 * ..., 68, 4, 30, ..., 136, 8, 60, ..., 544, 32, 240, ...
 * この数列に現れる 2 のべき乗は 2&sup{2};, 2&sup{3};, 2&sup{5};, ... である.
 * この数列のすべての 2 のべき乗は素数の指数を持ち, かつすべての素数は 2 のべき乗の指数として, 適切な順序で現れることが示せる.
 * 上の Fractran のプログラムを用いて Project Euler の Problem 7（10001 番目の素数を求めよ）を解くと,
 * プログラムが 2&sup{10001 番目の素数}; を生成するまでに何回の反復が必要になるか.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 308\n");
    
    // TODO: Implement solution here
    
    return 0;
}
