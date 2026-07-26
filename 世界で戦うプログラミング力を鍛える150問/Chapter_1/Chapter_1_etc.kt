data class Student(
    val id: Int,
    val name: String
)

fun buildMap(students: Array<Student>): HashMap<Int, Student> {

    val map = HashMap<Int, Student>()

    for (student in students) {
        map[student.id] = student
    }

    return map
}

fun main() {

    val students = arrayOf(
        Student(1, "山田"),
        Student(2, "鈴木"),
        Student(3, "佐藤")
    )

    // 配列検索 O(n)
    val fromArray = students.firstOrNull {
        it.id == 3
    }

    println("配列検索")
    println(fromArray)

    // HashMap検索 O(1)
    val map = buildMap(students)

    println("\nHashMap検索")
    println(map[3])
}