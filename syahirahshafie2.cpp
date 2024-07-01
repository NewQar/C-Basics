#include<iostream>
using namespace std;
int main()
  {
	char again='Y';
	int unit, countD=0, countC=0, totalelectricityD=0, totalelectricityC=0;
	double totalD=0, totalC=0 , totalcollection;
	string name, address;
	
	do{
		char category='Q';
		double pay=0.00;
		cin>>name;
		cin>>address;
		cin>>category;
		cin>>unit;
		
		if(toupper(category)=='D'){
			if(unit<=200)
			 pay= unit*0.1;
		    else if(unit<=300)
			 pay= 20+ 0.12*(unit-200);
			else
			 pay= 20+36+0.09*(unit-300);
			totalD=pay;
			totalelectricityD=unit;
			countD++;
			cout<<"The bill amount: RM"<<totalD<<endl;
		}
		else if(toupper(category)=='C'); {
			if(unit<=200)
			 pay= unit*0.2;
		    else if(unit<=300)	
			pay= 40+ 0.22*(unit-200);
			else
			pay= 40+66+0.18*(unit-300);
			
			totalC=pay;
			totalelectricityC=unit;
			countC++;
		cout<<"The bill amount: RM"<<totalC<<endl;
		}
			      
		cout<<" Do you want to repeat again ? (Y/N) ";
		cin>>again;
           
   }while (again == 'Y' || again =='y');
        totalcollection=totalD+totalD;
   cout<<"\t\t\tTENAGA NASIONAL BERHAD"<<endl;
   cout<<"-------------------------------------------------"<<endl;
   cout<<"TOTAL NUMBER OF DOMESTIC (D) CUSTOMER(S):" <<countD<<endl;
   cout<<"TOTAL NUMBER OF COMMERCIAL(C) CUSTOMER(S):"<<countC<<endl;
   cout<<"TOTAL ELECTRICITY USED FOR DOMESTIC (D):"<<totalelectricityD<<"kWH"<<endl;
   cout<<"TOTAL ELECTRICITY USED FOR DOMESTIC (C):"<<totalelectricityC<<"kWH"<<endl;
   cout<<"\t\t\tTOTAL COLLECTION : RM"<<totalcollection<<endl;
   }
