#include<iostream>
using namespace std;
int main() {
	int i,x=1,y;
	for (i = 0; i < 9; i++) {
		y = (x + 1) * 2;
		x = y;
	}
	cout << "��������Ϊ��" << y << endl;
	return 0;
}