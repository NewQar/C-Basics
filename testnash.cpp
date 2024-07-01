#include<iostream>
#include <iomanip>
using namespace std;
int main(){
 int week,day=1;
 double price, sum=0, high=0, low=9999999, average;
 cout<<"Palm oil price analysis systems."<<endl;
 cout<<"\nPlease enter week number: ";
 cin>>week;
 	for(int day=1;day<8;day++){
 		cout<<"Please enter palm oil price (per tonne) for day "<<day<<": RM";
 		cin>>price;
 		sum=price+sum;
 		if(high<price){
 		high =price;
 	}
 	 		if(low>price){
 		low =price;
 	}
 }
 average=sum/7;
 cout<<"\n\nHighest palm oil price (per tonne) for week "<<week<<"is : RM"<< high;
  cout<<"\nLowest palm oil price (per tonne) for week "<<week<<"is : RM"<< low;
  cout<<"\nAverage palm oil price (per tonne) for week "<<week<<"is : RM"<<setprecision(2)<<fixed<<average;
}

