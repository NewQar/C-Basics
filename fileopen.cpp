#include <sstream>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string line, petName[10], type[10], ownerName[10], phone[10];
  int price[10];
  int i=0;
  ofstream MyFile("petSold.txt");
  	MyFile<<"Uyamaru,cat,800,Shafie,0121254123"<<endl;
	MyFile<<"Lola,bird,380,Fizi,0124574125"<<endl;
	MyFile<<"Soluya,bird,380,Joe,0124574125"<<endl;
	MyFile<<"Tompok,bird,380,Kinah,0124574125"<<endl;
	MyFile<<"Momo,bird,380,Joe,0124574125"<<endl;
	MyFile<<"Kunin,cat,1200,Mei,01278954125"<<endl;
	MyFile<<"Uyasolu,bird,380,Ami,0124574125"<<endl;
	MyFile<<"Uyalolu,sugar glider,150,Mamat,0128541203"<<endl;
	MyFile<<"Petpet,cat,1380,Farah,01245714123"<<endl;
	MyFile<<"Putput,bird,380,Farah,01245714755"<<endl;
	
	ifstream myfile ("petSold.txt");
	  if (myfile.is_open()){
    while (getline(myfile,line)){
    	stringstream ss(line);
      	getline(ss,petName[i], ',');
    }
    myfile.close();
  }
  else cout << "Unable to open file"; 

  return 0;
}
