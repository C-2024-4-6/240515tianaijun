#include<iostream>
using namespace std;

class Time {             // ����Time��
private:              // ���ݳ�ԱΪ˽�е�
    int hour;
    int minute;
    int sec;

public:
    void set_time();    // ����ʱ��ĳ�Ա����
    void show_time();   // ���ʱ��ĳ�Ա����
};

void Time::set_time() {
    cin >> hour >> minute >> sec;
}

void Time::show_time() {
    cout << hour << ":" << minute << ":" << sec << endl;
}

int main() {
    Time t1;           // ����t1ΪTime�����
    t1.set_time();     // ���ó�Ա��������ʱ��
    t1.show_time();    // ���ó�Ա�������ʱ��
    return 0;
}
