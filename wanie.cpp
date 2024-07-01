#include <iostream>
#include <cmath>
#include<conio.h>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<cstdlib>
#include<iomanip>
//Name:
//Matrikid:
//Group:CS2301A
//Program Description:

using namespace std;
main ()
 {  
int nights, wan, choice;
string SWname[103], SFname[103], DWname[103], DFname[103], EWname[103], EFname[103];
	int t =100, night, yes, SW=0, SF=0, DW=0, DF=0, EW=0, EF=0;
	char room, view;
	float pricenight, price, gst, total,loop=2;
	string SWnumberfon[103], SFnumberfon[103], DWnumberfon[103], DFnumberfon[103], EWnumberfon[103], EFnumberfon[103];
	int SWnite[103], SFnite[103], DWnite[103], DFnite[103], EWnite[103], EFnite[103];

 //Roomtypes = SW SF DW DF EW EF
 //Prices = 
 
 system("color A0");
while (t<103){
		SWname[t]= SFname[t] = DWname[t] = DFname[t] = EWname[t] = EFname[t] = "Tiada";
		SWnumberfon[t]= SFnumberfon[t]= DWnumberfon[t]= DFnumberfon[t]= EWnumberfon[t]= EFnumberfon[t] = "0192038890";	
		SWnite[t]= SFnite[t]= DWnite[t]= DFnite[t]= EWnite[t]= EFnite[t]= 0;
	t++;
	}
cout<<"\n\t\t\t****************************";
cout<<"\n\t\t\t* HOTEL MANAGEMENT PROJECT *";
cout<<"\n\t\t\t****************************";
cout<<"\n\n\n\n\t\tMade By:";
cout<<" The Crazy Programmer";
cout<<"\n\n\n\n\n\t\t\t\tPress anything to continue";
getch();
system("cls");

while(loop!=0){
cout<<"\n\n\n\n\n\t\t\t\tPress anything to continue";
getch();
system("cls");

cout<<"\n\t\t\t\t-------------------------------";
cout<<"\n\t\t\t\t|  Welcome to Hotel Emisha    |";
cout<<"\n\t\t\t\t|         MAIN MENU  \t      |";
cout<<"\n\t\t\t\t|\t\t\t      |";
cout<<"\n\t\t\t\t|\t\t\t      |";
cout<<"\n\t\t\t\t| \t1. Book A Room        |";
cout<<"\n\t\t\t\t| \t2. Customer Records   |";
cout<<"\n\t\t\t\t| \t3. Rooms Allotted     |";
cout<<"\n\t\t\t\t| \t4. Exit               |";
cout<<"\n\t\t\t\t-------------------------------";
cout<<"\n\t\t\t\t|\t\t\t      |";
cout<<"\n\t\t\t\t| \tChoose choice         |";
cout<<"\n\t\t\t\t|\t\t\t      |";
cout<<"\n\t\t\t\t-------------------------------";
cin>>choice;
switch(choice){
	case(1):{
		int i=100;
	cout<<"What is your name?"<<endl;
	cin >> SWname[i];
	cout << "How many night want to stay? : ";
	cin >> night;
	//tambah mintak nombor fon user
	cout << "Select room type (S = Single, D = Double, E = Exclusive) : ";
	cin >> room;	
	cout << "Select view (W = Without facing the beach, F = Facing the beach) : ";
	cin >> view;
	
	if ( room == 'S' || room == 's')
	{
		if ( view == 'W' || view == 'w')
		{
			pricenight = 120.0;
			price = pricenight * night;
			gst = price * 0.06;
			total = price + gst;
			SW++;
		}
		else
		{
			pricenight = 180.0;
			price = pricenight * night;
			gst = price * 0.06;
			total = price + gst;
			SF++;
		}
	}
	if ( room == 'D' || room == 'd')
	{
		if ( view == 'W' || view == 'w')
		{
			pricenight = 230.0 ;
			price = pricenight * night;
			gst = price * 0.06 ;
			total = price + gst;
			DW++;
		}
		else
		{
			pricenight = 270.0 ;
			price = pricenight * night;
			gst = price * 0.06 ;
			total = price + gst;
			DF++;
		}
	}
	if ( room == 'E' || room == 'e')
	{
		if ( view == 'W' || view == 'w')
		{
			pricenight = 270.0 ;
			price = pricenight * night;
			gst = price * 0.06 ;
			total = price + gst;
			EW++;
		}
		else
		{
			pricenight = 320.0;
			price = pricenight * night;
			gst = price * 0.06 ;
			total = price + gst;
			EF++;
		}
	}
				if(SW>1||SF>1||DW>1||DF>1||EW>1||EF>1){
			cout<<"This room is full"<<endl;
			break;
		}
		
	cout <<"The price for 1 night is" << ":" << pricenight << endl ;
	cout <<"The price per night is"   << ":" << price << endl ;
	cout << "The GST 6% is"            << ":" << gst << endl ;
	cout << "The total price is"       << ":" << total << endl ;
break;
}
case(2): {
	int sw=100, sf=100, dw=100,df=100, ew=100, ef=100;
	cout<<"CUSTOMER RECORD:"<<endl;
	cout<<setw(10)<<"Name"<<" | "<<setw(10)<<"NO PHONE"<<" | "<<setw(10)<<"NIGHT"<<" | "<< "NO ROOM"<<endl;
	while (sw<103)
	{
		cout<<setw(10)<<SWname[sw]<<" | "<<setw(10)<<SWnumberfon[sw]<<" | "<<setw(10)<<SWnite[sw]<<" | "<<"SW"<<sw<<endl;
		sw++;
	}
	while (sf<103)
	{
		cout<<setw(10)<<SFname[sf]<<" | "<<setw(10)<<SFnumberfon[sf]<<" | "<<setw(10)<<SFnite[sf]<<" | "<<"SF"<<sf<<endl;
		sf++;	
	}
	while (dw<103)
	{
		cout<<setw(10)<<DWname[dw]<<" | "<<setw(10)<<DWnumberfon[dw]<<" | "<<setw(10)<<DWnite[dw]<<" | "<<"DW"<<dw<<endl;
		dw++;	
	}
	while (df<103)
	{
		cout<<setw(10)<<DFname[df]<<" | "<<setw(10)<<DFnumberfon[df]<<" | "<<setw(10)<<DFnite[df]<<" | "<<"DF"<<df<<endl;
		df++;	
	}
	while (ew<103)
	{
		cout<<setw(10)<<EWname[ew]<<" | "<<setw(10)<<EWnumberfon[ew]<<" | "<<setw(10)<<EWnite[ew]<<" | "<<"EW"<< ew<<endl;
		ew++;	
	}
	while (ef<103)
	{
		cout<<setw(10)<<EFname[ef]<<" | "<<setw(10)<<EFnumberfon[ef]<<" | "<<setw(10)<<EFnite[ef]<<" | "<<"EF"<<ef<<endl;
		ef++;	
	}
	cout<<"Type 0 to end program"<<endl;
	cin>>loop;
	break;
}
case(3):{
	int loop3=3, i;
	while(loop3!=0){
	
	cout<<"Enter what room do you want to know"<<endl;
	cin>>i;
	cout<<SWname[i]<<endl;
	cout<<SWnumberfon[i]<<endl;
	cout<<SWnite[i]<<endl;
	cin>>loop3;
}
	break;
}
case(4):{
	cout<<"habis";
	break;
}
	
cout<<"habis";
return 0;
}
}
	cout<<"Type 0 to end program"<<endl;
	cin>>loop;
}

