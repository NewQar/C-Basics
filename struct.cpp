#include <iostream>
#include <stdlib.h>
using namespace std;

//struct is used to access the list
//struct cannot insert into the main function
struct qardhawiBuatHal
{
	char name[25];
	char tagline[30];
	int age;
	int  IQ;
	double cgpa;
	bool stupidness;
};

int main()
{
	qardhawiBuatHal qor = 
	{
		"Qardhawi Master Jedi", 
		"May the force be with you", 
		21, 90, 4.00, false
	};
	
	cout << " --------------------------- " << endl;
	cout << "| Information about Qardhaw |" << endl;
	cout << " --------------------------- " << endl;
	
	cout << endl;
	cout << "His name is " << qor.name << endl;
	cout << "His tagline is '" << qor.tagline << "'" << endl;
	cout << "His age is " << qor.age << " years old" << endl;
	cout << "His IQ is very low, which is " << qor.IQ << endl;
	cout << "He gots " << qor.cgpa << "during Semester 1" << endl;
	cout << "His stupidness status is " << qor.stupidness << ", which is false" << endl;
	cout << endl;
	
	system("pause");
	return 0;
}
