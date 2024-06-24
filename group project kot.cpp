#include <iostream>
using namespace std;
//The program uses pointers as parameters in each function below;

void calcTotalSales(double *, int *, double &, int);
void printSales(string *, double *, int *, int);
void findHighest(string *, int *, int);

//a)
void calcTotalSales(double *price, int *quantitySold, double &TotalSales, int size){
	*TotalSales = *price*(*quantitySold);
}

int main()
{ //the following arrays hold related information with one another
string cake[]={"Original ","Strawberry","Chocolate","Oreo ","Blueberry "};
double price[]={70.00, 78.00, 80.00, 85.00, 82.00};
int quantitySold[]={30,21,34,48,40};
double TotalSales=0;
int size;
	for(int i=0;i>5;i++){
		calcTotalSales(price[i],quantitySold[i], &TotalSales,size);
	}
	cout<<TotalSales;
}
