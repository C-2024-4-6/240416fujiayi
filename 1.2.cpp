#include<iostream>
using namespace std;
int main()
{
	cout << "������Բ׶��ĵ���뾶��׶��" << endl;
	double r, h, V;
	const double pi = 3.1415926;
	cin >> r >> h;
	V = pi * r * r * h / 3;
	cout << V;
	return 0;
}