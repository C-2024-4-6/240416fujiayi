#include<iostream>
using namespace std;
int main()
{
	const float d = 0.8;
	int s = 2;
	float sum = 0;
	for (s = 2; s <= 100; s = s * 2)
	{
		sum += d * s;
	}
	cout << sum << endl;
	system("pause");
	return 0;
}