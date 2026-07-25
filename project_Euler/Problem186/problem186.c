/*
 * Project Euler - Problem 186
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20186
 * 
 * Problem 186 「あるネットワークの連結性」  †
 * 今, 100万人のユーザをもつ電話システムの通信記録がある.
 * Rec NrCallerCalled
 * 1200007100053
 * 2600183500439
 * 3600863701497
 * .........
 * n番目の記録の掛けた側と掛けられた側の電話番号は Caller(n) = S2n-1 と Called(n) = S2nで与えられる. S1,
 * S2, ...は“ラグ付きフィボナッチ生成器”で定義される.
 * 1 ≤ k ≤ 55については, Sk = [100003 - 200003k + 300007k3] (modulo 1000000)
 * 56 ≤ kでは, Sk = [Sk-24 + Sk-55] (modulo 1000000)である.
 * もしCaller(n) = Called(n)であれば, ユーザは間違って電話を掛けたとされ通信は切断される. そうでない場合には,
 * 通信は成功している.
 * XがYに電話を掛けるかその逆のときに, ユーザXとユーザYが友達であると呼ぶ. 同様に, XがYの友達であるかつYがZの友達であるとき,
 * XがZの友達の友達であると呼ぶ. 同様にして長い連鎖が得られる.
 * 首相の電話番号は524287である. 何回電話を掛けると99%のユーザ (首相自身も含む) が首相の友達になるだろうか?
 * (注: 切断された通信は数えない.)
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 186\n");
    
    // TODO: Implement solution here
    
    return 0;
}
