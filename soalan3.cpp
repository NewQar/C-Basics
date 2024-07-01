#include<iostream>
#include <cmath>


using namespace std;

class q3
{
double f,fe,r ,j,v;

public:
	
void main();
double user_input();
double calculate(double);
double display_warning(double);


};
void q3::main()
{
	cout<<" Welcome"<<endl;
	user_input();
	
}

double q3::user_input(){
	double f, fe, r;
	cout<<"Input frequency: ";
	cin>>f;
	cout<<"Input reflected frequency: ";
	cin>>fe;
	r = (fe-f)/(fe+f);
	double calculate(double r);
}
double q3::calculate(double v){
	double r,v;
	v =(6.685*pow(10,8)*r*1.60934);
	return v;
}

