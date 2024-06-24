#include <iostream>
#include <string>
using namespace std;

double calcPrice(int);
double calcDiscountPrice(double);

double calcPrice(int pages){
double cost=0.50;
double price=pages*cost;
return price;
}

double calcDiscountPrice(double price){
double discountedPrice;
if(price>=0&&price<=200)
discountedPrice= price*0.95;
else if(price>=201&&price<=500)
discountedPrice= price*0.9;
else if(price>500)
discountedPrice= price*0.85;
return discountedPrice;
}

int main()
{
	int id[100];
	string title[100];
	string author[100];
	int page[100];
	double price[100];
	double finalPrice[100];
	
	for(int i=0; i<100; i++)
	{	
		cout << "Enter the book ID   : ";
		cin >> id[i];
		cout << "Enter the book title: ";
		getline(cin >> std::ws, title[i]);
		cout << "Enter the author name: ";
		getline(cin >> std::ws, author[i]);
		cout << "Enter the number of pages: ";
		cin >> page[i];
		
		price[i] = calcPrice(page[i]);
		finalPrice[i] = calcDiscountPrice(price[i]);
		
		cout << "The price is " << price[i] << endl;
		cout << "The discounted price is " << finalPrice[i] << endl;
	}
}
