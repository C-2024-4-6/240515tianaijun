#include <iostream>
using namespace std;
int main() 
{
    double num1, num2;
    char x;
    double result;
    cout << "�������һ������: ";
    cin >> num1;
    cout << "�������������+��-��*��/��%��: ";
    cin >> x;
    cout << "������ڶ�������: ";
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
            cout << "���󣺳�������Ϊ0��" << endl;
            return 1;
        }
        break;
    case '%':
        if (num2 != 0) {
            result = fmod(num1, num2);
        }
        else {
            cout << "���󣺳�������Ϊ0��" << endl;
            return 1;
        }
        break;
    default:
        cout << "������Ч���������" << endl;
        return 1;
    }
        cout << "�����: " << result << endl;
        return 0;
    }