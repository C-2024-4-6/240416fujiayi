#include<iostream>
using namespace std;
int main()
{
	cout << "请输入圆锥体的底面半径和锥高" << endl;
	double r, h, V;
	const double pi = 3.1415926;
	cin >> r >> h;
	V = pi * r * r * h / 3;
	cout << V;
	return 0;
}