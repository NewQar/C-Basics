#include<iostream>
using namespace std;

int main()
{
	int input1, input2, common,total=0;
	
	cout<< "Enter number 1: ";
	cin>>input1;
	cout<< "Enter number 2: ";
	cin>>input2;
	cout<<"Common factors:";
	for(int i=1;i<input2;i++){
		if(input1%i==0 && input2%i==0){
		cout<<" "<<i<<",";
		total++;
		}
	}
	cout<<endl<<"Total common factor: "<<total;
}

