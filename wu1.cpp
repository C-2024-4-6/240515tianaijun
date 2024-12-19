#include<iostream>
using namespace std;

class Time {             // 定义Time类
private:              // 数据成员为私有的
    int hour;
    int minute;
    int sec;

public:
    void set_time();    // 输入时间的成员函数
    void show_time();   // 输出时间的成员函数
};

void Time::set_time() {
    cin >> hour >> minute >> sec;
}

void Time::show_time() {
    cout << hour << ":" << minute << ":" << sec << endl;
}

int main() {
    Time t1;           // 定义t1为Time类对象
    t1.set_time();     // 调用成员函数输入时间
    t1.show_time();    // 调用成员函数输出时间
    return 0;
}
