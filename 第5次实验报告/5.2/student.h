// student.h
class Student {
public:
    void display();
    void set_value(int n, const char* nm, char s);  // 新增成员函数

private:
    int num;
    char name[20];
    char sex;
};

