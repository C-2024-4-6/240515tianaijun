#include <iostream>
using namespace std;
int main() 
{
    double a, b, c,C;
    cout << "�������һ���ߵĳ���: ";
    cin >> a;
    cout << "������ڶ����ߵĳ���: ";
    cin >> b;
    cout << "������������ߵĳ���: ";
    cin >> c;
    if (a + b > c && a + c > b && b + c > a)
    {
        C = a + b + c;
        cout << "�ܳ�Ϊ: " << C << endl;
        if (a == b || b == c || a == c) 
        {
            cout << "����һ�����������Ρ�" << endl;
        }
        else 
        {
            cout << "�ⲻ��һ�����������Ρ�" << endl;
        }
    }
    else
    {
        cout << "����ı߳����ܹ��������Ρ�" << endl;
    }

    return 0;
}