#include <iostream>
using namespace std;
int gcd(int a, int b);
int lcm(int a, int b);
int main() {
    int a, b;
    cout << "������������������";
    cin >> a >> b;
    int greatestCommonDivisor = gcd(a, b);
    int leastCommonMultiple = lcm(a, b);
    cout << "���Լ����GCD���ǣ�" << greatestCommonDivisor << endl;
    cout << "��С��������LCM���ǣ�" << leastCommonMultiple << endl;
    return 0;
}
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}