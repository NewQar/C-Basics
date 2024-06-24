#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
using namespace std;

void grading(int, int);
void form(int);
void awii(void);
int Highest(int, int);
int q=0;

struct studentType {
  string studentFName[20], studentLName[20];
  int testScore[20];
  char Grade[20];
  char awuwu[9]={'Q','A','R','D','H','A','W','I',' '};
}awi;

int Highest(){
//string namaAwiF= awi.studentFName[0];string namaAwiL= awi.studentLName[0];
	int highe=0;
	int high = awi.testScore[0];
	int AwiKot=1;
while(AwiKot<20){
	if (awi.testScore[AwiKot]>high){
		high= awi.testScore[AwiKot];
		highe=AwiKot;
	}
	AwiKot++;}
return highe;
}

void input(){
	int o;
	cout<<"How many students? The question kata 20 tapi takpo lah ikut awak lah dan max adalah 20 iya\n";
	cin>>o;
	cout<<endl;
	for(int i=0;i<o;i++){
	awii();
	cout << "Student "<<i+1<<" First name: ";
	getline(cin >> std::ws, awi.studentFName[i] );
	awii();
	cout << "Last name: ";
	getline(cin >> std::ws, awi.studentLName[i] );
	do{
	awii();
	cout <<"0 - 100 only. Score: ";
	cin>>awi.testScore[i];
	}while(awi.testScore[i]>100||awi.testScore[i]<0);
	awii();
	grading(awi.testScore[i], i);
	cout<<"------------------------------------\n"<<endl;
	}
	form(o);
}

void awii(){
	cout<<"\t"<<awi.awuwu[q]<<"\t";
	q++;
	if(q==9)
	q=0;
}
void grading(int score, int r){
	char grade;
	if(score>=80)
		grade='A';
	else if(score<80&&score>=60)
		grade='B';
	else if(score<60&&score>=40)
		grade='C';
	else
		grade='F';
	awi.Grade[r]=grade;
}

void form(int u){
	ofstream myfile;
	myfile.open("Qardhawi.txt");
	myfile<<"\tName\n";
	for(int p=0;p<u;p++){
	myfile<<awi.studentLName[p]<<", "<<awi.studentFName[p];
	myfile<<"\t\tScore: "<<awi.testScore[p]<<"\tGrade: "<<awi.Grade[p]<<endl;
	if(p==(u-1)){	
	int rad= Highest();
	myfile<<"\nHighest mark is "<<awi.studentLName[rad]<<", "<<awi.studentFName[rad];
}
}
}
void output(){
	string line;
	fstream infile;
infile.open("Qardhawi.txt");
    while ( getline (infile,line) )
    {
      cout << line << '\n';
    }
    infile.close();
}

int main ()
{

input();
Highest();
output();
}
