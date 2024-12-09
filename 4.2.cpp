#include<iostream>
using namespace std;
void swap(double& a, double& b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	cout << "请输入十个数字" << endl;
	double list[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> list[i];
	}
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < 9; j++)
			if (list[j] > list[j + 1])
			{
				swap(list[j], list[j + 1]);
				changed = true;
			}
	} while (changed);
	for (int i = 0; i < 10; i++)
	{
		cout << list[i] << " ";
	}
	return 0;
}