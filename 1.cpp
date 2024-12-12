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
	cout << "请由大到小依次输入两个自然数：";
	cin >> a >> b;
	int num1 = max(a, b);
	int num2 = min(a, b);
	cout << "最大公约数为：" << num1 << endl;
	cout << "最小公倍数为：" << num2 << endl;
	return 0;
}