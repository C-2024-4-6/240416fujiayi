#include<iostream>
using namespace std;
int main()
{
	cout << "请输入三角形的三个边长 " << endl;
	float a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "该三角形的周长为 " << a + b + c << endl;
		if (a == b || a == c || b == c)
		{
			cout << "该三角形为等腰三角形" << endl;
		}
		else
		{
			cout << "该三角形不为等腰三角形" << endl;
		}
	}
	else
	{
		cout << "构不成三角形" << endl;
	}
	system("pause");
	return 0;
}