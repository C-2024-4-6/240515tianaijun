#include <iostream>
using namespace std;

class RectangularPrism {
private:
    double length; 
    double width;   
    double height;  

public:
    void set_dimensions() {
        cout << "�����볤�����ĳ��ȡ���Ⱥ͸߶ȣ�";
        cin >> length >> width >> height;
    }
    double calculate_volume() {
        return length * width * height;
    }
};

int main() {
    RectangularPrism prism1, prism2, prism3;
    cout << "�������һ���������ĳߴ磺" << endl;
    prism1.set_dimensions();
    cout << "������ڶ����������ĳߴ磺" << endl;
    prism2.set_dimensions();
    cout << "������������������ĳߴ磺" << endl;
    prism3.set_dimensions();
    cout << "��һ���������������" << prism1.calculate_volume() << endl;
    cout << "�ڶ����������������" << prism2.calculate_volume() << endl;
    cout << "�������������������" << prism3.calculate_volume() << endl;

    return 0;
}
