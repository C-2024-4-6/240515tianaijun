#include <iostream>
using namespace std;

class Student {
public:
    int id;
    float score;
    Student(int n, float s) : id(n), score(s) {}
};
void max(Student* arr) {
    int maxScore = 0;
    int maxId = 0;
    for (int i = 0; i < 5; i++) {
        if (arr[i].score > maxScore) {
            maxScore = arr[i].score;
            maxId = arr[i].id;
        }
    }
    cout << "成绩最高的学生是学号为 " << maxId << " 的学生。" << endl;
}

int main() {
    Student students[5] = {
        Student(101, 78.5),
        Student(102, 85.3),
        Student(103, 98.5),
        Student(104, 100.0),
        Student(105, 95.5)
    };

    max(students);

    return 0;
}
