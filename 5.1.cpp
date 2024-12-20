#include<iostream>
using namespace std;
class Time
{
private:
	int hour;
	int minute;
	int sec;
public:
	void cintime()
	{
		cin >> hour >> minute >> sec;
	}
	void showtime()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;
	t1.cintime();
	t1.showtime();
	return 0;
}