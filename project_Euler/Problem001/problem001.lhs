-- Project Euler - Problem 1
-- Source: http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%201
-- 
-- Problem 1 「3と5の倍数」  †
-- 10未満の自然数のうち, 3 もしくは 5 の倍数になっているものは 3, 5, 6, 9 の4つがあり,
-- これらの合計は 23 になる.
-- 同じようにして, 1000 未満の 3 か 5 の倍数になっている数字の合計を求めよ.
-- int a =10;
-- 

-- リスト内包表記
problem1 = sum [x | x <- [1..999], x `mod` 3 == 0 || x 'mod' 5 == 0]

-- 数学的に (包除原理)
problem1' = sumStep 3 999 + sumStep 5 999 - sumStep 15 999
 sumStep s n = s * (m * (m + 1) `div` 2)
  where
    m = n `div` s