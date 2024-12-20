#include<iostream>
using namespace std;
class Student
{
public:
	int id;
	double score;
	Student(int i, int c) :id(i), score(c) {};
};
int* max(Student* s1, Student* s2, Student* s3, Student* s4, Student* s5)
{
	int* maxid = new int;
	double maxs = s1->score;
	*maxid = s1->id;
	if (s2->score > maxs)
	{
		maxs = s2->score;
		*maxid=s2->id;
	}
	if (s3->score > maxs)
	{
		maxs = s3->score;
		*maxid = s3->id;
	}
	if (s4->score > maxs)
	{
		maxs = s4->score;
		*maxid = s4->id;
	}
	if (s4->score > maxs)
	{
		maxs = s4->score;
		*maxid = s4->id;
	}
	if (s5->score > maxs)
	{
		maxs = s5->score;
		*maxid = s5->id;
	}
	return maxid;
}
int main()
{
	Student s[5] =
	{
		Student(1,59),
		Student(2,94),
		Student(3,69),
		Student(4,83),
		Student(5,72)
	};
	int* m = max(&s[0], &s[1], &s[2], &s[3], &s[4]);
	cout << *m << endl;
	delete m;
	return 0;
}