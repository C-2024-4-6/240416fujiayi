#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	double h, c;
	cout << "�����뻪���¶�" << endl;
	cin >> h;
	c = (h - 32) * 5 / 9;
	cout << "���Ӧ�������¶�Ϊ   " << fixed << setprecision(2) << c << endl;
	system("pause");
	return 0;
}