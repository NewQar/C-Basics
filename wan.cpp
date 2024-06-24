#include <iostream>
#include <cmath>
#include<conio.h>
#include<cstdlib>
#include<iomanip>
//Name:
//Matrikid:
//Group:CS2301A
//Program Description:

using namespace std;
main (){  
	int t =100, night, SW=100, SF=100, DW=100, DF=100, EW=100, EF=100, choice,roomnumber; //t=100 kerana nombor bilik start dengan 100.
	char room, view;
	string name;
	float pricenight, price, gst, total,loop=1;//loop=1 kerana main menu looping sehingga user pilih exit. Apabila exit, loop=0 dan looping akan henti.

// Declaration array. Saiz array 103 kerana looping sampai 103. 
	string SWname[103], SFname[103], DWname[103], DFname[103], EWname[103], EFname[103];
	string SWnumberfon[103], SFnumberfon[103], DWnumberfon[103], DFnumberfon[103], EWnumberfon[103], EFnumberfon[103];
	int SWnite[103], SFnite[103], DWnite[103], DFnite[103], EWnite[103], EFnite[103];	

	system("color A0"); //<- Warna background
//Function untuk isi dalam array semua sebelum start
	while (t<103){
		SWname[t]= SFname[t] = DWname[t] = DFname[t] = EWname[t] = EFname[t] = "Tiada";
		SWnumberfon[t]= SFnumberfon[t]= DWnumberfon[t]= DFnumberfon[t]= EWnumberfon[t]= EFnumberfon[t] = "0192038890";	
		SWnite[t]= SFnite[t]= DWnite[t]= DFnite[t]= EWnite[t]= EFnite[t]= 0;
		t++;
	}
//First Page
cout<<"\n\t\t\t****************************";
cout<<"\n\t\t\t* HOTEL MANAGEMENT PROJECT *";
cout<<"\n\t\t\t****************************";
cout<<"\n\n\n\n\t\tMade By:";
cout<<"\n\t\tKetua - Abang Afif\n\t\tKetua - Kak Dee\n\t\tBig Boss - Abang Wan";

while(loop!=0){
cout<<"\n\n\n\n\n\t\t\t\tPress anything to continue"; //Untuk confirmation setiap page
getch();
system("cls"); // clear screen

//Main menu screen
	cout<<"\n\t\t\t\t-------------------------------------------------------";
	cout<<"\n\t\t\t\t|   Welcome to Hotel Emisha   |\t\t\t      |";
	cout<<"\n\t\t\t\t|         MAIN MENU  \t      |\t\t\t      |";
	cout<<"\n\t\t\t\t|-----------------------------|\t     Motto Hotel      |";
	cout<<"\n\t\t\t\t| \t1. Book A Room        |\t\t\t      |";
	cout<<"\n\t\t\t\t| \t2. Customer Records   |\t\t\t      |";
	cout<<"\n\t\t\t\t| \t3. Rooms Allotted     |------------------------";
	cout<<"\n\t\t\t\t| \t4. Exit               |";
	cout<<"\n\t\t\t\t-------------------------------";
	cout<<"\t  Choose choice: ";
	cin>>choice;
	cout<<endl;
	
//Switch for menu choices
	switch(choice){
		case(1):{
		// Price menu
		cout<<"\t\t\t\t----------------------------------------";
		cout<<"\n\t\t\t\t| \tThe Prices:                    |";
		cout<<"\n\t\t\t\t|\t     Normal view / Beach view  |";
		cout<<"\n\t\t\t\t|   Single:     RM 120   /   RM 180    |";
		cout<<"\n\t\t\t\t|   Double:     RM 230   /   RM 270    |";
		cout<<"\n\t\t\t\t|   Exclusive:  RM 270   /   RM 320    |";
		cout<<"\n\t\t\t\t----------------------------------------";		
		cout << "\nSelect room type (S=Single, D=Double, E=Exclusive) :";
		cin >> room;	
		cout << "Select view (W = Normal view, F = Beach view) :";
		cin >> view;
		cout<<endl;
			if(SW>102||SF>102||DW>102||DF>102||EW>102||EF>102){  //Function when room is full
				cout<<"We are sorry. The rooms are full. Please choose another"<<endl;
				break;
			}
			else{
			if ( room == 'S' || room == 's' ){
				if ( view == 'W' || view == 'w'){
					cout<<"Your name: ";
					getline(cin >> ws, SWname[SW]);//Guna function getline untuk special character seperti space(Nama penuh) 
					cout << "How many nights : ";
					cin >> night;
					SWnite[SW] = night;
					cout<<"Your phone number: ";
					getline(cin >> ws, SWnumberfon[SW]);
					roomnumber=SW;
					name=SWname[SW];
					SW++;
					pricenight = 120.0;
				}
				else{
					cout<<"Your name: ";
					getline(cin >> ws, SFname[SF]);
					cout << "How many nights : ";
					cin >> night;
					SFnite[SF] = night;
					cout<<"Your phone number: ";
					getline(cin >> ws, SFnumberfon[SF]);
					roomnumber=SF;
					name=SFname[SF];
					SF++;
					pricenight = 180.0;
				}
			}
			if ( room == 'D' || room == 'd'){
				if ( view == 'W' || view == 'w'){
					cout<<"Your name: ";
					getline(cin >> ws, DWname[DW]);
					cout << "How many nights? : ";
					cin >> night;
					DWnite[DW] = night;
					cout<<" Your phone number: ";
					getline(cin >> ws, DWnumberfon[DW]);
					roomnumber=DW;
					name=DWname[DW];
					DW++;
					pricenight = 230.0 ;
				}
				else{
					cout<<"What is your name?";
					getline(cin >> ws, DFname[DF]);
					cout << "How many nights : ";
					cin >> night;
					DFnite[DF] = night;
					cout<<"Your phone number: ";
					getline(cin >> ws, DFnumberfon[DF]);
					roomnumber=DF;
					name=DFname[DF];
					DF++;
					pricenight = 270.0 ;
				}
			}
			if ( room == 'E' || room == 'e'){
				if ( view == 'W' || view == 'w'){
					pricenight = 270.0 ;
					cout<<"Your name:";
					getline(cin >> ws, EWname[EW]);
					cout << "How many nights? : ";
					cin >> night;
					EWnite[EW] = night;
					cout<<"Your phone number: ";
					getline(cin >> ws, EWnumberfon[EW]);
					roomnumber=EW;
					name=EWname[EW];
					EW++;
				}
				else{
					pricenight = 320.0;
					cout<<"Your name: ";
					getline(cin >> ws, EFname[EF]);
					cout << "How many nights? : ";
					cin >> night;
					EFnite[EF] = night;
					cout<<"Your phone number: ";
					getline(cin >> ws, EFnumberfon[EF]);
					roomnumber=EF;
					name=EFname[EF];
					EF++;
				}
			}
			//Calculation harga
			price = pricenight * night;
			gst = price * 0.06 ;
			total = price + gst;	
			room=toupper(room); //toupper function = lowercase to uppercase
			view=toupper(view);
			//setprecision adalah untuk 2 decimal places
			cout<<setprecision(2)<<fixed<<"\nPrice per night: RM" <<pricenight<<" | "<<"Price before GST: RM"<< price<<" | "<<"GST 6% charge: RM" << gst<< endl ;
			cout<<"The total price: RM" <<total<<" | "<<"Welcome "<<name<<" to our Hotel. Your Room Number is "<<room<<view<<roomnumber<<endl;
			break;
			}
		}
		case(2):{
		int sw=100, sf=100, dw=100,df=100, ew=100, ef=100;
		cout<<"CUSTOMER RECORD:"<<endl;
		cout<<setw(20)<<"Name"<<" | "<<setw(20)<<"NO PHONE"<<" | "<<setw(20)<<"NIGHT"<<" | "<< "NO ROOM"<<endl;
			while (sw<103){
				cout<<setw(20)<<SWname[sw]<<" | "<<setw(20)<<SWnumberfon[sw]<<" | "<<setw(20)<<SWnite[sw]<<" | "<<"SW"<<sw<<endl;
				sw++;
			}
			while (sf<103){
				cout<<setw(20)<<SFname[sf]<<" | "<<setw(20)<<SFnumberfon[sf]<<" | "<<setw(20)<<SFnite[sf]<<" | "<<"SF"<<sf<<endl;
				sf++;	
			}
			while (dw<103){
				cout<<setw(20)<<DWname[dw]<<" | "<<setw(20)<<DWnumberfon[dw]<<" | "<<setw(20)<<DWnite[dw]<<" | "<<"DW"<<dw<<endl;
				dw++;	
			}
			while (df<103){
				cout<<setw(20)<<DFname[df]<<" | "<<setw(20)<<DFnumberfon[df]<<" | "<<setw(20)<<DFnite[df]<<" | "<<"DF"<<df<<endl;
				df++;	
			}
			while (ew<103){
				cout<<setw(20)<<EWname[ew]<<" | "<<setw(20)<<EWnumberfon[ew]<<" | "<<setw(20)<<EWnite[ew]<<" | "<<"EW"<< ew<<endl;
				ew++;	
			}
			while (ef<103){
				cout<<setw(20)<<EFname[ef]<<" | "<<setw(20)<<EFnumberfon[ef]<<" | "<<setw(20)<<EFnite[ef]<<" | "<<"EF"<<ef<<endl;
				ef++;	
			}
		break;
		}
		case(3):{
			break;
		}
		case(4):{
			cout<<"habis";
			loop=0;
			break;
		}
	}
}
}
