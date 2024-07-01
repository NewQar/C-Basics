#include <iostream>
#include <cmath>
using namespace std;
int main (){ 
int voter[50], senior[50], j=0;
for(int i=0; i<50; i++){
	cout<<"Age: ";
	cin>>voter[i];
	if (voter[i]>55){
 	senior[j]=voter[i];
	j++;
}
	}
cout<<"The number of seniors are: "<<j<<endl;
}
