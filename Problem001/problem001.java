import java.util.stream.IntStream;

public class SumOMultiples {
    // MARK: 愚直実装
    public static int solveBruteForce(int limit) {
        int sum = 0;

        for (int i = 1; i < limit; i++) {
            if (i % 3 == 0 || i % 5 == 0) {
                sum += i;
            }
        }
        return sum;
    }

    // MARK: - 数学的解法（効率的）
    /*
     1. 任意の範囲内の数値中、iの倍数の合計を求める
     2. 等差数列の和の公式を用いる
     */
    public static int solveMathematical(int limit) {
        int sum3 = SumOMultiples(3, limit);
        int sum5 = SumOMultiples(5, limit);
        int sum15 = SumOMultiples(15, limit);
        return sum3 + sum5 - sum15;
    }

    private static int SumOMultiples(int divisor, int limit) {
        // divisorの倍数がいくつあるか
        int count = (limit - 1) / divisor;
        // 等差数列の和の公式
        return divisor * count * (count + 1) / 2;
    }

    