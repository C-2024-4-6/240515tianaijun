#include <iostream>
using namespace std;
int main() 
{
    double num1, num2;
    char x;
    double result;
    cout << "请输入第一个数字: ";
    cin >> num1;
    cout << "请输入运算符（+，-，*，/，%）: ";
    cin >> x;
    cout << "请输入第二个数字: ";
    cin >> num2;
    switch (x) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 != 0) {
            result = num1 / num2;
        }
        else {
            cout << "错误：除数不能为0。" << endl;
            return 1;
        }
        break;
    case '%':
        if (num2 != 0) {
            result = fmod(num1, num2);
        }
        else {
            cout << "错误：除数不能为0。" << endl;
            return 1;
        }
        break;
    default:
        cout << "错误：无效的运算符。" << endl;
        return 1;
    }
        cout << "结果是: " << result << endl;
        return 0;
    }