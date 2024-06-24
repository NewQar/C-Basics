#include <iostream>
using namespace std;

void findGrade(float d){
	if(d>=80){
		cout<<"\nGrade = A";
	}
		if(d<80&&d>=70){
		cout<<"\nGrade = B";
	}
			if(d<70&&d>=50){
		cout<<"\nGrade = C";
	}
	else{
		cout<<"\nGrade = D";
	}
}

double findAverage(double a, double b, double c){
	double ave =(a+b+c)/3;
	return ave;
}


main(){
	string end="Y";
	while(end=="Y"){
	string Name;
	double test1, test2, test3;
	cout<<"\nStudent's Name: ";
	cin>>Name;
	cout<<"Test 1 mark: ";
	cin>>test1;
	cout<<"Test 2 mark: ";
	cin>>test2;
	cout<<"Test 3 mark: ";
	cin>>test3;
	double aver=findAverage(test1,test2,test3);
	cout<<"\n\n Student Result: \n\nStudent Name: "<<Name<<"\nAverage Marks: "<<aver;
	findGrade(aver);
	cout<<"\n\n(Y/N)";
	cin>>end;

}
}
	
