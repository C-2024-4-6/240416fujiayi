#include<iostream>
using namespace std;
int main()
{
	cout << "请输入一个数字（0-10）" << endl;
	float x, y;
	cin >> x;
	if (x > 0 && x < 1)
	{
		y = 3 - 2 * x;
		cout << "运算后的结果为 " << y << endl;
	}
	else if (x >= 1 && x < 5)
	{
		y = 2 / (4 * x) + 1;
		cout << "运算后的结果为 " << y << endl;
	}
	else if (x >= 5 && x < 10)
	{
		y = x * x;
		cout << "运算后的结果为 " << y << endl;
	}
	else
	{
		cout << "无法运算" << endl;
	}
	system("pause");
	return 0;
}