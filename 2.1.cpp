#include<iostream>
using namespace std;
int main()
{
	char a,b,c;
	cout << "请输入一个字符：" << endl;
	cin >> a;
	if (a >= 'a' && a <= 'z')
	{
		a = (a - 'a') + 'A';
		cout << "其对应的大写字母为： " << a << endl;
	}
	else
	{
		cout << "其后继字符的ASCII码为： " << static_cast<int>(a + 1) << endl;
	}
	system("pause");
	return 0;
}