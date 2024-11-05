#include <iostream>
using namespace std;
int main() 
{
    double a, b, c,C;
    cout << "请输入第一条边的长度: ";
    cin >> a;
    cout << "请输入第二条边的长度: ";
    cin >> b;
    cout << "请输入第三条边的长度: ";
    cin >> c;
    if (a + b > c && a + c > b && b + c > a)
    {
        C = a + b + c;
        cout << "周长为: " << C << endl;
        if (a == b || b == c || a == c) 
        {
            cout << "这是一个等腰三角形。" << endl;
        }
        else 
        {
            cout << "这不是一个等腰三角形。" << endl;
        }
    }
    else
    {
        cout << "输入的边长不能构成三角形。" << endl;
    }

    return 0;
}