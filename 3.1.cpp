#include<iostream>
using namespace std;
int  gys(int a, int b)
{
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int  gbs(int a, int b)
{
	int m = a, n = b;
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	int x = m * n / a;
	return x;
}
int main()
{
	cout << "请输入两个自然数" << endl;
	int a, b;
	cin >> a >> b;
	cout << "这两个数的最大公约数为" << gys(a, b) << endl;
	cout << "这两个数的最小公倍数为" << gbs(a, b) << endl;

}