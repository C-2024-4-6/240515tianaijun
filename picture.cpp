#include <iostream>
using namespace std;
int main() {
    int rows = 5; 
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl; // 每输出完一行后换行
    }
    return 0;
}