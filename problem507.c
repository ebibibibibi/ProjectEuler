/*
 * Project Euler - Problem 507
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20507
 * 
 * Problem 507 「最短の格子ベクトル」  †
 * 以下のように定義される トリボナッチ数 を t&sub{n}; としよう:
 * t&sub{0}; = t&sub{1}; = 0;
 * t&sub{2}; = 1;
 * t&sub{n}; = t&sub{n-1}; + t&sub{n-2}; + t&sub{n-3}; (n ≥ 3 のとき)
 * そして r&sub{n}; = t&sub{n}; mod 10&sup{7}; としよう.
 * 一組のベクトル V&sub{n}; = (v&sub{1};,v&sub{2};,v&sub{3};) と W&sub{n}; =
 * (w&sub{1};,w&sub{2};,w&sub{3};) それぞれに対し、
 * v&sub{1}; = r&sub{12n−11}; − r&sub{12n−10};, v&sub{2}; = r&sub{12n−9}; +
 * r&sub{12n−8};, v&sub{3}; = r&sub{12n−7};⋅r&sub{12n−6};
 * w&sub{1}; = r&sub{12n−5}; − r&sub{12n−4};, w&sub{2}; = r&sub{12n−3}; +
 * r&sub{12n−2};, w&sub{3}; = r&sub{12n−1};⋅r&sub{12n};
 * (k,l) ≠ (0,0) となるような任意の整数 k と l に対し, |k⋅v&sub{1}; + l⋅w&sub{1};| +
 * |k⋅v&sub{2}; + l⋅w&sub{2};| + |k⋅v&sub{3}; + l⋅w&sub{3};| で計算されるベクトル D =
 * k⋅V&sub{n}; + l⋅W&sub{n}; のマンハッタン距離の最小値を S(n) としよう.
 * 最初のベクトルの組は (-1, 3, 28), (-11, 125, 40826) になる.
 * S(1) = 32, そして &ref(): File not found: "p507_eq1.png" at page "Problem
 * 507"; 130762273722 が与えられている.
 * &ref(): File not found: "p507_eq2.png" at page "Problem 507"; を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 507\n");
    
    // TODO: Implement solution here
    
    return 0;
}
