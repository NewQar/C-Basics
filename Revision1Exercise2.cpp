#include <iostream>
using namespace std;

void getNum(int& number){
	cin>>number;
}
int doubleNum(int& doubled){
	doubled *=2;
	return doubled;
}

main(){
	int num;
	cout<<"The number entered is: ";
	getNum(num);
	num = doubleNum(num);
	cout<<"That value doubled is "<<num;
}

