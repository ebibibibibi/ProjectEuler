<?php

class Student
{
    public int $id;
    public string $name;

    public function __construct(int $id, string $name)
    {
        $this->id = $id;
        $this->name = $name;
    }
}

function buildMap(array $students): array
{
    $map = [];

    foreach ($students as $student) {
        $map[$student->id] = $student;
    }

    return $map;
}

$students = [
    new Student(1, "山田"),
    new Student(2, "鈴木"),
    new Student(3, "佐藤")
];

// 配列検索 O(n)
$fromArray = null;

foreach ($students as $student) {
    if ($student->id === 3) {
        $fromArray = $student;
        break;
    }
}

echo "配列検索\n";
print_r($fromArray);

// HashMap検索 O(1)
$map = buildMap($students);

echo "\nHashMap検索\n";
print_r($map[3]);