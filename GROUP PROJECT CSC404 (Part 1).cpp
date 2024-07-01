#include <iostream>
#include <windows.h>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

const int maxrow=20;

string ItemName[maxrow]={};
string DateOfPurch[maxrow]={};

void OpenFile()
{
	string line;
	ifstream myfile("dataItem.txt");
	if (myfile.is_open())
	{
		int x=0; 
		while (getline(myfile,line))
		{
			int l = line.length();
			ItemName[x] = line.substr(0, 3);
			DateOfPurch[x] = line.substr(4, 1-4);
			x++;
		}
	}
	else
	{
		cout<<"Unable to open the file!"<<endl;
	}
	
}
void AddItem()
{
	system("cls");
	int total;
	char name[20];
	char date[10];
	
	cout<<"Total Items : ";
	cin>>total;
	
	for(int a=0; a<total; a++)
	{
		cin.ignore();
		cout<<"Item No- "<<a+1<<endl;
		cout<<"Item Name\t\t: ";
	    cin.getline(name,20);
	    cout<<"Date of Purchase\t: ";
	    cin.getline(date,10);	
	}
	
	
	for (int x=0; x<maxrow; x++) //to check the array is empty or not 
	{
		if(ItemName[x]=="\0")
		{
			ItemName[x]=name;
			DateOfPurch[x]=date;
			
			break;
			
		}
	}
}

void DisplayItem() //display all the availability items
{
	system("cls");
	cout<<"+=======================================+"<<endl;
	cout<<"             AVAILABILITY               +"<<endl;
	cout<<"+=======================================+"<<endl;
	
	int counter=0;
	cout<<"No.  |    NAME     |  DATE OF PURCHASE "<<endl<<"----------------------------------------\n";
	for (int x=0; x<maxrow; x++)
	{
		if(ItemName[x]!="\0")//check if array has empty value or not
		{
			counter++;
			cout<<"  "<<counter<<"       ";
			cout<<setw(18)<<left<<ItemName[x]<<right<<DateOfPurch[x]<<endl;

		}
	}
	
	if (counter==0)
	{
		cout<<"No Record found!"<<endl;
	}
	cout<<"========================================"<<endl;
}

void SearchItem(string search) //search item by item name
{
	system("cls");
	
	cout<<"======================================="<<endl;
	cout<<"No.  |    NAME     |  DATE OF PURCHASE "<<endl<<"----------------------------------------\n";
	int counter = 0;
	for( int x=0; x<maxrow; x++)
	{
		if(ItemName[x]==search)
		{
			counter++;
			cout<<"  "<<counter<<"       ";
			cout<<setw(18)<<left<<ItemName[x]<<right<<DateOfPurch[x]<<endl;
			break;
		}
	}
	if(counter==0)
	{
		cout<<"No Record found!"<<endl;
	}
	
	cout<<"======================================="<<endl;
}

void UpdateItem(string search) //update item by item name
{
	char nameUp[20];
	char dateUp[10];
	
	int counter =0;
	for(int x=0; x<maxrow; x++)
	{
		if (ItemName[x]== search)
		{
			counter++;
			cout<<"Item Name. ";
			cin.getline(nameUp, 20);
			
			ItemName[x]=nameUp;
			
			cout<<"Update Successfull!"<<endl;
			break;
		}
	}
	
	if(counter==0)
	{
		cout<<"Item Name does not exist! "<<endl;
	}
}

void DeleteItem (string search)
{
	int counter=0;
	for( int x=0; x<maxrow; x++)
	{
		if(ItemName[x]==search)
		{
			counter++;
			
			ItemName[x] = "";
			DateOfPurch[x] = "";
			
			cout<<"Successfully Deleted!"<<endl;
			break;
		}
	}
	
	if(counter==0)
	{
		cout<<"No Record found!"<<endl;
	}
}

void SaveToFile()
{
	ofstream myfile;
	myfile.open("dataItem.txt");
	
	for(int x=0; x<maxrow; x++)
	{
		if (ItemName[x] == "\0")
		{
			break;
		}
		else
		{
			myfile<<ItemName[x] + "," + DateOfPurch[x]<<endl;
		}
	}
 } 
int main()
{
	std::cout<<"MENU\n";
	string itemname;
	int option;
	system("cls");
	OpenFile();
	
	do{
		cout<<"(1)- Add Items"<<endl;
		cout<<"(2)- Update Items"<<endl;
		cout<<"(3)- Delete Items"<<endl;
		cout<<"(4)- Search Items"<<endl;
		cout<<"(5)- Display all items"<<endl;
		cout<<"(6)- Exit and Save to Textfile"<<endl;
		cout<<"======================================="<<endl;
	cout<<"Select option ";
	cin>>option;
	
	switch (option)
	{
	case 1: AddItem(); 
	    system("cls");
		break;
	
	case 2: 
	    cin.ignore();
	    cout<<"Search by Item Name >>";
	    getline(cin, itemname);
	    UpdateItem(itemname); 
	    system("cls");
		break;
		
	case 3 : 
	    cin.ignore();
	    cout<<"Delete by Item Name >>";
	    getline(cin, itemname);
	    DeleteItem(itemname); 
	    cin.ignore();
	    system("cls");
		break;
	
	case 4: 
	    cin.ignore();
	    cout<<"Search by Item Name >>";
	    getline(cin, itemname);
	    SearchItem(itemname);
		break;
		
	case 5: DisplayItem();
		break;
		
	}
	} while (option!=6);
	
	SaveToFile();
	cout<<"Exit... Saving to file!"<<endl;
	return 0;
	
}
