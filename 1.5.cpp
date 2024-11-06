#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	double h, c;
	cout << "请输入华氏温度" << endl;
	cin >> h;
	c = (h - 32) * 5 / 9;
	cout << "其对应的摄氏温度为   " << fixed << setprecision(2) << c << endl;
	system("pause");
	return 0;
}