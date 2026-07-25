/*
 * Project Euler - Problem 155
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20155
 * 
 * Problem 155 「キャパシタ回路の数え上げ」  †
 * 静電容量が等しい理想的なキャパシタのみを使った電気回路がある.
 * 複数のキャパシタを直列または並列に接続してサブユニットを形成し,
 * そのサブユニットを他のキャパシタやサブユニットと直列または並列に接続してより大きなサブユニットを形成し, そのようにして最終的な回路を形成する.
 * この単純な手続きを n 個以下の理想的なキャパシタに適用し, 全体の静電容量が異なる複数の回路を構成することができる. 例えば, 60μF
 * のキャパシタで n=3 の場合は, 以下のように 7 通りの異なる静電容量を得ることができる.
 * n 個以下の等価なキャパシタと上で述べた単純な手続きから得られる全体の静電容量が異なる組み合わせの数を D(n) と書く とすると,
 * D(1)=1, D(2)=3, D(3)=7, ... となる.
 * D(18) を求めよ.
 * 注意：キャパシタ C1, C2, ...を並列に接続したときの全体の静電容量は CT = C1 + C2 + ... ,
 * 直列に接続したときの全体の静電容量は 1 / CT = 1 / C1 + 1 / C2 + ... で求められる.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 155\n");
    
    // TODO: Implement solution here
    
    return 0;
}
