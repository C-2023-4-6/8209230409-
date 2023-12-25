#include <iostream>
using namespace std;

class Student {
public:
    int id;     // 学生的学号
    float score; // 学生的成绩

    Student() : id(0), score(0) {} // 默认构造函数
    Student(int id, float score) : id(id), score(score) {} // 带参数的构造函数
};

// 函数max，用于找出成绩最高的学生
void max(Student* students, int size) {
    int maxIndex = 0; // 用于存储成绩最高学生的索引
    for (int i = 1; i < size; i++) {
        if (students[i].score > students[maxIndex].score) {
            maxIndex = i;
        }
    }

    cout << "成绩最高的学生学号: " << students[maxIndex].id << "，成绩: " << students[maxIndex].score << endl;
}

int main() {
    // 创建包含5个学生的数组
    Student students[5] = {
        Student(1, 85.5),
        Student(2, 92.0),
        Student(3, 88.5),
        Student(4, 90.0),
        Student(5, 91.5)
    };

    // 调用max函数查找成绩最高的学生
    max(students, 5);

    return 0;
}
