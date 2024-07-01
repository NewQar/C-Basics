#include <iostream> 
#include <bits/stdc++.h> 
#include <string.h> 
#include <iomanip> 
using namespace std; 
 
int main(){ 
   
  int ID[], score1[], score2[],improveID, total, highestID; 
  double average,highest=0 ; 
  char ans;
   
	while(ans!='N'){  
          
        for(int i=0;i<total;i++){ 
        cout<<"Enter bowler ID: "; 
        cin >>ID[i]; 
        
        cout<<"Enter score 1: "; 
        cin>>score1[i]; 
        
        cout<<"Enter score 2: "; 
        cin>>score2[i];         
        
        if(score2[i]>score1[i]){ 
         improveID=ID[i];} 
           
      
        cout<<"The bowler with ID "<<improveID<<" improves their score in second round"<<endl;
        
        average=(score1[i]+score2[i])/2;
        cout<<"The average score is: "<<average<<endl;
  
      
        for(int j=0;j<total;j++){ 
          total=score1[j]+score2[j]; 
    
    if(total>highest){ 
     highest=total ;
     highestID=ID[i] ;
    } 
 }
         cout << "\n\nContinue. 'Y' or 'N' " << endl; 
        cin >> ans; 
 
  }}
  
    cout << "Winner is bowler with ID " << highestID << "  with the highest score of  " << highest; 
    
return 0; 
}
	
   
