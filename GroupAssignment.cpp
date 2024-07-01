#include <iostream>
#include <cmath>
#include <conio.h>
#include <cstdlib>
#include <iomanip>
#include <windows.h>

/*
Name		:(1) MUHAMMAD 'AFIFUDDIN HUSAINI BIN MOHD NUI'IM
			 (2) SYED REDZUAN BIN SYED CHARLES
			 (3) YUSUF AL-QARADAWI BIN MOHD ZAKI
			 (4) NURDINI AISYA BINTI MD MAZMI
			 (5) EMYSHA DHAMIRA BINTI SHAMSUL AZLI
			 (6) FAHMI ZIKRI BIN MOHAMED RAPI
Student ID	:(1) 2021600888
			 (2) 2021855552
			 (3) 2021488972
			 (4) 2021816964
			 (5) 2021494366
			 (6) 2021839438
Group		:CS2301A
Description	:This program is written to alculate and display the price that should be paid by 
			the customer when the customer input some details such as the  type of the rooms 
			and customers can choose whether the rooms are facing the beach or not. Rather than
			that, this program is created to  display the rooms allocated that have been booked 
			by the customers. Hence, this can make the next customer book the room easily. 
			The information that has been displayed by this program is the customer's name, 
			phone number, the number of nights he/she stayed and the room number.

*/

void changeColor(int desiredColor)
{ 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), desiredColor); 
}
using namespace std;
main ()

{
	int t=100, night=0, SW=100, SF=100, DW=100, DF=100, EW=100, EF=100, choice=5, roomnumber=0;	//t=100 because the number of room will start with '100'.
	char room='s', view;
	string name;
	float loop=1,loop2=1;	//loop=1 because the main menu of looping is until the user enter the 'exit' menu. When exited, loop=0 and looping will exit.

	// Declaration array. Array's size 103 because looping till 103.
	string SWname[103], SFname[103], DWname[103], DFname[103], EWname[103], EFname[103];
	string SWnumberfon[103], SFnumberfon[103], DWnumberfon[103], DFnumberfon[103], EWnumberfon[103], EFnumberfon[103];
	int SWnite[103], SFnite[103], DWnite[103], DFnite[103], EWnite[103], EFnite[103];	

	system("color 0B"); //<- The colour of the background
	//The function is filled into the array before everything is started
	while (t<103)
	{
		SWname[t]= SFname[t] = DWname[t] = DFname[t] = EWname[t] = EFname[t] = "-";
		SWnumberfon[t]= SFnumberfon[t]= DWnumberfon[t]= DFnumberfon[t]= EWnumberfon[t]= EFnumberfon[t] = "-";	
		SWnite[t]= SFnite[t]= DWnite[t]= DFnite[t]= EWnite[t]= EFnite[t]= 0;
		t++;
	}
	
	//First Page
	cout << "\n\t\t\t****************************";
	cout << "\n\t\t\t* HOTEL MANAGEMENT PROJECT *";
	cout << "\n\t\t\t****************************";
	cout << "\n\n\n\n\t\tMade By:";
	cout << "\n\t\t\n\t\t(1) Afifuddin\n\t\t(2) Syed Redzuan\n\t\t(3) Yusuf Al-Qardhawi";
	cout << "\n\t\t(4) Nurdini Aisya\n\t\t(5) Emysha Dhamirah\n\t\t(6) Fahmi Zikri";
	
	while(loop!=0)
	{
	float pricenight, price=0.00, gst, total=0.00;
	cout << "\n\n\n\t\t\tPress anything to continue..."; //To confirm every page
	getch();
	system("cls"); //Clear screen

	//Main menu screen
	cout << "\n\t\t\t\t ------------------------------";
	cout << "\n\t\t\t\t|    Welcome to Hotel Emisha   |";
	cout << "\n\t\t\t\t|          MAIN MENU           |";
	cout << "\n\t\t\t\t|------------------------------|";
	cout << "\n\t\t\t\t|Motto hotel:                  |";
	cout << "\n\t\t\t\t|~Moulding World Class Hotel~  |";
	cout << "\n\t\t\t\t|\t1. Book A Room         |";
	cout << "\n\t\t\t\t|\t2. Customer Records    |";
	cout << "\n\t\t\t\t|\t3. Rooms Allotted      |";
	cout << "\n\t\t\t\t|\t4. Exit                |";
	cout << "\n\t\t\t\t ------------------------------";
	while (cout << "\n\tChoose choice: " && !(cin >> choice))
	{
    std::cin.clear(); //clear bad input flag
    std::cin.ignore(1000, '\n'); //discard input
    std::cout << "Invalid input; please re-enter.\n";
	}
	
	if(choice>4)
	{
		cout<<"Wrong input, try again"<<endl;
		getch();
	}
	cout << endl;
	
	//Switch for menu choices
	switch(choice)
	{
		case(1):	// Price menu
		{
		
		system("cls");
		cout<<"\t\t\t\t ---------------------------------------";
		cout<<"\n\t\t\t\t|\tThe Prices:                     |";
		cout<<"\n\t\t\t\t|\t      Normal view | Beach view  |";
		cout<<"\n\t\t\t\t|   Single   :   RM 120   |   RM 180    |";
		cout<<"\n\t\t\t\t|   Double   :   RM 230   |   RM 270    |";
		cout<<"\n\t\t\t\t|   Exclusive:   RM 270   |   RM 320    |";
		cout<<"\n\t\t\t\t ---------------------------------------";		
		cout << "\n\nSelect room type (S=Single, D=Double, E=Exclusive): ";
		cin >> room;
		
		while(room !='S'&& room !='s' && room!='D' && room!='d' && room!='E'&& room!='e')
		{
			cout << "Wrong input."<<endl;
			cout << "Enter the right room please: ";
			cin >> room;
			cout << endl;
		}
		
		cout << "Select view (W = Normal view, F = Beach view): ";
		cin >> view;
		
		while(view !='W'&& view !='w' && view!='F' && view!='f')
		{
			cout << "Wrong input." << endl;
			cout << "Enter the right view please: ";
			cin >> view;
			cout << endl;	
		}
		
		cout <<"-------------------------------------------------------" << endl;
		
			if ( room == 'S' || room == 's' )
			{
				
				if ( view == 'W' || view == 'w')
				{
					
					while(SWnite[SW]>0)		//Function if the room is already booked in the customer menu records for manually booking
					{
						SW++;
					}
					
					if(SW>102)	//Function when the room is full
					{
						cout << "We are sorry. The rooms are full. Please choose another" << endl;
						break;
					}
					
					else
					{
						cout << "Your name: ";
						getline (cin>>ws, SWname[SW]);	//Use function getline for special character such as space (Full name)
						 
						while (cout << "How many nights : " && !(cin >>night)) 
						{
    						cin.clear(); //clear bad input flag
    						cin.ignore(1000, '\n'); //discard input
    						cout << "Invalid input. Please enter a number: ";
						}
						
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
						
						while(SFnite[SF]>0)
						{
						SF++;
						}
						
					if(SF>102)	//Function when the room is full
					{
						cout << "We are sorry. The rooms are full. Please choose another" << endl;
						break;
					}
					
						else
						{	
							cout << "Your name: ";
							getline (cin>>ws, SFname[SF]);
						
							while (cout << "How many nights : " && !(cin >>night))
							{
    							cin.clear(); //clear bad input flag
    							cin.ignore(1000, '\n'); //discard input
    							cout << "Invalid input. Please enter a number: ";
    						}
    					
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
						while(DWnite[DW]>0)
						{
							DW++;
						}
						
					if(DW>102)	//Function when the room is full
					{
						cout << "We are sorry. The rooms are full. Please choose another" << endl;
						break;
					}
					
						else
						{
							cout << "Your name: ";
							getline (cin>>ws, DWname[DW]);
						
						while (cout << "How many nights : " && !(cin >>night))
						{
    					cin.clear(); //clear bad input flag
    							cin.ignore(1000, '\n'); //discard input
    						cout << "Invalid input. Please enter a number: ";
    					}
    					
						DWnite[DW] = night;
						cout << "Your phone number: ";
						getline (cin>>ws, DWnumberfon[DW]);
						roomnumber=DW;
						name=DWname[DW];
						DW++;
						pricenight = 230.0;
						}
					}
					
				else
				{
					while(DFnite[DF]>0)
					{
						DF++;
					}
					
				if(DF>102)	//Function when the room is full
				{
					cout << "We are sorry. The rooms are full. Please choose another" << endl;
					break;
				}
				
				else
				{
					cout << "Your name: ";
					getline (cin>>ws, DFname[DF]);
					
					while (cout << "How many nights : " && !(cin >>night))
					{
    					cin.clear(); //clear bad input flag
    					cin.ignore(1000, '\n'); //discard input
    					cout << "Invalid input. Please enter a number: ";
    				}
    				
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
					while(EWnite[EW]>0){
						EW++;
					}
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
					while (cout << "How many nights : " && !(cin >>night)) {
    					cin.clear(); //clear bad input flag
    					cin.ignore(1000, '\n'); //discard input
    					cout << "Invalid input. Please enter a number: ";
    				}
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
					while(EFnite[EF]>0){
						EF++;
					}
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
					while (cout << "How many nights : " && !(cin >>night)) {
    					cin.clear(); //clear bad input flag
    					cin.ignore(1000, '\n'); //discard input
    					cout << "Invalid input. Please enter a number: ";
    				}
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
				cout <<"-------------------------------------------------------"<<endl;
				cout << setprecision(2) << fixed << "Price per night: RM" << pricenight << endl;
				cout << "Price before GST: RM" << price << endl;
				cout << "GST 6% charge: RM" << gst << endl;
				cout << "The total price: RM" << total << endl;
				cout << "Welcome " << name << endl;
				cout << "Room Number: " << room << view << roomnumber << endl;
				cout <<"-------------------------------------------------------"<<endl;
				break;
				}
			case(2):
			{
			int loop5=1,loop6=1;
			while(loop5==1){
				system("cls");
			int sw=100, sf=100, dw=100,df=100, ew=100, ef=100;
			string deci,rom,rom2;
			char check1,check2;
			
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
				cout<<"\nEnter (M) to modify, (D) to delete a record, (E) to exit to main menu: ";
				cin>>deci;
				while(deci!="M"&&deci!="m"&&deci!="D"&&deci!="d"&&deci!="E"&&deci!="e"){
						cout<<"Wrong input, Enter the right code please:";
						cin>>deci;
				}
				if(deci=="M"||deci=="m")
				{
					cout<<"\nRoom Number: ";
					cin>>rom;
					check1= rom[0];
					check2=rom[1];
					check1=toupper(check1);
					check2=toupper(check2);
					rom2= rom.substr(2,3);
					int rom3 = atoi(rom2.c_str());
				while(check1!='S'&&check1!='D'&&check1!='E'&&check2!='W'&&check2!='F'||rom3>102||rom3<100){
						cout<<"Wrong input, please enter the right room number:";
						cin>>rom;
						cout<<endl;
					check1= rom[0];
					check2=rom[1];
					check1=toupper(check1);
					check2=toupper(check2);
					rom2= rom.substr(2,3);
					rom3 = atoi(rom2.c_str());
			}
			if ( check1 == 'S')
			{
				if ( check2 == 'W')
				{
					cout << "Name: ";
					getline (cin>>ws, SWname[rom3]);	//Use function getline for special character such as space (Full name) 
					while (cout << "Nights : " && !(cin >>SWnite[rom3])) {
    					cin.clear(); //clear bad input flag
    					cin.ignore(1000, '\n'); //discard input
    					cout << "Invalid input. Please enter a number: ";
					}
					cout << "Phone number: ";
					getline (cin>>ws, SWnumberfon[rom3]);
			}
				else
				{
					cout << "Name: ";
					getline (cin>>ws, SFname[rom3]);
					while (cout << "Nights : " && !(cin >>SFnite[rom3])) {
    					cin.clear(); //clear bad input flag
    					cin.ignore(1000, '\n'); //discard input
    					cout << "Invalid input. Please enter a number: ";
					}
					cout << "Phone number: ";
					getline (cin>>ws, SFnumberfon[rom3]);
			}
		}
			if (check1 == 'D')
			{
				if ( check2 == 'W')
				{
					cout << "Name: ";
					getline (cin>>ws, DWname[rom3]);
					while (cout << "Nights : " && !(cin >>DWnite[rom3])) {
    					cin.clear(); //clear bad input flag
    					cin.ignore(1000, '\n'); //discard input
    					cout << "Invalid input. Please enter a number: ";
					}
					cout << "Phone number: ";
					getline (cin>>ws, DWnumberfon[rom3]);
			}
				else
				{
					cout << "Name: ";
					getline (cin>>ws, DFname[rom3]);
					while (cout << "Nights : " && !(cin >>DFnite[rom3])) {
    					cin.clear(); //clear bad input flag
    					cin.ignore(1000, '\n'); //discard input
    					cout << "Invalid input. Please enter a number: ";
					}
					cout << "Phone number: ";
					getline (cin>>ws, DFnumberfon[rom3]);
				}
			}
			if ( check1=='E')
			{
				if ( check2=='W')
				{
					cout << "Name: ";
					getline (cin>>ws, EWname[rom3]);
					while (cout << "Nights : " && !(cin >>EWnite[rom3])) {
    					cin.clear(); //clear bad input flag
    					cin.ignore(1000, '\n'); //discard input
    					cout << "Invalid input. Please enter a number: ";
					}
					cout << "Phone number: ";
					getline (cin>>ws, EWnumberfon[rom3]);
				}
				else
				{
					cout << "Name: ";
					getline (cin>>ws, EFname[rom3]);
					while (cout << "Nights : " && !(cin >>EFnite[rom3])) {
    					cin.clear(); //clear bad input flag
    					cin.ignore(1000, '\n'); //discard input
    					cout << "Invalid input. Please enter a number: ";
					}
					cout << "Phone number: ";
					getline (cin>>ws, EFnumberfon[rom3]);
				}
			}
		}
				if(deci=="D"||deci=="d"){
					cout<<"\nRoom Number: ";
					cin>>rom;
					check1= rom[0];
					check2=rom[1];
					check1=toupper(check1);
					check2=toupper(check2);
					rom2= rom.substr(2,3);
					int rom3 = atoi(rom2.c_str());
				while(check1!='S'&&check1!='D'&&check1!='E'&&check2!='W'&&check2!='F'||rom3>102||rom3<100){
						cout<<"Wrong input, please enter the right room number:";
						cin>>rom;
						cout<<endl;
					check1= rom[0];
					check2=rom[1];
					check1=toupper(check1);
					check2=toupper(check2);
					rom2= rom.substr(2,3);
					rom3 = atoi(rom2.c_str());
				}
				if ( check1 == 'S')
			{
				if ( check2 == 'W')
				{
					SWname[rom3]="-";
					SWnite[rom3]=0;
					SWnumberfon[rom3]="-";
			}
				else
				{
					SFname[rom3]="-";
					SFnite[rom3]=0;
					SFnumberfon[rom3]="-";
			}
		}
			if ( check1 == 'D')
			{
				if ( check2 == 'W')
				{
					DWname[rom3]="-";
					DWnite[rom3]=0;
					DWnumberfon[rom3]="-";
			}
				else
				{
					DFname[rom3]="-";
					DFnite[rom3]=0;
					DFnumberfon[rom3]="-";
			}
			}
			if ( check1=='E')
			{
				if ( check2=='W')
				{
					EWname[rom3]="-";
					EWnite[rom3]=0;
					EWnumberfon[rom3]="-";
				}
				else
				{
					EFname[rom3]="-";
					EFnite[rom3]=0;
					EFnumberfon[rom3]="-";
				}
			}
			}
				if(deci=="E"||deci=="e"){
				loop5=0;
				}
			}
			break;
			}
			case(3):
			{
				int sw=100, sf=100, dw=100,df=100, ew=100, ef=100;
			cout << "Rooms allocated: \n" << endl;
				while (sw<103)
				{
					if(SWnite[sw]>0){
					changeColor(12);//Red
				}
				else{
					changeColor(10);//Green
				}
					cout <<" | " << "SW" << sw;
					sw++;
				}
				while (sf<103)
				{
				if(SFnite[sf]>0){
					changeColor(12);
				}
				else{
					changeColor(10);
				}
					cout << " | " << "SF" << sf;
					sf++;	
				}
				cout<<endl;
				while (dw<103)
				{
				if(DWnite[dw]>0){
					changeColor(12);
				}
				else{
					changeColor(10);
				}
					cout << " | " << "DW" << dw;
					dw++;	
				}
				while (df<103)
				{
				if(DFnite[df]>0){
					changeColor(12);
				}
				else{
					changeColor(10);
				}
					cout << " | " << "DF" << df;
					df++;	
				}
				cout<<endl;
				while (ew<103)
				{
				if(EWnite[ew]>0){
					changeColor(12);
				}
				else{
					changeColor(10);
				}
					cout << " | " << "EW" << ew;
					ew++;
				}
				while (ef<103)
				{
				if(EFnite[ef]>0){
					changeColor(12);
				}
				else{
					changeColor(10);
				}
					cout << " | " << "EF" << ef;
					ef++;
				}
			changeColor(10);
			cout<<"\n\nGreen";
			changeColor(11);
			cout<<" - Available"<<endl;
			changeColor(12);
			cout<<"Red";
			changeColor(11);
			cout<<" - Unavailable"<<endl;
				break;
			}

			case(4):
			{
				loop=0;
				}
				break;
			}
	}
}
