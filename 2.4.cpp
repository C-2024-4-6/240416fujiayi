#include<iostream>
using namespace std;
int main()
{
	float a, b;
	char ys;
	cout << "�������һ������" << endl;
	cin >> a;
	cout << "������ڶ�������" << endl;
	cin >> b;
	cout << "��ѡ��������е����㣨+ - * / %��" << endl;
	cin >> ys;
	switch (ys)
	{
	case '+': cout << a << "+" << b << "=" << a + b << endl; break;
	case '-': cout << a << "-" << b << "=" << a - b << endl; break;
	case '*': cout << a << "*" << b << "=" << a * b << endl; break;
	case '/': {
		if (b == 0) { cout << "���㲻�Ϸ�" << endl; break; }
		else { cout << a << "/" << b << "=" << a / b << endl; break; }
	}
	case '%': {
		if (a - (int)a == 0 && b - (int)b == 0) cout << a << "%" << b << "=" << (int)a % (int)b << endl;
		else cout << "���㲻�Ϸ�" << endl; break;
	}
	}
	system("pause");
	return 0;
}