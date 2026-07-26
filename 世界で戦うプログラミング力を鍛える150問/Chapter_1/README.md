# 配列と文字列
- 配列を操作するコードと文字列操作を行うコードのお作法は似ている。
- ハッシュデーブルはキーを値にマップするデータ構造
- ハッシュテーブルを実装する際の最小の要素は 配列・ハッシュ関数
- ハッシュ値は衝突することがあり得るので、ここで、配列のサイズそれ自体を大きくしておく必要がある。
- キーのハッシュをそのままインデックスとする

# ハッシュテーブル
- ハッシュ値をkeyとしたとして、ハッシュ値を任意の方法で保持・検索する仕組みを「ハッシュテーブル」という。
ハッシュテーブルの実装にあたっては定型的な手法がいくつかある。

## 連結リスト
- キーのハッシュ値をインデックスとする代わりに、ずっと小さなサイズの配列とハッシュ値を配列サイズで割った余をインデックスとした連結リストに保存する方法を連結リストという。ハッシュテーブルの基本的な仕組みである。
これをすると、メモリの節約が実現できる。
仕組みとしては、
①ハッシュ値を配列サイズ 10 で割った余りを使う。
②配列の中に、配列と同じ数だけ配列を作成する
③①の結果を配列のインデックスとし、対応する
連結リストのイメージ
```md
array[0] → 空
array[1] → apple → banana → 空
array[2] → 空
array[3] → orange → 空
```
## 二分探索
- 二分探索を使ってハッシュテーブルを実装することもできる
- 二分探索木の平衡を保つことで、O(log(n))の検索時間を保証することができる
- 最初に大きな配列を割り当てる必要もなく、メモリにやさしい

## 配列リスト（可変長配列）
- 配列リスト（可変長配列）は計算量O(1)でのアクセスを備えつつ、自身のサイズを必要に応じて変更できる配列
- 一般的な実装は、配列がいっぱいになったときサイズを2倍にするというもの
- サイズを増やす処理自体はO(n)の計算量
- とはいえ、サイズを増やす処理はほぼ発生しない
```java
public ArrayList<String> merge(String[] words, String[] more() {
    ArrayList<String> sentence = new ArrayList<String>();
    for (String w : words) sentence.add(w);
    for (String w: more) sentence.add(w);
    return sentence;
}
```
## 文字列バッファ
- 文字列のリストを連結することをイメージする
```java
public String joinWords(String[] words) {
    String sentence = "";
    for (String w : words) {
        sentence = sentence + w; 
    }
    return sentence;
}
```
最初の繰り返し処理でx文字分の繰り返しを要求される。
二回目の繰り返しで2x文字分のコピーが必要になる。
最終的に O(x + 2x + ... + nx) で、O(xn^2)の計算量になる。
StringBuffer はこの問題を解決する。
連結後の文字列を保持する配列を１つ作って、必要に応じて文字列の後ろにコピーしていくだけ。

文字列や配列と仲良くなるには、自分自身でStringBufferを実装してみるのが良い
```java
public String joinWords(String[] words) {
    SringBuffer sentence = new StringBuffer();
    for (String w : words) {
        sentence.append(w);
    }
    return sentence.toStrong();
}
```