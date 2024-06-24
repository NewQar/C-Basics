#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
using namespace std;
 

struct Laundry {
    string CustName;
    string Phone;
    double weight;
    double pay;
};
int pay(double& weigh, double& price, double& tot){
	if(weigh<=5)
	price=weigh*2;
	else if(weigh>10)
	price=(weigh-10)+17.5;
	else
	price=(weigh-5)*1.5+10;
	tot+=price;
}
void enter(string& name, string& fon, double& wei){
	cout<<"Name: ";
	cin>>name;
	cout<<"Phone: ";
	cin>>fon;
	cout<<"Weight: ";
	cin>>wei;
	cout<<endl;
}
void filing(int& num, string& names, string& fons, double& weis, double prices){
}

main()
{
	ofstream myfile;
  	myfile.open ("receipt.txt");
  	myfile<<"\t\tBuble Laundry\n\t\tBilling Information\n\n";
	double total=0;
	//For testing: Change 100 to 3 in line 42 and 43
    struct Laundry customerRec[3];
    for(int i=0;i<3;i++){
	enter(customerRec[i].CustName,customerRec[i].Phone, customerRec[i].weight);
	pay(customerRec[i].weight, customerRec[i].pay, total);
	filing(i,customerRec[i].CustName,customerRec[i].Phone, customerRec[i].weight,customerRec[i].pay);
  	myfile <<"Customer No.:\t"<<i+1<<"\nCustomer Name:\t"<<customerRec[i].CustName<<"\nPhone No.:\t"<<customerRec[i].Phone<<"\nLaundry Weight (kg):\t"<<customerRec[i].weight<<"\nPayment (RM):\t"<<customerRec[i].pay<<"\n\n";
	}
	myfile<<"\nThe total sales today:\t"<<total;
	myfile.close();
    string line;
 	ifstream Myfile ("receipt.txt");
    	while ( getline (Myfile,line)){
      			cout << line << '\n';
    	}
    Myfile.close();
  }
