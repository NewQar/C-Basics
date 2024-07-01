#include<iostream>
using namespace std;
int main ()
{
	 string customerName [100], categoryCode [10] ,productCode [1], categoryDescription[25], productDescription[100];
	 int quantity,distance,i=0;
	double totalPay;
	char again='Y';
	
	do 
	{
		cout<< "Enter customer name :"<<endl;
		cin>>customerName[i]; 
		cout<< "Enter quantity :"<<endl;
		cin>>quantity;
		cout<< "Enter distance :"<<endl;
		cin>>distance;
		cout<< " Enter productCode : "<<endl;
		cin>>productCode[i];
		cout<<" Enter Category Code : "<<endl;
		cin>>categoryCode[i];
		
		
		
		if (categoryCode[i] == "NP456" &&  productCode[i]== "P" ){
		
			if (distance <=20 ){
			
			totalPay = 158.50 + ( 1.00 * distance ) ;
			
			cout <<"           WELCOME TO HARMONY GIFT SHOP - " <<customerName[i]<< endl;
			cout<< " You have purchased		: Promising Love "<<endl;
			cout<<" Category                : New Product "<<endl;
			cout<<" Quantity                 : "<<quantity<<endl;
			cout<< "You should pay          : "<<totalPay<<endl;
			
			}
			else if (distance >20 && distance <=80){
			
				totalPay = 158.50 + ( 1.50 * distance ) ;
			
			cout <<"           WELCOME TO HARMONY GIFT SHOP - " <<customerName<< endl;
			cout<< " You have purchased		: Promising Love "<<endl;
			cout<<" Category                : New Product "<<endl;
			cout<<" Quantity                 : "<<quantity<<endl;
			cout<< "You should pay          : "<<totalPay<<endl;
		}
			else{
			
			 	totalPay = 158.50 + ( 2.00 * distance ) ;
			
			cout <<"           WELCOME TO HARMONY GIFT SHOP - " <<customerName<< endl;
			cout<< " You have purchased		: Promising Love "<<endl;
			cout<<" Category                : New Product "<<endl;
			cout<<" Quantity                 : "<<quantity<<endl;
			cout<< "You should pay          : "<<totalPay<<endl;
		}}
		 else if (categoryCode[i] == "NP456" && productCode[i] ==  "E" ) {
			 if( distance <=20)	 
			totalPay = 158.50 + ( 1.00 * distance ) ;
			
			cout <<"           WELCOME TO HARMONY GIFT SHOP - " <<customerName<< endl;
			cout<< " You have purchased		: Endless Love "<<endl;
			cout<<" Category                : New Product "<<endl;
			cout<<" Quantity                 : "<<quantity<<endl;
			cout<< "You should pay          : "<<totalPay<<endl;
		}
			else if (distance >20  && distance <=80){
			
				totalPay = 198.50 + ( 1.50 * distance ) ;
			
			cout <<"           WELCOME TO HARMONY GIFT SHOP - " <<customerName<< endl;
			cout<< " You have purchased		: Endless Love "<<endl;
			cout<<" Category                : New Product "<<endl;
			cout<<" Quantity                 : "<<quantity<<endl;
			cout<< "You should pay          : "<<totalPay<<endl;
		}
		cout<<" Do you want to repeat again ? (Y/N) ";
		cin>>again;
	}while (again == 'Y' || again =='y');
	return 0;
}
