#include<iostream>
using namespace std;
int main()
{
	cout << "������һ����" << endl;
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
	cout << aa << "��ƽ����Ϊ " << y << endl;
	system("pause");
	return 0;
}