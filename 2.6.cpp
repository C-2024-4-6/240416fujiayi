#include<iostream>
using namespace std;
int main()
{
	cout << "请输入两个正整数" << endl;
	int a, b;
	cin >> a >> b;
	int x = a;
	int y = b;
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	cout << x << " 和 " << y << " 的" << "最大公约数是 " << a << endl;
	cout << x << " 和 " << y << " 的" << "最小公倍数是 " << x*y/a << endl;
	system("pause");
	return 0;
}