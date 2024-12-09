#include<iostream>
using namespace std;
double celsius_to_fah(double cel)
{
	double fah = cel * 1.8 + 32;
	return fah;
}
double fahrenheit_to_cels(double fah)
{
	double cel = (fah - 32) * 5 / 9;
	return cel;
}
int main()
{
	double i = 40.0, j = 120.0;
	cout << "Celsius " << "Fahrenheit" << " | " << "Fahrenheit" << " Celsius" << endl;
	for (int a = 1; a <= 10; a++)
	{
		cout.precision(1);
		cout.flags(cout.fixed);
		cout << i << "       " << celsius_to_fah(i) << " | " << j << "          " << fahrenheit_to_cels(j) << endl;
		i -= 1;
		j -= 10;
	}
	return 0;
}