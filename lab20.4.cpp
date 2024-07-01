
#include <iostream>
using namespace std;
//FUNCTION
double calcFee (char category,int type,int totalMember)
{
	double totalFee;
	if (category == 'S'||category == 's')
	{if (type == 1)
	totalFee = 50* totalMember;
	else if (type == 2)
	totalFee = 75* totalMember;
	else{
	cout<<"\nYou entered the wrong input for type";
	return 0;
	}
	}
	else if(category=='T'||category == 't'){
		if(type==1)
			totalFee = 100* totalMember;
		else if (type == 2)
			totalFee = 150* totalMember;
		else{
			cout<<"\nYou entered the wrong input for type";
			return 0;}
	}
	else{
	cout<<"\nYou entered the wrong input for category";
	return 0;}
	return totalFee;
	
}

double calcAccomodation ()
{
	bool accomodation;
	cout<< "\nDo you need accoomodation?\nRM150 if yes (1=Yes or 0=No)\t:";
	cin>>accomodation;
	if(accomodation)
	return accomodation;
	else
	return 0;
}

int main ()
{
	char category;
	int type;
	double totalFee;
	int totalMember;
	double fee;

	cout<< "State your category (S or T)\t:";
	cin>>category;
	cout<<"State your type (1 or 2)\t:";
	cin>>type;
	cout<<"Total members\t\t\t:";
	cin>> totalMember;
	
fee = calcFee(category,type,totalMember);
if(fee>0){
	if(calcAccomodation())
		fee=fee+150;
	cout<< "\nTotal Fee is RM"<< fee;
}
return 0;
}
