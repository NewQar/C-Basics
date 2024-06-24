#include <iostream>
using namespace std;
/*
Name : Yusuf Al-Qardhawi Bin Mohd Zaki
Sid# : 2021488972
Course: CSC402
Group#: CS2301A 
Assign#:Lab Assignment 1
Due Date:23/11/2021
Program Description: Input radius and height to find volume and surface area of cylinder.
Acronym: Radius=r, Height=h, Volume=vol, Surface area=s_a
*/
int main ()
 {  
 float r, h, pi = 3.14159, vol=0, s_a=0;
	cout<<"Enter the cylinder's radius"<<endl;
	cin>>r;
	cout<<"Enter the cylinder's height"<<endl;
	cin>>h;
	vol= pi*r*r*h;
	s_a = (2*pi*r*(r+h));
	cout<<"The volume of the cylinder is "<<vol<<endl;
	cout<<"The surface area of the cylinder is "<<s_a<<endl;
}
