#include <iostream>
using namespace std;
int main()             
{
	float total_bill=0, bill=0.00;
	int day=0;
	char room;
	cout<<"What room?"<<endl;
	cin>>room;
	cout<<"How many days?"<<endl;
	cin>>day;
	if(room=='A'){
	bill=256.80*day;
	}
	else if(room=='B'){
	bill=145.30*day;
	}
	else if(room=='C'){
	bill=89.20*day;}
	if (day>3){
	total_bill=bill*0.85;}
	else if(day<4){
	total_bill=bill;}
	cout<<total_bill;
{
}
}


