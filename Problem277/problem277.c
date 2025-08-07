/*
 * Project Euler - Problem 277
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20277
 * 
 * Problem 277 「修正コラッツ列」  †
 * 整数の修正コラッツ列は値 a&sub{1}; から始めて次のようにして得られる:
 * a&sub{n}; が 3 で割り切れるならば a&sub{n+1}; = a&sub{n};/3. これを大きな下ステップ "D" と表す.
 * a&sub{n}; を 3 で割った余りが 1 ならば a&sub{n+1}; = (4a&sub{n}; + 2)/3. これを大きな上ステップ
 * "U" と表す.
 * a&sub{n}; を 3 で割った余りが 2 ならば a&sub{n+1}; = (2a&sub{n}; - 1)/3. これを小さな下ステップ
 * "d" と表す.
 * 数列は a&sub{n}; = 1 となれば終了する.
 * 任意の整数が与えられたとき, ステップの列を書き出すことができる.
 * 例えば a&sub{1};=231 なら, 数列 {a&sub{n};}={231,77,51,17,11,7,10,14,9,3,1}
 * はステップ "DdDddUUdDD" に対応する.
 * もちろん, 同じ列 "DdDddUUdDD...." から始まる列は他にもある.
 * 例えば, a&sub{1};=1004064 なら, ステップの列は DdDddUUdDDDdUDUUUdDdUUDDDUdDD である.
 * 実際, 1004064 は, 列 DdDddUUdDD から始まる最小の可能な a&sub{1}; > 10&sup{6}; である.
 * 列 "UDDDUdddDDUDDddDdDddDDUDDdUUDd" から始まる最小の a&sub{1}; > 10&sup{15}; は何か？
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 277\n");
    
    // TODO: Implement solution here
    
    return 0;
}
