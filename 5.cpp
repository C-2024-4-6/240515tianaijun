#include<iostream>
using namespace std;
int main() {
	int i,x=1,y;
	for (i = 0; i < 9; i++) {
		y = (x + 1) * 2;
		x = y;
	}
	cout << "桃子总数为：" << y << endl;
	return 0;
}