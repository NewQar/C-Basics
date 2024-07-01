#include <iostream>
#include <cmath>
#include <conio.h>
#include <cstdlib>
#include <iomanip>
#include <windows.h> 
/*
Name		:
Student ID	:
Group		:CS2301A
Description	:
*/

	void changeColor(int desiredColor){ 
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), desiredColor); 
	} 
using namespace std;
main ()
{
	int t=100, night, SW=100, SF=100, DW=100, DF=100, EW=100, EF=100, choice=5, roomnumber, i=9;	//t=100 because the number of room will start with '100'.
	char room='s', view;
	string name;
	float pricenight, price, gst, total, loop=1,loop2=1;	//loop=1 because the main menu of looping is until the user enter the 'exit' menu. When exited, loop=0 and looping will exit.

	// Declaration array. Array's size 103 because looping till 103.
	string SWname[103], SFname[103], DWname[103], DFname[103], EWname[103], EFname[103];
	string SWnumberfon[103], SFnumberfon[103], DWnumberfon[103], DFnumberfon[103], EWnumberfon[103], EFnumberfon[103];
	int SWnite[103], SFnite[103], DWnite[103], DFnite[103], EWnite[103], EFnite[103];	

	system("color 0B"); //<- The colour of the background
	//The function is filled into the array before everything is started
	while (t<103)
	{
		SWname[t]= SFname[t] = DWname[t] = DFname[t] = EWname[t] = EFname[t] = "Tiada";
		SWnumberfon[t]= SFnumberfon[t]= DWnumberfon[t]= DFnumberfon[t]= EWnumberfon[t]= EFnumberfon[t] = "0192038890";	
		SWnite[t]= SFnite[t]= DWnite[t]= DFnite[t]= EWnite[t]= EFnite[t]= 0;
		t++;
	}
	
	//First Page
	cout << "\n\t\t\t****************************";
	cout << "\n\t\t\t* HOTEL MANAGEMENT PROJECT *";
	cout << "\n\t\t\t****************************";
	cout << "\n\n\n\n\t\tMade By:";
	cout << "\n\t\tChairman - Sir Redzuan\n\t\tChief Officer Executive(CEO) - Sir Afifuddin\n\t\tDeputy Chief Officer Executive(D.CEO) - Madam Dee\n\t\tLans Corperal - Mr.Fahmi\n\t\tHead Programmer - Mr.Yusuf Al-Qardhawi";

	while(loop!=0)
	{
	cout << "\n\n\n\t\t\t\tPress anything to continue"; //To confirm every page
	getch();
	system("cls"); //Clear screen

	//Main menu screen
	cout << "\n\t\t\t\t--------------------------------";
	cout << "\n\t\t\t\t|    Welcome to Hotel Emisha   |";
	cout << "\n\t\t\t\t|          MAIN MENU           |";
	cout << "\n\t\t\t\t|------------------------------|";
	cout << "\n\t\t\t\t|Motto hotel:                  |";
	cout << "\n\t\t\t\t|~Moulding World Class Hotel~  |";
	cout << "\n\t\t\t\t|\t1. Book A Room         |";
	cout << "\n\t\t\t\t|\t2. Customer Records    |";
	cout << "\n\t\t\t\t|\t3. Rooms Allotted      |";
	cout << "\n\t\t\t\t|\t4. Exit                |";
	cout << "\n\t\t\t\t--------------------------------";
	cout << "\n\tChoose choice: ";
	cin >> choice;
	if(choice>4){
		cout<<"Wrong input, try again"<<endl;
		getch();
		}
	cout << endl;
	
	//Switch for menu choices
	switch(choice)
	{
		case(1):	// Price menu
		{
		cout << "\nSelect room type (S=Single, D=Double, E=Exclusive): ";
		cin >> room;
		while(room !='S'&&room != 'D'&& room != 'E'&&room != 's'&&room != 'd'&&room != 'e')
		{
			cout<< "\nOops wrong input";
			cout << "\nPlease re-enter";
			cout << "\nSelect room type (S=Single, D=Double, E=Exclusive): ";
			cin >> room;
		}
		
		cout << "Select view (W = Normal view, F = Beach view): ";
		cin >> view;
		cout <<endl;
		
		
			if ( room == 'S' || room == 's' )
			{
				if ( view == 'W' || view == 'w')
				{
					if(SW>102)	//Function when the room is full
				{
				cout << "We are sorry. The rooms are full. Please choose another" << endl;
				break;
				}
				else
				{
					cout << "Your name: ";
					getline (cin>>ws, SWname[SW]);	//Use function getline for special character such as space (Full name) 
					cout << "How many nights : ";
					cin >> night;
					SWnite[SW] = night;
					cout << "Your phone number: ";
					getline (cin>>ws, SWnumberfon[SW]);
					roomnumber=SW;
					name=SWname[SW];
					SW++;
					pricenight = 120.0;
				}
			}
				else
				{
					if(SF>102)	//Function when the room is full
				{
				cout << "We are sorry. The rooms are full. Please choose another" << endl;
				break;
				}
				else
				{
					cout << "Your name: ";
					getline (cin>>ws, SFname[SF]);
					cout << "How many nights : ";
					cin >> night;
					SFnite[SF]=night;
					cout << "Your phone number: ";
					getline (cin>>ws, SFnumberfon[SF]);
					roomnumber=SF;
					name=SFname[SF];
					SF++;
					pricenight = 180.0;
				}
			}
		}
			if ( room == 'D' || room == 'd')
			{
				if ( view == 'W' || view == 'w')
				{
					if(DW>102)	//Function when the room is full
			{
				cout << "We are sorry. The rooms are full. Please choose another" << endl;
				break;
				}
				else
				{
					cout << "Your name: ";
					getline (cin>>ws, DWname[DW]);
					cout << "How many nights? : ";
					cin >> night;
					DWnite[DW] = night;
					cout << "Your phone number: ";
					getline (cin>>ws, DWnumberfon[DW]);
					roomnumber=DW;
					name=DWname[DW];
					DW++;
					pricenight = 230.0 ;
				}
			}
				else
				{
					if(DF>102)	//Function when the room is full
			{
				cout << "We are sorry. The rooms are full. Please choose another" << endl;
				break;
				}
				else
				{
					cout << "What is your name?";
					getline (cin>>ws, DFname[DF]);
					cout << "How many nights : ";
					cin >> night;
					DFnite[DF] = night;
					cout << "Your phone number: ";
					getline (cin>>ws, DFnumberfon[DF]);
					roomnumber=DF;
					name=DFname[DF];
					DF++;
					pricenight = 270.0 ;
				}
			}
			}
			if ( room == 'E' || room == 'e')
			{
				if ( view == 'W' || view == 'w')
				{
					if(EW>102)	//Function when the room is full
			{
				cout << "We are sorry. The rooms are full. Please choose another" << endl;
				break;
				}
				else
				{
					pricenight = 270.0 ;
					cout << "Your name:";
					getline (cin>>ws, EWname[EW]);
					cout << "How many nights? : ";
					cin >> night;
					EWnite[EW] = night;
					cout << "Your phone number: ";
					getline (cin>>ws, EWnumberfon[EW]);
					roomnumber=EW;
					name=EWname[EW];
					EW++;
				}
			}
				else
				{
					if(EF>102)	//Function when the room is full
				{
				cout << "We are sorry. The rooms are full. Please choose another" << endl;
				break;
				}
				else
				{
					pricenight = 320.0;
					cout << "Your name: ";
					getline (cin>>ws, EFname[EF]);
					cout << "How many nights? : ";
					cin >> night;
					EFnite[EF] = night;
					cout << "Your phone number: ";
					getline (cin>>ws, EFnumberfon[EF]);
					roomnumber=EF;
					name=EFname[EF];
					EF++;
				}
			}
		}
				//The price of calculation
				price = pricenight * night;
				gst = price * 0.06 ;
				total = price + gst;
			
				room=toupper(room); //toupper function = lowercase to uppercase
				view=toupper(view);
			
				//setprecision is for 2 decimal places
				cout <<endl;
				cout << setprecision(2) << fixed << "Price per night: RM" << pricenight << endl;
				cout << "Price before GST: RM" << price << endl;
				cout << "GST 6% charge: RM" << gst << endl;
				cout << "The total price: RM" << total << endl;
				cout << "Welcome " << name << endl;
				cout << "Room Number: " << room << view << roomnumber << endl;
				break;
				}
			case(2):
			{
				
			int sw=100, sf=100, dw=100,df=100, ew=100, ef=100;
			cout << "CUSTOMER RECORD:" << endl;
			cout << setw(20) << "Name" << " | " << setw(20) << "NO PHONE" << " | " << setw(20) << "NIGHT" << " | " << "NO ROOM" << endl;
				while (sw<103)
				{
					cout << setw(20) << SWname[sw] << " | " << setw(20) << SWnumberfon[sw] << " | " << setw(20) << SWnite[sw] << " | " << "SW" << sw << endl;
					sw++;
				}
				while (sf<103)
				{
					cout << setw(20) << SFname[sf] << " | " << setw(20) << SFnumberfon[sf] << " | " << setw(20) << SFnite[sf] << " | " << "SF" << sf << endl;
					sf++;	
				}
				while (dw<103)
				{
					cout << setw(20) << DWname[dw] << " | " << setw(20) << DWnumberfon[dw] << " | " << setw(20) << DWnite[dw] << " | " << "DW" << dw << endl;
					dw++;	
				}
				while (df<103)
				{
					cout << setw(20) << DFname[df] << " | " << setw(20) << DFnumberfon[df] << " | " << setw(20) << DFnite[df] << " | " << "DF" << df << endl;
					df++;	
				}
				while (ew<103)
				{
					cout << setw(20) << EWname[ew] << " | " << setw(20) << EWnumberfon[ew] << " | " << setw(20) << EWnite[ew] << " | " << "EW" << ew << endl;
					ew++;	
				}
				while (ef<103)
				{
					cout << setw(20) << EFname[ef] << " | "  << setw(20) << EFnumberfon[ef] << " | " << setw(20) << EFnite[ef] << " | " << "EF" << ef << endl;
					ef++;
				}
				break;
			}
			case(3):
			{
				int sw=100, sf=100, dw=100,df=100, ew=100, ef=100;
			cout << "CUSTOMER RECORD:" << endl;
			cout << setw(20) << "Name" << " | " << setw(20) << "NO PHONE" << " | " << setw(20) << "NIGHT" << " | " << "NO ROOM" << endl;
				while (sw<103)
				{
					if(SW>sw){
					changeColor(12);//Green
				}
				else{
					changeColor(10);//Red
				}
					cout <<" | " << "SW" << sw;
					sw++;
				}
				while (sf<103)
				{
				if(SF>sf){
					changeColor(12);//Green
				}
				else{
					changeColor(10);//Red
				}
					cout << " | " << "SF" << sf;
					sf++;	
				}
				cout<<endl;
				while (dw<103)
				{
				if(SF>sf){
					changeColor(12);//Green
				}
				else{
					changeColor(10);//Red
				}
					cout << " | " << "DW" << dw;
					dw++;	
				}
				while (df<103)
				{
				if(SF>sf){
					changeColor(12);//Green
				}
				else{
					changeColor(10);//Red
				}
					cout << " | " << "DF" << df;
					df++;	
				}
				cout<<endl;
				while (ew<103)
				{
				if(SF>sf){
					changeColor(12);//Green
				}
				else{
					changeColor(10);//Red
				}
					cout << " | " << "EW" << ew;
					ew++;
				}
				while (ef<103)
				{
				if(SF>sf){
					changeColor(12);//Green
				}
				else{
					changeColor(10);//Red
				}
					cout << " | " << "EF" << ef;
					ef++;
				}
			changeColor(11);//Red
				break;
			}

			case(4):
			{
				break;
				}
				break;
			}
			}
		}
