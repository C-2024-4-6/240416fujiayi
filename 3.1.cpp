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
	cout << "������������Ȼ��" << endl;
	int a, b;
	cin >> a >> b;
	cout << "�������������Լ��Ϊ" << gys(a, b) << endl;
	cout << "������������С������Ϊ" << gbs(a, b) << endl;

}