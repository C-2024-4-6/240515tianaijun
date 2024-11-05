#include<iostream>
using namespace std;
int main()
{
	float x, y;
	cout << "请输入介于0，10之间的实数："<<endl;
	cin >> x;
	if (x < 1 && x>0) 
	{
		y = 3 - 2 * x;
		cout<<"结果为："<< y << endl;
	}
	else if (x < 5) 
	{
		y = 1 / (2 * x) + 1;
		cout << "结果为：" << y << endl;

	}
	else if (x < 10) {
		y = x * x;
		cout << "结果为：" << y << endl;
	}
	else 
	{
		cout << "不在定义域内" << endl;

	}
	return 0;

}