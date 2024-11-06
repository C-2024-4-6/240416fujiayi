#include<iostream>
using namespace std;
int main()
{
	float a, b;
	char ys;
	cout << "请输入第一个数字" << endl;
	cin >> a;
	cout << "请输入第二个数字" << endl;
	cin >> b;
	cout << "请选择你想进行的运算（+ - * / %）" << endl;
	cin >> ys;
	switch (ys)
	{
	case '+': cout << a << "+" << b << "=" << a + b << endl; break;
	case '-': cout << a << "-" << b << "=" << a - b << endl; break;
	case '*': cout << a << "*" << b << "=" << a * b << endl; break;
	case '/': {
		if (b == 0) { cout << "运算不合法" << endl; break; }
		else { cout << a << "/" << b << "=" << a / b << endl; break; }
	}
	case '%': {
		if (a - (int)a == 0 && b - (int)b == 0) cout << a << "%" << b << "=" << (int)a % (int)b << endl;
		else cout << "运算不合法" << endl; break;
	}
	}
	system("pause");
	return 0;
}