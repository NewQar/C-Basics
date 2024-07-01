/*
Name		:(1) EMYSHA DHAMIRA BINTI SHAMSUL AZLI
             (2) FAHMI ZIKRI BIN MOHAMED RAPI
             (3) MUHAMMAD AIMAN BIN NOOR EFFENDY
             (4) SYED REDZUAN BIN SYED CHARLES
Student ID	:(1) 2021494366
             (2) 2021839438
             (3) 2021467886
             (4) 2021855552
*/

//Headers that we include in this program
#include <ios>
#include <cmath>
#include <dos.h>
#include <string>
#include <time.h>
#include <conio.h>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <windows.h>
#include <bits/stdc++.h>

using namespace std;

char d0[5][3] = {178, 178, 178,
				 178, ' ', 178,
				 178, ' ', 178,
				 178, ' ', 178,
				 178, 178, 178};

char d1[5][3] = {' ', ' ', 178,
				 ' ', ' ', 178,
				 ' ', ' ', 178,
				 ' ', ' ', 178,
				 ' ', ' ', 178};
				 
char d2[5][3] = {178, 178, 178,
				 ' ', ' ', 178,
				 178, 178, 178,
				 178, ' ', ' ',
				 178, 178, 178};
				 
char d3[5][3] = {178, 178, 178,
				 ' ', ' ', 178,
				 178, 178, 178,
				 ' ', ' ', 178,
				 178, 178, 178};
				 
char d4[5][3] = {178, ' ', 178,
				 178, ' ', 178,
				 178, 178, 178,
				 ' ', ' ', 178,
				 ' ', ' ', 178};
				 
char d5[5][3] = {178, 178, 178,
				 178, ' ', ' ',
				 178, 178, 178,
				 ' ', ' ', 178,
				 178, 178, 178};				 				 				 

char d6[5][3] = {178, 178, 178,
				 178, ' ', ' ',
				 178, 178, 178,
				 178, ' ', 178,
				 178, 178, 178};

char d7[5][3] = {178, 178, 178,
				 ' ', ' ', 178,
				 ' ', ' ', 178,
				 ' ', ' ', 178,
				 ' ', ' ', 178};

char d8[5][3] = {178, 178, 178,
				 178, ' ', 178,
				 178, 178, 178,
				 178, ' ', 178,
				 178, 178, 178};
				 
char d9[5][3] = {178, 178, 178,
				 178, ' ', 178,
				 178, 178, 178,
				 ' ', ' ', 178,
				 ' ', ' ', 178};
				 
char sep[5][3] = {' ', ' ', ' ',
				  ' ', 178, ' ',
				  ' ', ' ', ' ',
				  ' ', 178, ' ',
				  ' ', ' ', ' '};

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

void displayMM(){
	cout<<"\n\n\n\tEnter 1 for Alarm\n\tEnter 2 for Stopwatch\n\tEnter 3 for Calender\n\tEnter 4 for exit";
	}

void gotoxy(int x, int y)
{
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console, CursorPosition);
}

void setcursor(bool visible, DWORD size)
{
	if(size == 0)
	{
		size = 20;
	}
	
	CONSOLE_CURSOR_INFO lpCursor;
	lpCursor.bVisible = visible;
	lpCursor.dwSize = size;
	SetConsoleCursorInfo(console, &lpCursor);
}

void printDigit(int no, int x, int y)
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<3; j++)
		{
			switch(no)
			{
				case 0:
					gotoxy(x+j, y+i);
					cout << d0[i][j];
					break;
				
				case 1:
					gotoxy(x+j, y+i);
					cout << d1[i][j];
					break;
					
				case 2:
					gotoxy(x+j, y+i);
					cout << d2[i][j];
					break;
					
				case 3:
					gotoxy(x+j, y+i);
					cout << d3[i][j];
					break;
					
				case 4:
					gotoxy(x+j, y+i);
					cout << d4[i][j];
					break;
					
				case 5:
					gotoxy(x+j, y+i);
					cout << d5[i][j];
					break;
					
				case 6:
					gotoxy(x+j, y+i);
					cout << d6[i][j];
					break;
					
				case 7:
					gotoxy(x+j, y+i);
					cout << d7[i][j];
					break;
					
				case 8:
					gotoxy(x+j, y+i);
					cout << d8[i][j];
					break;
					
				case 9:
					gotoxy(x+j, y+i);
					cout << d9[i][j];
					break;
					
				case 10:
					gotoxy(x+j, y+i);
					cout << sep[i][j];
					break;
			}
		}
	}
}

//This is for drawBorder function
void drawBorder(int x=0, int y=0)
{
	char v = 186;	//vertical
	char h = 205;	//horizontal
	char tr = 187;
	char br = 188;
	char tl = 201;
	char bl = 200;
	int width = 50;
	int height = 11;
	
	gotoxy((width/2) + x-11, y);
	cout << "C U R R E N T   T I M E";
	
	for(int i=1; i<=height; i++)
	{
		for(int j=1; j<=width; j++)
		{
			gotoxy(j+x, i+y);
			
			if(i==1 && j==1)
			{
				cout << tl;
			}
			
			else if(i==height && j==1)
			{
				cout << bl;
			}
			
			else if(i==1 && j==width)
			{
				cout << tr;
			}
			
			else if(i==height && j==width)
			{
				cout << br;
			}
			
			else if(i==1 || i==height)
			{
				cout << h;
			}
			
			else if(j==1 || j==width)
			{
				cout << v;
			}
		}
	}
		displayMM();
}

void printCalendar(int year)
{
	int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
	int mDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	string monthList[] = { "January" , "February",  "March"  ,  "April"  ,
						     "May"   ,  "June"   ,   "July"  ,  "August" ,
						  "September", "October" , "November", "December"};
	
	
	cout << " --------------------------------- " << endl;
	cout << "\t" << "    Calendar - " << year << endl;
	cout << " --------------------------------- " << endl;
	cout << endl;
	
	int days;
	int current;
	
	int y = year - 1;
	current = (y + y/4 - y/100 + y/400 + t[0] + 1) % 7;
	
	for(int i=0; i<12; i++)
	{
		if(i==1)
		{
			if( year%400 == 0 || (year%4 == 0 && year%100 != 0))
			{
				days = 29;
			}
			
			else
			{
				days = mDays[i];
			}
		}
		
		else
		{
			days = mDays[i];
		}
		
		cout << endl;
		cout << "\t\t" << monthList[i] << endl;
		cout << "***********************************" << endl;
		
		cout << "  Sun  Mon  Tue  Wed  Thu  Fri  Sat" << endl;
		
		int k=0;
		
		for (k = 0; k < current; k++)
		{
			cout << "     ";
		}
		
		for(int j = 1; j <= days; j++)
		{
			k++;
			cout << setw(5) << j;
			
			if(k > 6)
			{
				k = 0;
				cout << endl;
			}
		}
		
		if (k)
		{
			cout << endl;
		}
		
		current = k;
	}
	
	return;
}

void Calender(){
            	system("cls");
				int year;
				year = 2022;
				char option;
				int end=0;
				while(end==0){
				system("cls");
				printCalendar(year);
		
		cout << endl << endl;
		cout << "Press " << endl;
		cout << "n - for next year" << endl;
		cout << "p - for previous year" << endl;
		cout << "e - for exit" << endl;
		
		option = getch();
		
		switch(option)
		{
			case 'n':
				year++;
				break;
				
			case 'N':
				year++;
				break;
				
			case 'p':
				year--;
				break;
				
			case 'P':
				year--;
				break;
			case 'e':
				end=1;
				break;
			case 'E':
				end=1;
				break;
		}
	}
}

void stopwatch(){
	system("cls");
	short hour, min, sec;
	int i, j, time;
	
	do
	{
		cout << "Enter the hour" << "\t" << ": ";
		cin >> hour;
	}
	while(hour>23);
	
	do
	{
		cout << "Enter the minute: ";
		cin >> min;
	}
	while(min>59);
	
	do
	{
		cout << "Enter the second: ";
		cin >> sec;
	}
	while(sec>59);
	
	time = (hour!=0) ? hour * 24 : 0;
	time =  (min!=0) ?  min * 60 : 0;
	time += sec;
	
	for(int i=time; i>0; i--)
	{
		system("cls"); // For windows
		
		cout << "\n\n\n\n\n";
		cout << "\t\t\t\t\t";
		cout << "The time is remaining " << hour << ": ";
		cout << min << ": " << sec << endl;
		
		hour = (j%24==0) ? -- hour : hour;
		min  = (i%60==0) ? -- min  : min;
		sec  =  (sec==0) ? 59 : -- sec;
		Sleep(950);
	}
	
	cout << endl;
	cout << "\t\t\t\t\t*****************";
	cout << "\n\t\t\t\t\tTimer ended! ";
	cout << "\a\n\t\t\t\t\tLasted for ";
	cout << time << " seconds ";
	cout << "\n\t\t\t\t\t*****************";
	cout << "\n\n\n\n\n\nPress anything to continue";
	getch();
}

void Alarm(){
	while(kbhit()) getch();  
	 bool repeat = true;
    while (repeat)
    {
	int hour=0, min=0, sec=0;
	
	while(repeat)
	{
		system("cls");
		cout << "\n\n\n\n\n";
		cout << "\t\t\t\t\t" << "The timer: " << "\n\n";
		cout << "\t\t\t\t\t" << "**********" << endl;
		cout << "\t\t\t\t\t" << hour << " : " << min << " : " << sec;
		cout << "\n\t\t\t\t\t" << "**********\n\n\n\tEnter 1 to go back to main menu";
		sec++;
		
		if(sec==60)
		{
			min++;
			sec=0;
			
			if(min==60)
			{
				hour++;
				min=0;
				
				if(hour==60)
				{
					hour=0;
				}
			}
		}
		Sleep(950);
	if(kbhit()){
			char ch;
			ch = getch();
			switch (ch)
            {
            	case '1':{
            		repeat=false;
            		break;
            	}
            }
        }
    }
}
}

int main()
{
	while(kbhit()) getch();  
	 bool repeat = true;
    while (repeat)
    {
        
		char option;
	system("cls");
	setcursor(0, 0);
	srand((unsigned) time(NULL));
	
	time_t now = time(0);
	
	//Convert now to string
	char* dt = ctime(&now);
	
	//Convert noe to tm struct fot UTC
	tm *lotm = localtime(&now);
	dt = asctime(lotm);
	
	int hour = lotm->tm_hour;
	int min  = lotm->tm_min;
	int sec  = lotm->tm_sec;
	
	int gap  = 5;
	int posX;
	int posY = 8;
	
	while(repeat)
	{
		system("cls");
		drawBorder(9, 4);
		
		posX = 15;
		
		if(kbhit())
		{
			char ch = getch();
			
			if(ch == 27)
			{
				break;
			}
		}
		
		else if(hour<10)
		{
			printDigit(0, posX, posY);
			printDigit(hour, posX += gap, posY);
		}
		
		else
		{
			printDigit(hour/10, posX, posY);
			printDigit(hour%10, posX += gap, posY);
		}
		
		printDigit(10, posX += gap, posY);
		
		if(min<10)
		{
			printDigit(0, posX += gap, posY);
			printDigit(min, posX += gap, posY);
		}
		
		else
		{
			printDigit(min/10, posX += gap, posY);
			printDigit(min%10, posX += gap, posY);
		}
		
		printDigit(10, posX += gap, posY);
		
		if(sec<10)
		{
			printDigit(0, posX += gap, posY);
			printDigit(sec, posX += gap, posY);
		}
		
		else
		{
			printDigit(sec/10, posX += gap, posY);
			printDigit(sec%10, posX += gap, posY);
		}
		
		//50 miliseconds processing time is deducted...
		Sleep(950);
		sec++;
		
		if(sec>=60)
		{
			sec = 0;
			min++;
		}
		
		else if(min>=60)
		{
			min = 0;
			hour++;
		}
		
		else if(hour>=24)
		{
			sec = 0;
			min = 0;
			hour = 0;
		}
			if(kbhit()){
			char ch;
			ch = getch();
            switch (ch)
            {
            	case '1':{
            		Alarm();
            		break;
            	}
            	case '2':{
            		stopwatch();
            		break;
            	}
            	case '3':{
            		Calender();
            		break;
            	}
                case '4':               // press ESC to exit
                    repeat = false;
                    break;
        }
        while(kbhit()) getch();
    }
            }
	
}
}
