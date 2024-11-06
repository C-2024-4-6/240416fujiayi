#include<iostream>
using namespace std;
int main()
{
	cout << "请输入一个数" << endl;
	double a, n = 1, y;
	cin >> a;
	const int aa = a;
	for (int i = 0; i <=999999999999999999; i++)
	{
		y = (a + aa / a) / 2;
		if (y - a<0.00001 && y - a>-0.00001)
		{
			break;
		}
		a = y;
	}
	cout << aa << "的平方根为 " << y << endl;
	system("pause");
	return 0;
}