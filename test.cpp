
#include <iostream>
using namespace std;
//Soalan 1
int Days(int day){
	cout<<"Day\t: ";
	cin>>day;
	return day;
}
string Months(string month)
{
	cout<<"Month\t: ";
	cin>>month;
	return month;
}
	int Years(int year)
{
	cout<<"Year\t: ";
	cin>>year;
	return year;
}

string Name(string name)
{
cout<<"Name\t:";
cin>>name;
return name;
}
string Homes(string hometown){
	cout<<"Hometown\t: ";
	cin>>hometown;
	return hometown;
}
string Phones(string phone){
	cout<<"Phone\t: ";
	cin>>phone;
	return phone;
}

int main ()
{
int year;
int day;
string month,hometown,phone;

string name;
name=Name(name);
day=Days(day);
month= Months(month);
year=Years(year);
hometown=Homes(hometown);
phone=Phones(phone);

cout<<"\nName\t\t:"<<name;
cout<<"\nDate of birth\t: "<<day<<"/"<<month<<"/"<<year;
int age=2022-year;
cout<<"\nAge\t\t: "<<age;
cout<<"\nHometown\t: "<<hometown;
cout<<"\nPhone Number\t: "<<phone;
return 0;
}
