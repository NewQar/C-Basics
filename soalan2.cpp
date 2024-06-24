#include<iostream>
using namespace std;

student_info main()
{
	string name[2]={"HAMIDAH  BINTI ALI", "HIDAYAH BINTI ABU"} , matrics_number[2]={"B0191912244","B091913366"} ;
	int age[2]={22, 22} ;
	char phone_number[23]= "011-6778880012-7669977";
	
	cout<<"Data_1\t\t\t\t\t\t\t\tData_2"<<endl;
	cout<<"Name : "<<name[0]<<"\t\t\tName : "<<name[1]<<endl;
	cout<<"Matrix Number: "<<matrics_number[0]<<"\t\t\tMatrix Number :"<<matrics_number[1]<<endl;
	cout<<"Age : "<<age[0]<<"\t\t\t\t\tAge : "<<age[1]<<endl;
	cout<<"Phone Number : ";
	for(int i=0;i<11;i++){
	cout<<phone_number[i];
}
	cout<<"\t\t\tPhone Number : ";
	for(int i=11;i<22;i++){
	cout<<phone_number[i];
}
}
