/*
 * Project Euler - Problem 289
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20289
 * 
 * Problem 289 「オイラー閉路」  †
 * C(x,y) を (x,y), (x,y+1), (x+1,y), (x+1, y+1) を通る円とする.
 * 正の整数 m, n に対し, E(m,n) を以下のm⋅n の円からなる図形とする:
 * {C(x,y): 0≤x<m, 0≤y<n, xとyは整数}
 * E(m,n) 上のオイラー閉路とは, 全ての弧をちょうど1度ずつ通る経路のことである.
 * E(m,n) 上に多数のそのような経路があるが, ここでは自身と交わらないものだけを考える: 交差のない経路では格子点上で自身の経路に触れるが,
 * 決して交差しない.
 * 下の図は E(3,3) とその上の交差のないオイラー閉路の一例である.
 * L(m, n) を E(m, n) 上の交差のないオイラー閉路の数とする.
 * 例えば, L(1,2)=2, L(2,2)=37, L(3,3)=104290 である.
 * L(6,10) mod 10&sup{10}; を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 289\n");
    
    // TODO: Implement solution here
    
    return 0;
}
