#include<iostream>
using namespace std;
int max(int a, int b) {
	while (b != 0) {
		int t = b;
		b = a % b;
		a = t;
	}
	return a;
}
int min(int a, int b){
	return a * b / max(a,b);
}
int main() {
	int a, b;
	cout << "���ɴ�С��������������Ȼ����";
	cin >> a >> b;
	int num1 = max(a, b);
	int num2 = min(a, b);
	cout << "���Լ��Ϊ��" << num1 << endl;
	cout << "��С������Ϊ��" << num2 << endl;
	return 0;
}