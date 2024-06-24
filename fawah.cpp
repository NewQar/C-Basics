#include <iostream>
using namespace std;

int square(double a,double b){
double areaS=a*b;
return areaS;
}

int triangle(double c, double d){
double areaT=0.5*c*d;
return areaT;
}

int main ()
{
	double width, length, area;
	int option;
	cout <<"choose operation you want to perform : "<< endl;
	cout <<"1. Triangle"<< endl;
	cout <<"2. Square "<< endl;
	cin >> option ;
	if (option>2)
	{
		cout<< " not a valid option !! Choose between 1 or 2 only"<< endl;
		cin>>option;
	}
	cout <<"what is the length of the shape"<<endl;
	cin >> length;
	cout << "what is the width of the shape"<<endl;
	cin >> width;
	
	switch (option)
	{
		case 1 :
		{area=triangle(width, length); 
		cout << " The area of triangle is : "<< area<<endl;
		}
		case 2 :
		{area=square(width, length) ;
		cout << " The area of square is : "<< area<<endl;
}
	}
}
