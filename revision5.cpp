#include <iostream>
#include <math.h>
using namespace std;
float sd(float);
struct{
	float x[5];
}s;
float mean(){
	float means=(s.x[0]+s.x[1]+s.x[2]+s.x[3]+s.x[4])/5;
	return means;
}

float sd(float meanss){
	float psd=0;
	for(int i=0;i<5;i++){
	psd+=pow((s.x[i]-meanss),2);
}
	float psd2=sqrt(psd/5);
return psd2;
}

void read(){
	for(int j=0;j<5;j++){
	cout<<"Enter x"<<j+1<<": ";
	cin>>s.x[j];
}
}
main() {
	read();
	float m= mean();
	float sds= sd(m);
	cout<<"\nThe mean is "<<m<<endl;
	cout<<"The standard deviation is "<<sds;
}
	
	
		

	
