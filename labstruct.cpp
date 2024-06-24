#include <iostream>
#include <stdlib.h>
using namespace std;

main(){
	char myArray[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char myLetter[3][3]={'s', 'm','k','b', 'y', 'd', 'l', 'q', 'n'};
	int maxi=0, maxj=0,smalli=0,smallj=0, count, maxcount=0, mincount=26;
for(int i=0; i<3; i++){
for (int j=0; j<3; j++)
{
	for(int alpha=0;alpha<26;alpha++){
		if(myLetter[i][j]==myArray[alpha])
			if(maxcount<alpha){
				maxi=i;
				maxj=j;
				maxcount=alpha;
			}
			else if(mincount>alpha){
				smalli=i;
				smallj=j;
				mincount=alpha;
			}
	}
}
}
cout<<"Biggest element: "<<myLetter[maxi][maxj]<<endl;
cout<<"Smallest element: "<<myLetter[smalli][smallj];
}

