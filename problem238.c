/*
 * Project Euler - Problem 238
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20238
 * 
 * Problem 238 「無限長列ツアー」  †
 * この問題の文章は前のエラーを直すため修正された.
 * "Blum Blum Shub" 擬似乱数生成器を用いて数列を作る:
 * s0 = 14025256
 * sn+1 = sn2 mod 20300713
 * これらの数 s0s1s2... を連結して無限長の数列 w を作る.
 * すなわち w = 14025256741014958470038053646... となる.
 * 正の整数 k に対し, もし数字の合計が k となる w の部分文字列が存在しないなら, p(k) を 0 と定義する.
 * もし数字の合計が k となる w の部分文字列が少なくとも一つ存在するなら, z
 * をそのような部分文字列の中で最も前に出てくる部分文字列の先頭の位置とすると,
 * p(k)=z と定義する.
 * 例えば:
 * 部分文字列 1, 14, 1402, ...
 * はそれぞれ数字の合計が 1, 5, 7, ... であり,
 * 1 番目で始まるので p(1)=p(5)=p(7)=...=1 となる.
 * 部分文字列 4, 402, 4025, ...
 * はそれぞれ数字の合計が 4, 6, 11, ... であり,
 * 2 番目で始まるので p(4)=p(6)=p(11)=...=2 となる.
 * 部分文字列 02, 0252, ...
 * はそれぞれ数字の合計が 2, 9, ... であり,
 * 3 番目で始まるので p(2)=p(9)=...=3 となる.
 * 部分文字列 025 は 3 番目で始まり, 数字の合計は 7 だが, より前にある(1 番目から始まる)部分文字列が数字の合計が 7 である為,
 * p(7) = 1 であって 3 ではないことに注意せよ.
 * 0 < k ≤ 103 では Σp(k) = 4742 であることがわかる.
 * 0 < k ≤ 2×1015 において Σp(k) を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 238\n");
    
    // TODO: Implement solution here
    
    return 0;
}
