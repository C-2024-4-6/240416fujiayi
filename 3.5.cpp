#include<iostream>
using namespace std;
int p(int a)
{
	if (a == 10) return 1;
	else return 2 * (p(a + 1) + 1);
}
int main()
{
	int s = p(1);
	cout << "第一天猴子共摘" << s << "个桃子" << endl;
}