#include<iostream>
using namespace std;
int main()
{
	char a,b,c;
	cout << "������һ���ַ���" << endl;
	cin >> a;
	if (a >= 'a' && a <= 'z')
	{
		a = (a - 'a') + 'A';
		cout << "���Ӧ�Ĵ�д��ĸΪ�� " << a << endl;
	}
	else
	{
		cout << "�����ַ���ASCII��Ϊ�� " << static_cast<int>(a + 1) << endl;
	}
	system("pause");
	return 0;
}