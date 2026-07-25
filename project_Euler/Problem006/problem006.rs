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


 fn sum_of_squares(n: i32) -> i32 {
    let mut sum = 0;
    for i in 1..=n {
        sum += i * i;
    }
    sum
 }

 fn square_of_sum(n: i32) -> i32 {
    (1..=n).map(|i| i * i).sum()
 }

 fn difference(n: i32) -> i32 {}
 fn main() {
    let result = sum_of_squares(10);
    println!("Result: {}", result); 
 }

 // 数学的なアプローチ
 fn difference_mathematical(n: i32) -> i32 {
    // 1 + 2 + ... + n = n(n+1)/2
    let sum_formula = n * (n + 1) / 2;
    // 1² + 2² + ... + n² = n(n+1)(2n+1)/6
    let sum_of_squares_formula = n * (n + 1) * (2 * n + 1) / 6;
    sum_formula * sum_formula - sum_of_squares_formula
 }