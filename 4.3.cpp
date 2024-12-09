#include<iostream>
using namespace std;
int main()
{
	bool g[101] = { false };
	for (int i = 1; i <= 100; i++)
	{
		for (int j = i; j <= 100; j += i)
		{
			if (g[j]) g[j] = false;
			else g[j] = true;
		}
	}
	for (int t = 1; t <= 100; t++)
		if (g[t]) cout << t << " ";
	return 0;
}