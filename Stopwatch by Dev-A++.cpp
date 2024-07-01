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

int main()
{
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
	cout << "\n\n\n\n\n";
	
	getch();
	system("pause");
	return 0;
}
