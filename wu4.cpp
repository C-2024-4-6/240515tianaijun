#include <iostream>
using namespace std;

class RectangularPrism {
private:
    double length; 
    double width;   
    double height;  

public:
    void set_dimensions() {
        cout << "请输入长方柱的长度、宽度和高度：";
        cin >> length >> width >> height;
    }
    double calculate_volume() {
        return length * width * height;
    }
};

int main() {
    RectangularPrism prism1, prism2, prism3;
    cout << "请输入第一个长方柱的尺寸：" << endl;
    prism1.set_dimensions();
    cout << "请输入第二个长方柱的尺寸：" << endl;
    prism2.set_dimensions();
    cout << "请输入第三个长方柱的尺寸：" << endl;
    prism3.set_dimensions();
    cout << "第一个长方柱的体积：" << prism1.calculate_volume() << endl;
    cout << "第二个长方柱的体积：" << prism2.calculate_volume() << endl;
    cout << "第三个长方柱的体积：" << prism3.calculate_volume() << endl;

    return 0;
}
