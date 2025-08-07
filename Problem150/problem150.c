/*
 * Project Euler - Problem 150
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20150
 * 
 * Problem 150 「三角形配列から和が最小となる部分三角形の探索」  †
 * 三角形配列において, 含まれる要素の和が最小となるような部分三角形を求めたい.
 * 下図では, マークされた三角形が, 和が -42 となり, この条件を満たすことは簡単に確かめられる.
 * 1000行の三角形配列を作りたいので, 500500個の値の範囲が±219の擬似乱数 sk を以下のような線形合同法によって生成する.
 * t := 0
 * for k = 1 up to k = 500500:{
 * t := (615949*t + 797807) modulo 220
 * sk := t−219
 * }
 * よって, s1 = 273519, s2 = 153582, s3 = 450905 ...となる.
 * 三角配列は, 以下のように配置される.
 * s1
 * s2 s3
 * s4 s5 s6
 * s7 s8 s9 s10
 * ...
 * 部分三角形は, ある要素から始めて下にいくにつれ広くなっていくようなものを考える. (最初の要素の次の行は2つの要素を含む,
 * その次の行は3つの要素を含む, といったように)
 * "部分三角形の和"はそれが含む全ての要素の和とする.
 * 最小の部分三角形の和を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 150\n");
    
    // TODO: Implement solution here
    
    return 0;
}
