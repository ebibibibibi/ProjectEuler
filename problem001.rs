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


 // MARK: 愚直実装
 fn solve_brute_force(limit: i32) -> i32 {
    let mut sum = 0;

    for i in 1..limit {
        if i % 3 == 0 || i % 5 == 0 {
            sum += i;
        }
    }
    sum
 }

 // MARK: 関数型アプローチ
 fn solve_functional(limit: i32) -> i32 {
    (1..limit)
    .filter(|i| i % 3 == 0 || i % 5 == 0)
    .sum()
 }
 // MARK: - 関数型っぽいアプローチ
fn solve_functional_advanced(limit: i32) -> i32 {
    (1..limit)
        .filter(|&n| n % 3 == 0 || n % 5 == 0)
        .fold(0, |acc, x| acc + x)
}


 // MARK: 数学的解法
 fn solve_mathematical(limit: i32) -> i32 {
    fn sum_of_multiples(limit: i32) -> i32 {
        let count = (limit - 1) / divisor;
        divisor * count * (count + 1) / 2
    }

    sum_of_multiples(3) + 
    sum_of_multiples(5) - 
    sum_of_multiples(15)
 }

 fn main() {
    println!("{}", solve_brute_force(1000));
 }

 // MARK: - イテレータチェーンを使った実装
fn solve_iterator_chain(limit: i32) -> i32 {
    (1..limit)
        .filter(|&n| [3, 5].iter().any(|&divisor| n % divisor == 0))
        .sum()
}

// MARK: - 実行時間測定
fn measure_time<F>(f: F) -> (i32, std::time::Duration)
where
    F: FnOnce() -> i32,
{
    let start = std::time::Instant::now();
    let result = f();
    let duration = start.elapsed();
    (result, duration)
}

// MARK: - 各解法の比較
fn compare_methods(limit: i32) {
    println!("=== Project Euler - Problem 1 ===");
    println!("「3と5の倍数」(limit: {})", limit);
    println!();

    let methods: Vec<(&str, Box<dyn Fn() -> i32>)> = vec![
        ("愚直実装", Box::new(|| solve_brute_force(limit))),
        ("関数型アプローチ", Box::new(|| solve_functional(limit))),
        ("数学的解法", Box::new(|| solve_mathematical(limit))),
        ("関数型（高度）", Box::new(|| solve_functional_advanced(limit))),
        ("イテレータチェーン", Box::new(|| solve_iterator_chain(limit))),
    ];

    for (name, method) in methods {
        let (result, duration) = measure_time(|| method());
        println!("{}: {} (実行時間: {:.6}秒)", 
                 name, result, duration.as_secs_f64());
    }
    println!();
}

// MARK: - 検証用の詳細出力
fn verify_with_details(limit: i32) {
    println!("=== 検証: limit = {} ===", limit);
    
    let multiples: Vec<i32> = (1..limit)
        .filter(|&n| n % 3 == 0 || n % 5 == 0)
        .collect();
    
    println!("該当する数: {:?}", multiples);
    println!("合計: {}", multiples.iter().sum::<i32>());
    println!();
}

// MARK: - 性能テスト
fn performance_test() {
    println!("=== 性能テスト ===");
    
    let test_cases = vec![1000, 10000, 100000, 1000000];
    
    for &limit in &test_cases {
        println!("Limit: {}", limit);
        
        let (brute_result, brute_time) = measure_time(|| solve_brute_force(limit));
        let (math_result, math_time) = measure_time(|| solve_mathematical(limit));
        
        println!("  愚直実装: {} ({:.6}秒)", brute_result, brute_time.as_secs_f64());
        println!("  数学的解法: {} ({:.6}秒)", math_result, math_time.as_secs_f64());
        
        let speedup = brute_time.as_secs_f64() / math_time.as_secs_f64();
        println!("  速度比: {:.1}倍", speedup);
        println!();
    }
}

// MARK: - トレイト実装版（Rustらしい）
trait MultipleSolver {
    fn solve(&self, limit: i32) -> i32;
}

struct BruteForceSolver;
struct MathematicalSolver;

impl MultipleSolver for BruteForceSolver {
    fn solve(&self, limit: i32) -> i32 {
        solve_brute_force(limit)
    }
}

impl MultipleSolver for MathematicalSolver {
    fn solve(&self, limit: i32) -> i32 {
        solve_mathematical(limit)
    }
}
