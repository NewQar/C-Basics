#include <iostream>
#include<conio.h>
#include<cstdlib>
#include<time.h>
#include <windows.h>
#include <string>
using namespace std;

struct{//Quantity bahan
	int ayam=1,ikan=1,daging=0,udang=1,cili=1,bawang=1,halia=1,kubis=1,sawi=1,lengkuas=1,nasi=0,Calories=0,meals=0;
	string Foods[20];
}bahan;
void intro(){
	char introd[20]={' ','W','e','l','c','o','m','e',' ','t','o',' ','i','F','r','i','d','g','e',' '};
	char ProdName[20]={'|',' ',' ','i','F','r','i','d','g','e',' ','P','r','o','j','e','c','t',' ','|'};
	char dividerintro[20]={'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'};
	Sleep(1);//ada timer untuk animasi tu
			cout<<"\n";
			for(int awi=0;awi<20;awi++){//ni untuk dia keluarkan satu satu intro
				cout<<"\n\n\t\t";
				for(int awii=0;awii<=awi;awii++)
				cout<<introd[awii];
					cout<<"\n\n\t\t";
				for(int awii=0;awii<=awi;awii++)
				cout<<dividerintro[awii];
					cout<<"\n\t\t";
				for(int awii=0;awii<=awi;awii++)
				cout<<ProdName[awii];
					cout<<"\n\t\t";
				for(int awii=0;awii<=awi;awii++)
				cout<<dividerintro[awii];
				if(awi==19){
					//credit page
					cout<<"\n\n\t\tMade By:";
					cout<<"\n\t\t- MUHAMMAD AMIRUL HAKIM BIN SHAMSUDIN(Ketua)\n\t\t- NURDINI AISYA BINTI MD MAZMI \n\t\t- NUR HUSNINA IZZATI BINTI KAMARUDDIN\n\t\t- YUSUF AL-QARDHAWI BIN MOHD ZAKI";
					cout<<"\n\n\n\n\n\t\t\t\tPress anything to continue"; //Untuk confirmation setiap page
			getch();
				}
		system("cls");// clear screen
		}
}
void Function2(){
	//2 Array bawah ni untuk feature missing ingredient tu 
	string Namebahan[11]={"Chicken","Fish","Beef","Prawn","Chili","Onion","Ginger","Cabbage","Sawi","Lengkuas","Rice",};
	int quantibahan[11]={bahan.ayam,bahan.ikan,bahan.daging,bahan.udang,bahan.cili,bahan.bawang,bahan.halia,bahan.kubis,bahan.sawi,bahan.lengkuas,bahan.nasi};
	int caloriri[18];//array untuk calories dalam tiap dish
	srand(time(0));
	string answer;
	int dish,i=0,j=0,counter=5;
	string full[18];
	string nfull[18];
	if(bahan.ayam>0){
		caloriri[i]=680;
		full[i]="Hot Wings\t";
		i++;
		caloriri[i]=630;
		full[i]="Ayam Geprek\t";
		i++;
	}
	else{
		nfull[j]="Hot Wings\t";
		j++;
		nfull[j]="Ayam Geprek\t";
		j++;
	}
	if(bahan.daging>0){
		caloriri[i]=820;
		full[i]="Steak\t\t";
		i++;
	}
	else{
		nfull[j]="Steak\t\t";
		j++;
	}
	if(bahan.kubis>0&&bahan.daging>0){
		caloriri[i]=550;
		full[i]="Beef Burger\t";
		i++;
	}
	else{
		nfull[j]="Beef Burger\t";
		j++;
	}
	if(bahan.nasi>0&&bahan.ayam>0){
		caloriri[i]=600;
		full[i]="Nasi Ayam\t";
		i++;
	}
	else{
		nfull[j]="Nasi Ayam\t";
		j++;		
	}
	if(bahan.bawang>0&&bahan.daging>0&&bahan.cili>0&&bahan.halia>0){
		caloriri[i]=530;
		full[i]="Daging Masak Kicap";
		i++;
	}
	else{
		nfull[j]="Daging Masak Kicap";
		j++;		
	}
	if(bahan.udang>0){
		caloriri[i]=340;
		full[i]="Japanese Shrimp Burger";
		i++;
	}
	else{
		nfull[j]="Japanese Shrimp Burger";
		j++;		
	}
	if(bahan.ikan>0){
		caloriri[i]=500;
		full[i]="Fish and Chips\t";
		i++;
	}
	else{
		nfull[j]="Fish and Chips\t";
		j++;		
	}
	if(bahan.kubis>0||bahan.sawi>0){
		caloriri[i]=210;
		full[i]="Salad\t\t";
		i++;
	}
	else{
		nfull[j]="Salad\t\t";
		j++;		
	}
	while(counter!=0){//untuk ulang kalau wrong input
	int chat= (rand()%3);//nombor random
	//Personal chef punya script
	string chatboxes1[4][3]={"Hi. I am your personal chef","Hi hi. It me your personal chef","Ramsey. Gordan Ramsey, at your service","What country dish would you like to taste?","What type of dish are we making today?","What kind of dish we trying this time?","I don't understand. Could you repeat that?","You don't have enough ingredients.Come again?","I think you pressed the wrong button","I highly recommend the ","If you don't know, I recommend the ","But I recommend you give this dish a go. The "};
	cout<<"\n\t  \t|\n\t  O /\t|\t"<<chatboxes1[0][chat]<<"\n\t _|/\t|\t";//muka orang
	chat= (rand()%3);
	int foodchat=0;
	if(i>0)
	foodchat=(rand()%i);
	else
	full[0]="Nothing";
	cout<<chatboxes1[1][chat];//script chef
	cout<<"\n\t/ |\t|\t"<<chatboxes1[3][chat]<<full[foodchat]<<"\n\t  |\t|\n-----------------\n\nThe dishes you can make:\t|\tThe dishes with not enough ingredients:\n\t\t\t\t|";
	if(i>=j){//if bila bahan banyak
		for(int awo=0;awo<i;awo++){
			cout<<"\nNo."<<awo+1<<"\t"<<full[awo]<<"\t|";
			if(awo<j)
			cout<<"\tNo."<<awo+i+1<<"\t"<<nfull[awo];
		}
	}
	else if(j>i){//if bila tak banyak bahan
		for(int awo=0;awo<j;awo++){
			if(awo<i)			
			cout<<"\nNo."<<awo+1<<"\t"<<full[awo];
			else
			cout<<"\n\t\t\t";
			cout<<"\t|\tNo."<<awo+i+1<<"\t"<<nfull[awo];
		}		
	}
	cout<<"\n\n\tThe ingredients you missing is: ";
	for(int tan=0;tan<11;tan++){//repetition untuk feature list ingredient yang takde
		if(quantibahan[tan]==0&&tan!=11)
		cout<<"- "<<Namebahan[tan]<<"\n\t\t\t\t\t";
	}
	if(i>0){//function kalau ada ingredients untuk masak
	while (std::cout << "\n\n\tTo go back to the main menu, enter 0.\n\tWhich dish would you like to make(1 - "<<i<<"): " && !(std::cin >> dish)){
    std::cin.clear(); //clear bad input flag
    std::cin.ignore(1000, '\n'); //discard input
    std::cout << "\tInvalid input; please re-enter.";
}
	chat= (rand()%3);
		if((dish-1)<i&&dish>0){
			cout<<"\n\tAre you sure you want to cook "<<full[dish-1]<<"\n\tIts calories are "<<caloriri[dish-1]<<". (y/n)";
			cin>>answer;
				if(answer=="y"||answer=="Y"){
					counter=0;
					//bawah ni semua untuk masukkan ke dalam function 3
					bahan.Calories+=caloriri[dish-1];
					bahan.Foods[bahan.meals]=full[dish-1];
					bahan.meals++;
				}
		}
		else{//wrong input punya feature
		cout<<"\n\t"<<chatboxes1[2][chat];
		cout<<"\n\tPress anything to continue";
		getch();
		}
	}
	else{
		cout<<"\n\tSeems like you don't have anything in the fridge to make anything. Sad.\n\tPress anything to go back to main menu.";
		counter=0;
		getch();
	}
		system("cls");
}
}
void Function3(){
	cout<<"\n\t\tThis is your calories for the week:\n\n\t\tList of meals eaten:\t\tCalories: "<<bahan.Calories;
	if(bahan.meals==0)
	cout<<"\n\t\tNothing";
	for(int chowder=1;chowder<=bahan.meals;chowder++){
		cout<<"\n\t\t- "<<bahan.Foods[chowder-1];
	}
	cout<<"\n\n\t\tPress anything to go back to the main menu.";
	getch();
	system("cls");
}
main (){
//kalau malas nak tengok intro tiap kali run, letak // belakang intro();
intro();
int choice=0;
//Main menu screen
	while(choice!=5){
	cout<<"\n\t\t---------------------------------";
	cout<<"\n\t\t| \t     iFridge            |";
	cout<<"\n\t\t| \t    MAIN MENU           |";
	cout<<"\n\t\t|-------------------------------|";
	cout<<"\n\t\t| \t1. Check Ingredients    |";
	cout<<"\n\t\t| \t2. What to Cook         |";
	cout<<"\n\t\t| \t3. Calories Tracking    |";
	cout<<"\n\t\t| \t4. Shopping List        |";
	cout<<"\n\t\t| \t5. Exit                 |";
	cout<<"\n\t\t---------------------------------";
	cout<<"\tChoose choice: ";
	cin>>choice;
	system("cls");
	switch(choice){
		case(2):{
			Function2();
			break;
		}
		case(3):{
			Function3();
			break;
		}
	}
	}
}

