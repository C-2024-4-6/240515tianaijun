#include <iostream>
#include "mytriangle.h"
using namespace std;
int main() {
    double side1, side2, side3;
    cout << "请输入三角形的三条边长：" <<endl;
    cin >> side1 >> side2 >> side3;
    if (is_valid(side1, side2, side3)) {
        double triangleArea = area(side1, side2, side3);
        cout << "三角形的面积是: " << triangleArea <<endl;
    }
    else {
        cout << "输入的边长无法构成三角形，请重新输入。" <<endl;
    }
    return 0;
}
