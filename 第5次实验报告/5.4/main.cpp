#include <iostream>
using namespace std;

class Student {
public:
    int id;     // ѧ����ѧ��
    float score; // ѧ���ĳɼ�

    Student() : id(0), score(0) {} // Ĭ�Ϲ��캯��
    Student(int id, float score) : id(id), score(score) {} // �������Ĺ��캯��
};

// ����max�������ҳ��ɼ���ߵ�ѧ��
void max(Student* students, int size) {
    int maxIndex = 0; // ���ڴ洢�ɼ����ѧ��������
    for (int i = 1; i < size; i++) {
        if (students[i].score > students[maxIndex].score) {
            maxIndex = i;
        }
    }

    cout << "�ɼ���ߵ�ѧ��ѧ��: " << students[maxIndex].id << "���ɼ�: " << students[maxIndex].score << endl;
}

int main() {
    // ��������5��ѧ��������
    Student students[5] = {
        Student(1, 85.5),
        Student(2, 92.0),
        Student(3, 88.5),
        Student(4, 90.0),
        Student(5, 91.5)
    };

    // ����max�������ҳɼ���ߵ�ѧ��
    max(students, 5);

    return 0;
}
