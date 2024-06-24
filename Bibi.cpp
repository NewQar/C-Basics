#include<iostream>
using namespace std;

int main()
{
  char typeCode,answer;
  int menuCode;
  double discount, netPrice, salesKids=0, salesWoman=0 ,totalSales=0;
  
  while(answer!='N'){
  cout<<"K for Kids, W for women.\nEnter type code: ";
  cin>>typeCode;
  
  if (typeCode=='K') 
  { 
    cout<<"Enter menu code: "; 
    cin>>menuCode; 
     
    if (menuCode==1){      
      discount= 15*0.05;
      netPrice=15-discount;
	    cout<< "The discount is :RM "<<discount<<endl; 
  cout<<"The net price is :RM "<<netPrice<<endl;
  salesKids+= netPrice;
    totalSales +=netPrice;
	cout<<"The total sales for kids type is: "<<salesKids<<endl;
    cout<<"The total sales for woman type is: "<<salesWoman<<endl;
    cout<<"The total sales for all the type: "<<totalSales<<endl;}
    
  else if (menuCode==2){
    discount= 20*0.05;
    netPrice= 20-discount;
	  cout<< "The discount is :RM "<<discount<<endl; 
  cout<<"The net price is :RM "<<netPrice<<endl;
  salesKids+= netPrice;
    totalSales +=netPrice;
	cout<<"The total sales for kids type is: "<<salesKids<<endl;
    cout<<"The total sales for woman type is: "<<salesWoman<<endl;
    cout<<"The total sales for all the type: "<<totalSales<<endl;}
     else{
     cout<<"Invalid type code"<<endl;
   }     
}
   else if (typeCode=='W') 
  { 
    cout<<"Enter menu code: "; 
    cin>>menuCode; 
     
    if (menuCode==1){      
      discount= 20*0.10;
      netPrice=20-discount;
	    cout<< "The discount is :RM "<<discount<<endl; 
  cout<<"The net price is :RM "<<netPrice<<endl;
  salesWoman+=netPrice;
    totalSales +=netPrice;
	cout<<"The total sales for kids type is: "<<salesKids<<endl;
    cout<<"The total sales for woman type is: "<<salesWoman<<endl;
    cout<<"The total sales for all the type: "<<totalSales<<endl;}
    
  else if (menuCode==2){
    discount= 30*0.10;
    netPrice= 30-discount;
	cout<< "The discount is :RM "<<discount<<endl; 
  cout<<"The net price is :RM "<<netPrice<<endl;
  salesWoman+=netPrice;
    totalSales +=netPrice;
	cout<<"The total sales for kids type is: "<<salesKids<<endl;
    cout<<"The total sales for woman type is: "<<salesWoman<<endl;
    cout<<"The total sales for all the type: "<<totalSales<<endl;}
     else{
     cout<<"Invalid type code"<<endl;
   } 
}
   else{
     cout<<"Invalid type code"<<endl;
   } 
   cin.ignore();
      

        cout << "\n\nContinue. 'Y' or 'N' " << endl;
          cin >> answer;
        }
return 0;
}
