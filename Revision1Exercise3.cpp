#include <iostream>
using namespace std;

void multiply(int& RefRes, int& RefMulti, int& RefConsta){
	RefRes=RefConsta*RefMulti;	
}

main(){
	int multi[3], result[3];
	int consta;
	cout<<"Enter the 3 numbers\n";
	for(int i=0;i<3;i++){
		cout<<i+1<<" Number:";
		cin>>multi[i];
	}
	cout<<"Enter consta: ";
	cin>>consta;
	for(int j=0;j<3;j++){
		multiply(result[j],multi[j],consta);
		cout<<"After multiplication with "<<multi[j]<<" :"<<result[j]<<endl;
	}
}

