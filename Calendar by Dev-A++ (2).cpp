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

int main()
{
	system("cls");
	
	time_t ttime = time(0);
	tm *local_time = localtime(&ttime);
	
	int year = 1900 + local_time -> tm_year;
	char option;
	
	do
	{
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
		}
	}
	while(option!='e' || option!='E');
	
	return 0;
}
