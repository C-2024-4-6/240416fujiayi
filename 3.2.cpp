#include<iostream>
using namespace std;
bool isprime(int num);

int main()
{
	const int n = 200;
	int n = 0;
	int num;
	cout << "������һ������" << endl;
	cin >> num;
	cout << isprime(num) << endl;
	cout << "ǰ200������Ϊ��" << endl;
	int i = 2;
	while (n <= n)
	{
		if (isprime(i))
		{
			cout << i << " ";
			n++;
		}
		i++;
		if (n % 10 == 0) cout << endl;
	}
}
bool isprime(int num)
{
	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
		{
			return false;
			break;
		}
	}
	return true;
}