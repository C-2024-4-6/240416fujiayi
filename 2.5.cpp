#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout << "������һ���ַ�" << endl;
	int yw = 0, kg = 0, sz = 0, qt = 0;
	string input;
	getline(cin, input);
	for (char c: input)
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) yw++;
		if (c == ' ') kg++;
		if (c >= '0' && c <= '9') sz++;
		else qt++;
	}
	cout << "Ӣ����ĸ����Ϊ" << yw << "��" << endl;
	cout << "�ո����Ϊ" << kg << "��" << endl;
	cout << "���ָ���Ϊ" << sz << "��" << endl;
	cout << "�����ַ�����Ϊ" << qt << "��" << endl;
	system("pause");
	return 0;
}