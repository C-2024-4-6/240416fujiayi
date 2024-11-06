#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout << "请输入一行字符" << endl;
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
	cout << "英文字母个数为" << yw << "个" << endl;
	cout << "空格个数为" << kg << "个" << endl;
	cout << "数字个数为" << sz << "个" << endl;
	cout << "其他字符个数为" << qt << "个" << endl;
	system("pause");
	return 0;
}