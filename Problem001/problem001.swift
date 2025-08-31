/*
 * Project Euler - Problem 1
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%201
 * 
 * Problem 1 「3と5の倍数」  †
 * 10未満の自然数のうち, 3 もしくは 5 の倍数になっているものは 3, 5, 6, 9 の4つがあり,
 * これらの合計は 23 になる.
 * 同じようにして, 1000 未満の 3 か 5 の倍数になっている数字の合計を求めよ.
 * int a =10;
 */
import Foundation

// MARK: 愚直実装
func solveBruteForce(limit: Int) -> Int {
    var sum = 0

    for i in 1<limit {
        if i % 3 == 0 || i % 5 == 0 {
            sum += i
        }
    }    

    return sum
}
print(solveBruteForce(limit: 1000))

// MARK: - 関数型アプローチ
func solveFunctional(limit: Int) -> Int {
    return (1..<limit)
    .filter { $0 % 3 == 0 || $0 % 5 == 0}
    .reduce(0, +)
}

// MARK: - 数学的解法（効率的）
/*
1. 任意の範囲内の数値中、iの倍数の合計を求める
2. 等差数列の和の公式を用いて、iの倍数の合計を求める
*/
func solveMathematical(limit: Int = 1000) -> Int {
    func sumOfMultiples(of divisor: Int) -> Int {
        let count = (limit - 1) / divisor  
        return divisor * count * (count + 1) / 2  
    }
    
    return sumOfMultiples(of: 3) + 
           sumOfMultiples(of: 5) - 
           sumOfMultiples(of: 15) 
}
