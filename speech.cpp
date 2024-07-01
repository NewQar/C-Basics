#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>

using namespace std;

//START OF CLASS

class fahmi
{
public:

int main();       
void calcPayment();
void calcDiscount();    
     };
     

int fahmi::main(){
	int type=0,hours=0,numguest=0;
	fahmi result;
	
	cin>>type;
	cin>>hours;
	cin>>numguest;
	calcPayment(type, hours, numguest,result);
	cout<<result;
}    
fahmi calcPayment(int t, int h, int n,&u)
{
	int u;
	int total;
	if(t==1){
		total= (h*300)+(n*50);
	}
	else if(t==2){
		total= (h*550)+(n*50);
	}
	else if(t==3){
		total= (h*750)+(n*50);
	}
	u = calcDiscount(total);
	return u;
}
fahmi calcDiscount(int r){
	double discount;
	if(r>5000){
		discount= r*0.80;
	}
	else{
		discount=r*0.9;
	}
	return(discount);
}

	
