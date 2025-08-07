/*
 * Project Euler - Problem 9
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%209
 * 
 * Problem 9 「特別なピタゴラス数」  †
 * ピタゴラス数(ピタゴラスの定理を満たす自然数)とは a < b < c で以下の式を満たす数の組である.
 * a2 + b2 = c2
 * 例えば, 3² + 4² = 9 + 16 = 25 = 5² である.
 * a + b + c = 1000 となるピタゴラスの三つ組が一つだけ存在する.
 * これらの積 abc を計算しなさい.
 */

 // MARK: - 愚直実装
func solveBruteForce(targetSum: Int = 1000) -> Int {
    for a in 1..<targetSum {
        for b in (a+1)..<targetSum {
            let c = targetSum - a - b
            if c > b && a*a + b*b == c*c {
                return a * b * c
            }
        }
    }
    return 0
}

// MARK: - 関数型アプローチ
func solveFunctional(targetSum: Int = 1000) -> Int {
    let result = (1..<1000).compactMap { a in
        (a+1..<1000).compactMap { b in
            let c = targetSum - a - b
            if c > b && a*a + b*b == c*c {
                return a * b * c
            }
        }
    }
    return result.first ?? 0
}

// MARK: - 数学的解法
func solveMathematical() -> Int {
    // a + b + c = 1000, a² + b² = c²
    // c = 1000 - a - b を代入
    // a² + b² = (1000 - a - b)²
    // 整理すると: b = (500000 - 1000a) / (1000 - a)
    
    for a in 1..<500 {
        let numerator = 500000 - 1000 * a
        let denominator = 1000 - a
        
        if numerator % denominator == 0 {
            let b = numerator / denominator
            let c = 1000 - a - b
            
            if a < b && b < c && a*a + b*b == c*c {
                return a * b * c
            }
        }
    }
    return 0
}