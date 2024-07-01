#include <iostream>
using namespace std;
//Soalan 3
float m=1,sum=0;
float Multi(float num,float m){
	return m=m*num;}

float Sums(float num,float sum){
	return sum=sum+num;}

float Subs(float num, float sub){
	return  sub=sub-num;}
	
float Num(){
	float number;
	cout<<"Number\t: ";
	cin>>number;
	return number;}

int main ()
{
	float sub=Num();
	float m=sum=sub;
	float num=sub;

	for(int i=0;i<2;i++){
		num=Num();
		sum=Sums(num,sum);
		m=Multi(num,m);
		sub=Subs(num,sub);
	}
	cout<<"\nSubtraction\t: "<<sub;
	cout<<"\nMultiplication\t: "<<m;
	cout<<"\nSummation\t: "<<sum;
}
