#include<iostream>
using namespace std;
int main()
{
	cout << "����������������" << endl;
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
	cout << x << " �� " << y << " ��" << "���Լ���� " << a << endl;
	cout << x << " �� " << y << " ��" << "��С�������� " << x*y/a << endl;
	system("pause");
	return 0;
}