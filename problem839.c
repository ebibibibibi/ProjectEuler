/*
 * Project Euler - Problem 839
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20839
 * 
 * Problem 839 「ボウルの中の豆」  †
 * 数列SnをS0=290797, Sn=Sn-12 mod 50515093 (n>0)によって定義する．
 * 0, 1, ..., N-1の番号が振られたボウルがあり，はじめはボウルnにSn個の豆が入っている．
 * 
 * 各ステップでは，ボウルnに入った豆の個数がボウルn+1に入った豆の個数よりも真に多いような最も小さい番号nを見つけ，ボウルnからボウルn+1に豆を1個移動させる．
 * ボウルに入った豆の個数が非減少な順にソートされるまでに必要なステップ数をB(N)とする．例えば，B(5)=0,
 * B(6)=14263289であり，B(100)=3284417556である．
 * B(107)を求めよ．
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 839\n");
    
    // TODO: Implement solution here
    
    return 0;
}
