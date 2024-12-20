#include<iostream>
using namespace std;
class cft
{
public:
	int l, w, h;
	int tj;
	void cinlwh()
	{
		cin >> l >> w >> h;
	}
	void calculate()
	{
		tj = l * w * h;
	}
	void showtj()
	{
		cout << "该长方体体积为:" << tj << endl;
	}
};
int main()
{
	cft c1, c2, c3;
	c1.cinlwh();
	c2.cinlwh();
	c3.cinlwh();
	c1.calculate();
	c2.calculate();
	c3.calculate();
	c1.showtj();
	c2.showtj();
	c3.showtj();
	return 0;
}