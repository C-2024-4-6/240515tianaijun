#include<iostream>
using namespace std;
int main()
{
	float x, y;
	cout << "���������0��10֮���ʵ����"<<endl;
	cin >> x;
	if (x < 1 && x>0) 
	{
		y = 3 - 2 * x;
		cout<<"���Ϊ��"<< y << endl;
	}
	else if (x < 5) 
	{
		y = 1 / (2 * x) + 1;
		cout << "���Ϊ��" << y << endl;

	}
	else if (x < 10) {
		y = x * x;
		cout << "���Ϊ��" << y << endl;
	}
	else 
	{
		cout << "���ڶ�������" << endl;

	}
	return 0;

}