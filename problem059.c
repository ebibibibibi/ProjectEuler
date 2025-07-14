/*
 * Project Euler - Problem 59
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%2059
 * 
 * Problem 59 「XOR暗号解読」  †
 * (訳者注: 文字コードの説明は適当です)
 * 各文字はそれぞれ一意のコードに割り当てられている.
 * よく使われる標準としてASCII (American Standard Code for Information Interchange) がある.
 * ASCIIでは, 大文字A = 65, アスタリスク (*) = 42, 小文字k = 107というふうに割り当てられている.
 * モダンな暗号化の方法として, テキストファイルの各バイトをASCIIに変換し, 秘密鍵から計算された値とXORを取るという手法がある.
 * XOR関数の良い点は, 暗号化に用いたのと同じ暗号化鍵でXORを取ると平文を復号できる点である. 65 XOR 42 = 107であり, 107
 * XOR 42 = 65である.
 * 破られない暗号化のためには, 鍵は平文と同じ長さのランダムなバイト列でなければならない.
 * ユーザーは暗号文と暗号化鍵を別々の場所に保存する必要がある.
 * また, もし一方が失われると, 暗号文を復号することは不可能になる.
 * 悲しいかな, この手法はほとんどのユーザーにとって非現実的である.
 * そこで, 鍵の変わりにパスワードを用いる手法が用いられる.
 * パスワードが平文より短ければ (よくあることだが), パスワードは鍵として繰り返し用いられる.
 * この手法では, 安全性を保つために十分長いパスワードを用いる必要があるが, 記憶するためにはある程度短くないといけない.
 * この問題での課題は簡単になっている.
 * 暗号化鍵は3文字の小文字である.
 * cipher1.txtは暗号化されたASCIIのコードを含んでいる.
 * また, 平文はよく用いられる英単語を含んでいる.
 * この暗号文を復号し, 平文のASCIIでの値の和を求めよ.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Project Euler - Problem 59\n");
    
    // TODO: Implement solution here
    
    return 0;
}
