//student.cpp
#include<iostream>
#include<string>
#include"5.2student.h"
using namespace std;

void Student::display()
{
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}
void Student::set_value(int a,const string b, char c)
{
	num = a;
	name= b;
	sex = c;
}
