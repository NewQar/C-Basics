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
	int hour=0, min=0, sec=0;
	
	while(true)
	{
		system("cls");
		cout << "\n\n\n\n\n";
		cout << "\t\t\t\t\t" << "The timer: " << "\n\n";
		
		cout << "\t\t\t\t\t" << "**********" << endl;
		cout << "\t\t\t\t\t" << hour << " : " << min << " : " << sec;
		cout << "\n\t\t\t\t\t" << "**********" << endl;
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
	}
	
	return 0;
}
