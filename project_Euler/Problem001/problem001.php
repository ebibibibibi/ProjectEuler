<?php
// MARK: - 数学的解法（効率的）
/*
 1. 任意の範囲内の数値中、iの倍数の合計を求める
 2. 等差数列の和の公式を用いる
*/

function solveMathematical($limit) {
    $sum3 = sumOfMultiples(3, $limit);
    $sum5 = sumOfMultiples(5, $limit);
    $sum15 = sumOfMultiples(15, $limit);
    return $sum3 + $sum5 - $sum15;
}

function sumOfMultiples($divisor, $limit) {
    $count = (int)(($limit - 1) / $divisor);
    return $divisor * $count * ($count + 1) / 2;
}