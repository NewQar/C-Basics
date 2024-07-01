#include<iostream>
using namespace std;
int main()
  {
	char name[50], address[50], category, again='Y';
	int unit, countD=0, countC=0;
	double pay, totalelectricityD=0, totalelectricityC=0;
	
	do{
		cin.getline(name,50);
		cin.getline(address,50);
		cin>>category;
		cin>>unit;
		
		if(toupper(category)=='D'){
			if(unit<=200)
			 pay= unit*0.1;
		    else if(unit<=300)	
			pay= 20+ 0.12*(unit-200);
		 else
			pay= 32+0.09*(unit-300);
		
			totalelectricityD=pay;
			countD++;
		cout<<"Total pay : RM"<<totalelectricityD;	
		}
		else if(toupper(category)=='C'){
			if(unit<=200)
			 pay= unit*0.2;
		    else if(unit<=300)	
			pay= 40+ 0.22*(unit-200);
			else
			pay= 62+0.18*(unit-300);
			
			totalelectricityC=pay;
			countC++;
		cout<<"Total pay : RM"<<totalelectricityC;	
		}
		cout<<" Do you want to repeat again ? (Y/N) ";
		cin>>again;
           
   }while (again == 'Y' || again =='y');
   cout<<"\t\t\tTENAGA NASIONAL BERHAD"<<endl;
   cout<<"-------------------------------------------------"<<endl;
   cout<<"TOTAL NUMBER OF DOMESTIC (D) CUSTOMER(S): ";
}
