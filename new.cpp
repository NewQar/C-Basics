#include<iostream>

using namespace std;

double calTotalSales (double arr[], int size){
    double sum = 0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
  }

int main(){
    string salespersonName[] = {"Harry","Sally","Aziz","Siti","Kay"};
    double monthlySales[] = {10000,5000,20000,12000,6000};
    int size = sizeof(salespersonName)/sizeof(salespersonName[0]);
    cout<<"Salesperson Name\t\t\tMonthly Sales"<<endl;
    for(int i=0;i<size;i++){
        cout<<salespersonName[i]<<"\t\t\t\t\t\t"<<monthlySales[i]<<endl;
    }
    cout<<"Total Sales\t\t\t\t\t"<<calTotalSales(monthlySales,size);

}
