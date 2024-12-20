//student.h
using namespace std;
class Student
{
public:
	void display();
	void set_value(int a,const string b, char c);
private:
	int num;
	string name;
	char sex;
};