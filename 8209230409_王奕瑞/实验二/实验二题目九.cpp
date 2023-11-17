#include <iostream>
using namespace std;

int main_9() {
    int totalApples = 0; // 总苹果数
    int day = 0; // 天数
    double pricePerApple = 0.8; // 每个苹果的价格
    double totalCost = 0.0; // 总花费
    int applesToday = 2; // 当天购买的苹果数

    // 当增加今天的苹果不会超过100个时，继续循环
    while ((totalApples + applesToday) <= 100) {
        totalApples += applesToday; // 更新总苹果数
        totalCost += applesToday * pricePerApple; // 更新总花费
        applesToday *= 2; // 更新明天将要购买的苹果数
        day++; // 天数增加
    }

    // 计算平均花费
    double averageCost = totalCost / day;

    cout << "平均每天花费: " << averageCost << "元" << endl;

    return 0;
}
