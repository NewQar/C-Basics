#include <iostream>
using namespace std;

void doubleNum(int& refVar){
	refVar *= 2;
}

main(){
	int var=25;
	cout<<"In Main, the value is "<<var<<endl;
	cout<<"Now calling doubleNum...";
	doubleNum(var);
	cout<<"\nNow baack in Main, the value is: "<<var;
}

