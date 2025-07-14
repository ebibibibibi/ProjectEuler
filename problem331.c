/*
 * Project Euler - Problem 331
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%20331
 * 
 * Problem 331 「十字返し」  †
 * N×N の円盤が正方形のゲーム盤に置かれている. 円盤にはそれぞれ黒面と白面がある.
 * 各手番では, 円盤を１枚選び, 同じ横列と同じ縦列にある円盤をすべて裏返す：ゆえに 2×N-1 枚の円盤が裏返される.
 * すべての円盤が白面となればゲームは終了する.
 * 次の例は 5×5 の盤でのゲームを示している.
 * このゲームを終わらせる最小の手数は 3 であることが示せる.
 * N×N の盤の左下の円盤を座標 (0,0) とする.
 * 右下の円盤は座標 (N-1,0) で左上の円盤は座標 (0,N-1) である.
 * N×N 枚の盤での次の配置を C&sub{N}; とする：
 * を満たす (x,y) の円盤は黒面である；さもなくば白面である. C&sub{5}; は上に示されている.
 * 配置 C&sub{N}; から始めてゲームを終わらせる最小の手数を T(N) とする. 配置 C&sub{N}; が解けない場合は T(N) は
 * 0 である.
 * T(5)=3 であることが分かる. また T(10)=29, T(1 000)=395253 である.
 * を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 331\n");
    
    // TODO: Implement solution here
    
    return 0;
}
