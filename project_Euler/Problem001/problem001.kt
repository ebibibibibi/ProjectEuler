

fun solveBruteForce(limit: Int): Int {
    var sum = 0

    for (i in 1 until limit) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i
        }
    }
    return sum
}

fun main() {
    println(solveBruteForce(1000))
}

fun solveSmart(limit: Int): Int {
    return (1 until limit)
    .filter { it % 3 == 0 || it % 5 == 0 }
    .sum()
}