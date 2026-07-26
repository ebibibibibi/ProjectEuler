import Foundation

// 学生を表す型
struct Student: CustomStringConvertible {
    let id: Int
    let name: String

    var description: String {
        "Student(id: \(id), name: \"\(name)\")"
    }
}

/**
 Studentの配列から、「学生ID → Student」のDictionaryを生成する。
 SwiftではDictionary<Int, Student>、または[Int: Student]に相当する。
 */
func buildMap(students: [Student]) -> [Int: Student] {
    // Intをキー、Studentを値とするDictionaryを作る
    var map: [Int: Student] = [:]
    
    // Studentオブジェクトを、「student.id」をキーとしてDictionaryに保存
    for student in students {
        map[student.id] = student
    }
    return map
}

// 学生の配列
let students: [Student] = [
    Student(id: 1, name: "山田"),
    Student(id: 2, name: "鈴木"),
    Student(id: 3, name: "佐藤")
]

// 配列をDictionaryに変換する
let studentMap = buildMap(students: students)

// --------------------------------------------
// 配列からIDが3の学生を探す
// --------------------------------------------

/**
 配列で「ID = 3の学生」を探す場合、
 先頭から順番に要素を確認する。

 サイズがnの配列に対し、
 最悪の場合はすべての要素を確認するため、
 計算量はO(n)となる。
 */
 
if let studentFromArray = students.first(where: { student in
    student.id == 3
}) {
    print("配列から取得:")
    print(studentFromArray)
} else {
    print("配列内にID = 3の学生はいません")
}

// --------------------------------------------
// DictionaryからIDが3の学生を探す
// --------------------------------------------

/**
 Dictionaryでは学生IDをキーとして直接検索できる。

 平均計算量はO(1)。
 ただし、ハッシュの衝突状況などによっては、
 必ず1回の処理で取得できるという意味ではない。
 */
if let studentFromMap = studentMap[3] {
    print("\nDictionaryから取得:")
    print(studentFromMap)
} else {
    print("Dictionary内にID = 3の学生はいません")
}

// --------------------------------------------
// Dictionaryの内容を確認する
// --------------------------------------------

print("\nDictionaryの内容:")

for id in studentMap.keys.sorted() {
    if let student = studentMap[id] {
        print("\(id) → \(student)")
    }
}