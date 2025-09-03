/*
 * Project Euler - Problem 2
 * Source: https://projecteuler.net/problem=2
 * 
 * Problem 2 「偶数のフィボナッチ数」  †
 * フィボナッチ数列の各項は、直前の2項を足すことで生成されます。
 * 1と2から始めると、最初の10項は次のようになります:
 * 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, …
 * 400万を超えない値を持つフィボナッチ数列の項のうち、偶数の項の和を求めなさい。
 */

import Foundation

// MARK: 愚直実装
func solveBruteForce(_ limit: Int) -> Int {
    var a = 1 // F1
    var b = 2 // F2
    var sum = 0

    while b <= limit {
        if b % 2 == 0 { sum += b }
        (a, b) = (b, a + b)
    }
    return sum
}

// MARK: - 数学的解法
func sumEvenFibs(upto limit: Int) -> Int {
    var e1 = 2
    var e2 = 8
    var sum = 0

    while e1 <= limit {
        sum += e1
        let e3 = 4 * e2 + e1
        e1 = e2
        e2 = e3
    }
    return sum
}