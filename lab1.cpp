//Title: Exercise 6
//Programmer: Yusuf Al-Qardhawi Bin Mohd Zaki
//Course: CSC402 (Programming)
//Assign: Sir Ahmad Taufiq bin Haji Muhammad
//Due date: 14 December 2021
/*This program is written to compute and display the price of the hotel after the
 user enter the specification and the number of nights that he/she want to stay.*/

#include <iostream>
using namespace std;

main() 
{
	int night;
	char room, view;
	float pricenight, price, gst, total;
	
	cout << "How many night want to stay? : ";
	cin >> night;
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
		}
		else
		{
			pricenight = 180.0;
			price = pricenight * night;
			gst = price * 0.06;
			total = price + gst;
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
		}
		else
		{
			pricenight = 270.0 ;
			price = pricenight * night;
			gst = price * 0.06 ;
			total = price + gst;
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
		}
		else
		{
			pricenight = 320.0;
			price = pricenight * night;
			gst = price * 0.06 ;
			total = price + gst;
		}
	}
	cout <<"The price for 1 night is" << ":" << pricenight << endl ;
	cout <<"The price per night is"   << ":" << price << endl ;
	cout << "The GST 6% is"            << ":" << gst << endl ;
	cout << "The total price is"       << ":" << total << endl ;
}



