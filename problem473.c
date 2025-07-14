/*
 * Project Euler - Problem 473
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20473
 * 
 * Problem 473 「φ-進数」  †
 * φ を黄金比: φ = &sup{1+√5};/&sub{2}; としよう.
 * 注目すべきことに, たとえその和の中ですべてのべき乗を最大一回しか使ってはならないとしても, φ のべき乗の和ですべての正整数を表すことができる.
 * だがこの場合でさえ表し方は一意とはならない.
 * 指数が連続するようなべき乗がないようにし, かつその表現が有限であるとした時に表し方を一意にすることができる.
 * 例: 2 = φ + φ&sup{-2};, そして 3 = φ&sup{2}; + φ&sup{-2};
 * この φ のべき乗の和を表現するため, 0 と 1, そして負の指数が始まる部分を表す小数点からなる文字列を使おう.
 * この表記法をφ-進数と呼ぼう.
 * したがってこのようになる, 1 = 1&sub{φ};, 2 = 10.01&sub{φ};, 3 = 100.01&sub{φ}; そして
 * 14=100100.001001&sub{φ};.
 * φ-進数によって 1, 2, 14 を表した文字列は回文になっており, 3 の場合はそうはならない (φ-進小数点が中心の文字とならない).
 * 1000 以下の正整数でφ-進表記法が回文となる数の和は 4345 となる.
 * 10&sup{10}; 以下の正整数でφ-進表記法が回文となる数の和を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 473\n");
    
    // TODO: Implement solution here
    
    return 0;
}
