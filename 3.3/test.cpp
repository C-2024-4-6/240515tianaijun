#include <iostream>
#include "mytriangle.h"
using namespace std;
int main() {
    double side1, side2, side3;
    cout << "�����������ε������߳���" <<endl;
    cin >> side1 >> side2 >> side3;
    if (is_valid(side1, side2, side3)) {
        double triangleArea = area(side1, side2, side3);
        cout << "�����ε������: " << triangleArea <<endl;
    }
    else {
        cout << "����ı߳��޷����������Σ����������롣" <<endl;
    }
    return 0;
}
