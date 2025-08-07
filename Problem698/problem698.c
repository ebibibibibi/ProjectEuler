/*
 * Project Euler - Problem 698
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20698
 * 
 * Problem 698 「123ナンバー」  †
 * 「123ナンバー」を以下のようにして定義します。
 * 1 を最小の 123ナンバー とします。
 * 10 進数で表記したとき 1,2,3 のみで表記され、それぞれの出現回数が 0 または 123ナンバー である正の整数
 * よって 2 は 1 桁の 2 からなり、 1 は 123ナンバー なので 2 は 123ナンバー です。また 33 は 2 桁の 3 からなり、
 * 2 は 123ナンバー なので 33 は 123ナンバー です。
 * 一方で、 3333 は 4 桁の 3 からなり、 4 は 123ナンバー ではないので 3333 は 123ナンバーではありません。
 * 昇順に 123ナンバー を並べると 1, 2, 3, 11, 12, 13, 21, 22, 23, 31, 32, 33, 111, 112,
 * 113, 121, 122, 123, 131, ... となります。
 * F(n) を n 番目の 123ナンバー とします。例えば F(4)=11, F(10)=31, F(40)=1112,
 * F(1000)=1223321, F(6000)=2333333333323 です。
 * F(111111111111222333) を mod 123123123 で求めてください。
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 698\n");
    
    // TODO: Implement solution here
    
    return 0;
}
