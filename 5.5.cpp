#include<iostream>
using namespace std;
class Point
{
private:
	int x=60, y=80;
public:
	void setPoint(int i, int j)
	{
		x = 60 + i;
		y = 80 + j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	Point p1, p2, p3;
	p1.setPoint(0, 0);
	p1.display();
	p2.setPoint(5, 10);
	p2.display();
	p3.setPoint(-20, -60);
	p3.display();
	return 0;
}