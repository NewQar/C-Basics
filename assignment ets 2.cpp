/*
PROGRAM TITLE : ETS TICKETING SYSTEM
DATE : 12/7/2023
TEAMMATES : 1. AMIRATUN ADAWIYAH 2. ANIS ADILAH 3. NURUL ALIYAH
PREPARED FOR : MADAM ZALIKHA ZULKIFLI
*/

#include <iostream>
#include <cstring>
using namespace std;

void onlinebank(int);
void ewallet(int);
string timereceipt(int);

int main ()
{
	
	int numPax, paymet,day,month,year;
	char originPlace[50];
	char destinationPlace[50];
	float time;
	char seat;
	char pTakaful, tCategorie ;
	float price;
	
	cout<<"Welcome to ETS Booking Ticket!!! "<<endl;
	
	cout <<"Enter date (day): ";
	cin >>day;
	cout <<"Enter month : ";
	cin >>month;
	cout <<"Enter year: ";
	cin >>year;
	cout <<endl;
	cout<<"Entered Date:"<<day<<"/"<<month<<"/"<<year;
	cout <<endl;
	
	cout<<"Enter number of pax: ";
	cin>>numPax;
	cout<<endl;
	
	// string originPlace;
	
	cout<<"Enter your origin place: ";      
	// cin>>originPlace;
	//	getline(cin,originPlace);
	cin.get(originPlace,50);
	cout<<endl;
	
	// string destinationPlace;
	
	cout<<"Enter your destination place: ";      
	// cin>>destinationPlace;
	// getline(cin,destinationPlace);
	cin.getline(destinationPlace,50);
	
	string timedomain[] =
	{
		"05:47 - 07:51",
		"08:58 - 11:00",
		"12:38 - 14:40",
		"16:06 - 08:08",
		"19:11 - 21:13"
	};
	
	cout<<"\n1. 05:47 - 07:51   2. 08:58 - 11:00   3. 12:38 - 14:40 \n4. 16:06 - 18:08   5. 19:11 - 21:13"<<endl;
	cout<<"Please choose your time : ";
	cin>>time;
	
	cout << "\nDo you want a seat beside the window? (Y- Window | N- Aisle): ";
	cin >> seat;
	
    cout <<"\nA-Categorie Type : Adult";
	cout <<"\nB-Categorie Type : Child";
	cout <<endl;
	
	cout <<"Please enter your categorie type:  ";
	cin >> tCategorie;
	
	cout <<"Do you want to purchase takaful (Y-Yes | N-No):  ";
	cin >>pTakaful;
	

    if(tCategorie == 'A' || tCategorie == 'a')
    {
        if(pTakaful == 'Y' || pTakaful == 'y')
        {
            price = numPax * 28.00 + 1.50;
        }
        
        else
        {
            price = numPax * 28.00;
        }
        cout<<"The total price: RM "<<price;
    }
    
    else if(tCategorie == 'B' || tCategorie == 'b')
    {
        if(pTakaful == 'Y' || pTakaful == 'y')
        {
            price = numPax * 18.00 + 1.50;
        }
        
        else
        {
            price = numPax * 18.00;
        }
        cout<<"The total price: RM "<<price;
    }
    
    else
    cout<<"Invalid type of categorie or categorie code!";
    
		
	cout<<"\n1. Online banking "<<endl;
	cout<<"2. E-wallet "<<endl;
	cout<<"Select payment method : ";
	cin>>paymet;
	cout<<endl;
	
	if(paymet == 1)
	{
		onlinebank(paymet);
	}
	else if(paymet == 2)
	{
		ewallet(paymet);
	}
	else
	{
		cout<<"Invalid payment method";
	}

	cout<<endl;
	cout<<"\n---------RECEIPT----------"<<endl;
	cout<<"ORIGIN PLACE : "<<originPlace<<endl;
	cout<<"DESTINATION PLACE : "<<destinationPlace<<endl;
	cout<<"Date: "<<day<<"/"<<month<<"/"<<year<<endl;
	cout<<"TIME : "<<timereceipt(time)<<endl;
	cout<<"NUM OF PAX : "<<numPax<<endl;
	cout<<"SEAT : ";
	if(seat == 'Y' || seat == 'y')
    {
    	cout << "Window" << endl;
    }
    
    else if(seat == 'N' || seat == 'n')
    {
        cout << "Aisle" << endl;
	}
    
    else
    {
    	cout<<"Invalid type of categorie or categorie code!";
    	return 1;
	}
	
	cout<<"TAKAFUL : ";
	if(pTakaful == 'Y' || pTakaful == 'y')
	{
		cout<<"YES";
	}
	else if(pTakaful == 'N'|| pTakaful == 'n')
	{
		cout<<"NO";
	}	
	else
	{
		"Invalid Takaful selection";
		return 1;
	}

	cout<<"\nTOTAL PRICE : "<<price<<endl;
	cout<<"\nSUCCESFULLY BOOKED";
	
	
	return 0;
	
}

void onlinebank(int pm)
{
	char bank[50];
	
	cout<<"Select your bank : ";
	cin>>bank;
	cin.getline(bank,50);
	cout<<"\nMake your payment"<<endl;
	cout<<"************"<<endl;
	cout<<"\nDONE PAYMENT";
	
}

void ewallet(int pm)
{
	cout<<"Make your payment"<<endl;
	cout<<"************"<<endl;
	cout<<"\nDONE PAYMENT";
}

string timereceipt(int time)
{
	string timedomain[] =
	{
		"05:47 - 07:51",
		"08:58 - 11:00",
		"12:38 - 14:40",
		"16:06 - 08:08",
		"19:11 - 21:13"
	};
	
	if(time >= 1 && time <= 5)
	{
		return timedomain[time-1]; 
	}	
	else
	{
	return "Invalid time";
	}

}
