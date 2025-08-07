/*
 * Project Euler - Problem 1
 * Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%201
 * 
 * Problem 1 「3と5の倍数」
 * 10未満の自然数のうち, 3 もしくは 5 の倍数になっているものは 3, 5, 6, 9 の4つがあり,
 * これらの合計は 23 になる.
 * 同じようにして, 1000 未満の 3 か 5 の倍数になっている数字の合計を求めよ.
 */

import Foundation

// MARK: - 愚直実装
func solveBruteForce(limit: Int) -> Int {
    var sum = 0
    
    for i in 1..<limit {
        if i % 3 == 0 || i % 5 == 0 {
            sum += i
        }
    }
    
    return sum
}

// MARK: - 関数型アプローチ
func solveFunctional(limit: Int) -> Int {
    return (1..<limit)
        .filter { $0 % 3 == 0 || $0 % 5 == 0 }
        .reduce(0, +)
}

// MARK: - 関数型（高度版）
func solveFunctionalAdvanced(limit: Int) -> Int {
    return (1..<limit)
        .filter { $0 % 3 == 0 || $0 % 5 == 0 }
        .reduce(0) { acc, x in acc + x }
}

// MARK: - 数学的解法（修正版）
func solveMathematical(limit: Int) -> Int {
    func sumOfMultiples(of divisor: Int, below limit: Int) -> Int {
        let count = (limit - 1) / divisor
        return divisor * count * (count + 1) / 2
    }
    
    return sumOfMultiples(of: 3, below: limit) +
           sumOfMultiples(of: 5, below: limit) -
           sumOfMultiples(of: 15, below: limit)
}

// MARK: - 配列操作アプローチ
func solveArrayBased(limit: Int) -> Int {
    return Array(1..<limit)
        .filter { [3, 5].contains { $0 % $1 == 0 } }
        .reduce(0, +)
}

// MARK: - Set集合アプローチ
func solveSetBased(limit: Int) -> Int {
    let multiplesOf3 = Set(stride(from: 3, to: limit, by: 3))
    let multiplesOf5 = Set(stride(from: 5, to: limit, by: 5))
    
    return multiplesOf3.union(multiplesOf5).reduce(0, +)
}

// MARK: - 高階関数チェーン
func solveHigherOrderFunctions(limit: Int) -> Int {
    return (1..<limit)
        .compactMap { i in
            [3, 5].first { i % $0 == 0 } != nil ? i : nil
        }
        .reduce(0, +)
}

// MARK: - 実行時間測定
func measureTime<T>(operation: () -> T) -> (result: T, time: TimeInterval) {
    let startTime = CFAbsoluteTimeGetCurrent()
    let result = operation()
    let timeElapsed = CFAbsoluteTimeGetCurrent() - startTime
    return (result, timeElapsed)
}

// MARK: - 各解法の比較
func compareMethods(limit: Int) {
    print("=== Project Euler - Problem 1 ===")
    print("「3と5の倍数」(limit: \(limit))")
    print()
    
    let methods: [(String, () -> Int)] = [
        ("愚直実装", { solveBruteForce(limit: limit) }),
        ("関数型アプローチ", { solveFunctional(limit: limit) }),
        ("関数型（高度版）", { solveFunctionalAdvanced(limit: limit) }),
        ("数学的解法", { solveMathematical(limit: limit) }),
        ("配列操作", { solveArrayBased(limit: limit) }),
        ("Set集合", { solveSetBased(limit: limit) }),
        ("高階関数チェーン", { solveHigherOrderFunctions(limit: limit) })
    ]
    
    for (name, method) in methods {
        let (result, time) = measureTime(operation: method)
        print("\(name): \(result) (実行時間: \(String(format: "%.6f", time))秒)")
    }
    print()
}

// MARK: - 検証用の詳細出力
func verifyWithDetails(limit: Int) {
    print("=== 検証: limit = \(limit) ===")
    
    let multiples = (1..<limit)
        .filter { $0 % 3 == 0 || $0 % 5 == 0 }
    
    print("該当する数: \(Array(multiples))")
    print("合計: \(multiples.reduce(0, +))")
    print()
}

// MARK: - 性能テスト
func performanceTest() {
    print("=== 性能テスト ===")
    
    let testCases = [1000, 10000, 100000, 1000000]
    
    for limit in testCases {
        print("Limit: \(limit)")
        
        let (bruteResult, bruteTime) = measureTime {
            solveBruteForce(limit: limit)
        }
        
        let (mathResult, mathTime) = measureTime {
            solveMathematical(limit: limit)
        }
        
        print("  愚直実装: \(bruteResult) (\(String(format: "%.6f", bruteTime))秒)")
        print("  数学的解法: \(mathResult) (\(String(format: "%.6f", mathTime))秒)")
        
        let speedup = bruteTime / mathTime
        print("  速度比: \(String(format: "%.1f", speedup))倍")
        print()
    }
}

// MARK: - プロトコル実装版（Swiftらしい）
protocol MultipleSolver {
    func solve(limit: Int) -> Int
}

struct BruteForceSolver: MultipleSolver {
    func solve(limit: Int) -> Int {
        return solveBruteForce(limit: limit)
    }
}

struct MathematicalSolver: MultipleSolver {
    func solve(limit: Int) -> Int {
        return solveMathematical(limit: limit)
    }
}

struct FunctionalSolver: MultipleSolver {
    func solve(limit: Int) -> Int {
        return solveFunctional(limit: limit)
    }
}

// MARK: - ジェネリック関数
func solveGeneric<T: MultipleSolver>(limit: Int, solver: T) -> Int {
    return solver.solve(limit: limit)
}

// MARK: - エラーハンドリング版
enum SolverError: Error {
    case invalidLimit(String)
    case computationError(String)
}

func solveWithValidation(limit: Int) -> Result<Int, SolverError> {
    guard limit > 0 else {
        return .failure(.invalidLimit("Limit must be positive"))
    }
    
    guard limit <= 10_000_000 else {
        return .failure(.invalidLimit("Limit too large"))
    }
    
    let result = solveMathematical(limit: limit)
    return .success(result)
}

// MARK: - Extension（Swiftらしい）
extension Int {
    var isMultipleOf3Or5: Bool {
        return self % 3 == 0 || self % 5 == 0
    }
    
    func isMultiple(of numbers: [Int]) -> Bool {
        return numbers.contains { self % $0 == 0 }
    }
}

// MARK: - Extension版解法
func solveWithExtensions(limit: Int) -> Int {
    return (1..<limit)
        .filter(\.isMultipleOf3Or5)
        .reduce(0, +)
}

// MARK: - 並列処理版（DispatchQueue使用）
func solveParallel(limit: Int) -> Int {
    let chunkSize = max(1, limit / ProcessInfo.processInfo.processorCount)
    let chunks = stride(from: 1, to: limit, by: chunkSize).map { start in
        (start, min(start + chunkSize, limit))
    }
    
    let queue = DispatchQueue.global(qos: .userInteractive)
    let group = DispatchGroup()
    
    var results: [Int] = Array(repeating: 0, count: chunks.count)
    
    for (index, chunk) in chunks.enumerated() {
        queue.async(group: group) {
            let sum = (chunk.0..<chunk.1)
                .filter { $0 % 3 == 0 || $0 % 5 == 0 }
                .reduce(0, +)
            results[index] = sum
        }
    }
    
    group.wait()
    return results.reduce(0, +)
}

// MARK: - メイン実行部分
func main() {
    // 基本実行
    print(solveBruteForce(limit: 1000))
    
    // 検証
    verifyWithDetails(limit: 10)
    
    // 比較
    compareMethods(limit: 1000)
    
    // 性能テスト
    performanceTest()
    
    // プロトコル版のテスト
    print("=== プロトコル実装版 ===")
    let bruteSolver = BruteForceSolver()
    let mathSolver = MathematicalSolver()
    let functionalSolver = FunctionalSolver()
    
    print("愚直実装: \(solveGeneric(limit: 1000, solver: bruteSolver))")
    print("数学的解法: \(solveGeneric(limit: 1000, solver: mathSolver))")
    print("関数型: \(solveGeneric(limit: 1000, solver: functionalSolver))")
    print()
    
    // エラーハンドリング版
    print("=== エラーハンドリング版 ===")
    switch solveWithValidation(limit: 1000) {
    case .success(let result):
        print("結果: \(result)")
    case .failure(let error):
        print("エラー: \(error)")
    }
    
    switch solveWithValidation(limit: -1) {
    case .success(let result):
        print("結果: \(result)")
    case .failure(let error):
        print("エラー: \(error)")
    }
    print()
    
    // Extension版
    print("=== Extension版 ===")
    print("結果: \(solveWithExtensions(limit: 1000))")
    print()
    
    // 並列処理版（大きな数で試す）
    print("=== 並列処理版 ===")
    let (parallelResult, parallelTime) = measureTime {
        solveParallel(limit: 100000)
    }
    let (serialResult, serialTime) = measureTime {
        solveBruteForce(limit: 100000)
    }
    
    print("並列処理: \(parallelResult) (\(String(format: "%.6f", parallelTime))秒)")
    print("シリアル処理: \(serialResult) (\(String(format: "%.6f", serialTime))秒)")
    print("並列化効果: \(String(format: "%.1f", serialTime / parallelTime))倍")
}

// 実行
main()

// MARK: - テスト用関数
#if DEBUG
func runTests() {
    assert(solveBruteForce(limit: 10) == 23, "Test failed: limit 10")
    assert(solveFunctional(limit: 10) == 23, "Test failed: functional")
    assert(solveMathematical(limit: 10) == 23, "Test failed: mathematical")
    
    let limit = 1000
    let bruteResult = solveBruteForce(limit: limit)
    let functionalResult = solveFunctional(limit: limit)
    let mathematicalResult = solveMathematical(limit: limit)
    
    assert(bruteResult == functionalResult, "Results don't match: brute vs functional")
    assert(bruteResult == mathematicalResult, "Results don't match: brute vs mathematical")
    
    print("✅ All tests passed!")
}

runTests()
#endif