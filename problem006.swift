/*
 * Project Euler - Problem 6
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%206
 * 
 * Problem 6 「二乗和の差」  †
 * 最初の10個の自然数について, その二乗の和は,
 * 12 + 22 + ... + 102 = 385
 * 最初の10個の自然数について, その和の二乗は,
 * (1 + 2 + ... + 10)2 = 3025
 * これらの数の差は 3025 - 385 = 2640 となる.
 * 同様にして, 最初の100個の自然数について二乗の和と和の二乗の差を求めよ.
 */

 import Foundation

 // MARK: - 愚直実装
/// 二乗の和を計算 (1² + 2² + ... + n²)
func sumOfSquares(upTo n: Int) -> Int {
    var sum = 0
    for i in 1...n {
        sum += i * i
    }
    return sum
}

/// 和の二乗を計算 ((1 + 2 + ... + n)²)
func squareOfSum(upTo n: Int) -> Int {
    let sum = (1...n).reduce(0, +)
    return sum * sum
}

/// 二乗和の差を計算
func differenceBruteForce(upTo n: Int) -> Int {
    return squareOfSum(upTo: n) - sumOfSquares(upTo: n)
}


// 関数型をやってみる
func differenceFunctional(upTo n: Int) -> Int {
    let numbers = 1...n
    
    let sumOfSquares = numbers.map { $0 * $0 }.reduce(0, +)
    let squareOfSum = numbers.reduce(0, +).squared
    
    return squareOfSum - sumOfSquares
}

print(differenceBruteForce(upTo: 100))
print(differenceFunctional(upTo: 100))

// 数学的なアプローチ
func differenceMathematical(upTo n: Int) -> Int {
    // 1 + 2 + ... + n = n(n+1)/2
    let sumFormula = n * (n + 1) / 2
    
    // 1² + 2² + ... + n² = n(n+1)(2n+1)/6
    let sumOfSquaresFormula = n * (n + 1) * (2 * n + 1) / 6
    
    return sumFormula * sumFormula - sumOfSquaresFormula
}


// MARK: - ヘルパー拡張
extension Int {
    /// 自分自身の二乗を返す
    var squared: Int {
        return self * self
    }
}
