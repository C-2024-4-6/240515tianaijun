#include <iostream>
#include <cmath>
#include <complex> 
using namespace std;
int main() {
    double a;
    cout << "������һ���� a: ";
    cin >> a;
    if (a < 0) {
        cout << "������ƽ������������" << endl;
        complex<double> x_n(a), x_n1;
        x_n = sqrt(x_n); 
        cout << "a ��ƽ������: " << x_n << endl;
        return 0;
    }
    double x_n = a; 
    double x_n1;
    double tolerance = 1e-5; 
    while (true) {
        x_n1 = 0.5 * (x_n + a / x_n); 
        if (fabs(x_n1 - x_n) < tolerance) { 
            cout << "a ��ƽ������: " << x_n1 << endl;
            break;
        }
        x_n = x_n1; 
    }
    tolerance = 1e-10;
    double x_n2 = a;
    while (true) {
        double x_n3 = 0.5 * (x_n2 + a / x_n2); 
        if (fabs(x_n3 - x_n2) < tolerance) { 
            cout << "a ��ƽ���������� 10^-10����: " << x_n3 << endl;
            break;
        }
        x_n2 = x_n3; 
    }

    return 0;
}