/*
猴子吃桃：
猴子第一天摘若干桃子，当即吃了一半，还不过瘾，又吃了一个。
第二天又将剩下的桃子吃掉一半，又多吃一个，
以后每天如此，到第10天，发现只剩最后一个桃子，
问，第一天猴子共摘多少桃子（用递归实现）。
*/


#include <iostream>
using namespace std;

// 递归函数定义
int peaches(int day) {
    if (day == 10) {
        return 1; // 第 10 天剩下的桃子数
    }
    else {
        return (peaches(day + 1) + 1) * 2; // 倒推前一天的桃子数
    }
}

int main() {
    // 计算并输出第一天的桃子数
    cout << "第一天猴子共摘了 " << peaches(1) << " 个桃子。" << endl;
    return 0;
}

//其实迭代的思路更加直观

/*
#include <iostream>
using namespace std;

int main() {
    int peaches = 1; 

    for (int day = 9; day >= 1; --day) {
        peaches = (peaches + 1) * 2; 
    }

    cout << "第一天猴子共摘了 " << peaches << " 个桃子。" << endl;
    return 0;
}
*/