#include <iostream>
#include <cmath>
#include <complex> 
using namespace std;
int main() {
    double a;
    cout << "请输入一个数 a: ";
    cin >> a;
    if (a < 0) {
        cout << "负数的平方根是虚数。" << endl;
        complex<double> x_n(a), x_n1;
        x_n = sqrt(x_n); 
        cout << "a 的平方根是: " << x_n << endl;
        return 0;
    }
    double x_n = a; 
    double x_n1;
    double tolerance = 1e-5; 
    while (true) {
        x_n1 = 0.5 * (x_n + a / x_n); 
        if (fabs(x_n1 - x_n) < tolerance) { 
            cout << "a 的平方根是: " << x_n1 << endl;
            break;
        }
        x_n = x_n1; 
    }
    tolerance = 1e-10;
    double x_n2 = a;
    while (true) {
        double x_n3 = 0.5 * (x_n2 + a / x_n2); 
        if (fabs(x_n3 - x_n2) < tolerance) { 
            cout << "a 的平方根（精度 10^-10）是: " << x_n3 << endl;
            break;
        }
        x_n2 = x_n3; 
    }

    return 0;
}