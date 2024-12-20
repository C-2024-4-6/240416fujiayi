//main.cpp
#include<iostream>
#include<string>
#include"5.2student.h"
using namespace std;
int main()
{
	Student stud;
	stud.set_value(007, "tcg", 'm');
	stud.display();
	return 0;
}