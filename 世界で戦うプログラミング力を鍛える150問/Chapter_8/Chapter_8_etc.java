import java.util.HashMap;

public class Main {

    static class Student {
        private final int id;
        private final String name;

        Student(int id, String name) {
            this.id = id;
            this.name = name;
        }

        public int getId() {
            return id;
        }

        @Override
        public String toString() {
            return "Student{id=" + id + ", name='" + name + "'}";
        }
    }

    public static HashMap<Integer, Student> buildMap(Student[] students) {
        HashMap<Integer, Student> map = new HashMap<>();

        for (Student s : students) {
            map.put(s.getId(), s);
        }

        return map;
    }

    public static void main(String[] args) {

        Student[] students = {
                new Student(1, "山田"),
                new Student(2, "鈴木"),
                new Student(3, "佐藤")
        };

        // 配列検索 O(n)
        Student result = null;
        for (Student s : students) {
            if (s.getId() == 3) {
                result = s;
                break;
            }
        }

        System.out.println("配列検索");
        System.out.println(result);

        // HashMap検索 O(1)
        HashMap<Integer, Student> map = buildMap(students);

        System.out.println("\nHashMap検索");
        System.out.println(map.get(3));
    }
}