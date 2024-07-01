#include <iostream>
using namespace std;
//Soalan 2
float CalcBig(float num,float max)
{
	if(num>max)
		max=num;
	return max;
}

float Num()
{
	float number;
	cout<<"Number\t\t: ";
	cin>>number;
	return number;
}

int main (){
	float max,num;
	int count=0;
	num= Num();
	max=num;
	while(count<2){
		num=Num();
		max=CalcBig(num,max);
		count++;
	}
	cout<<"\nHighest Number\t: "<<max;
}
