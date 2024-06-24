#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
#include <iomanip>
using namespace std;

int main(){
  
  int ID[6], SMSVotes[6], juryMarks[6], j=0, total, highestID=0,highpercent=0;
  double SMSPercent[6], juryPercent[6], finalResult[6], highest=0;
  
  cout<<"Enter total participants: ";
  cin >>total;
  
  for(int i=0;i<total;i++){      
       cout<<"Enter participants ID: ";
       cin >>ID[i];
       
        cout<<"Enter SMS votes: ";
        cin>>SMSVotes[i];
        if(highpercent<SMSVotes[i])
        	highpercent=SMSVotes[i];
        
       cout<<"Enter jury marks: ";
       cin>>juryMarks[i];
      }
  
  for(int j=0;j<total;j++){
    SMSPercent[j]=(SMSVotes[j]/highpercent)*50;
    juryPercent[j]=juryMarks[j]*0.5;
    finalResult[j]=SMSPercent[j]+juryPercent[j];
    if(finalResult[j]>highest){
    	highest=finalResult[j];
    	highestID=ID[j];
    }
	}

    cout << "Student: " << highestID << endl;
    cout << "With the most vote of  " << highest;
}
