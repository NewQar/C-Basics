#include <iostream> 
#include <windows.h> 
#include <iomanip>

#include <cstdlib>

using namespace std; 
 
void changeColor(int desiredColor){ 
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), desiredColor); 
}

int main ()
{
				while (sw<103)
				{
					if(SW>sw){
					changeColor(12);//Green
				}
				else{
					changeColor(10);//Red
				}
					cout <<" | " << "SW" << sw;
					sw++;
				}
				while (sf<103)
				{
					if(SF>sf){
					changeColor(12);//Green
				}
				else{
					changeColor(10);//Red
				}
					cout << " | " << "SF" << sf;
					sf++;	
				}
				cout<<endl;
				while (dw<103)
				{
					if(DW>dw){
					changeColor(12);//Green
				}
				else{
					changeColor(10);//Red
				}
					cout << " | " << "DW" << dw;
					dw++;	
				}
				while (df<103)
				{
					if(DF>df){
					changeColor(12);//Green
				}
				else{
					changeColor(10);//Red
				}
					cout << " | " << "DF" << df;
					df++;	
				}
				cout<<endl;
				while (ew<103)
				{
					if(EW>ew){
					changeColor(12);//Green
				}
				else{
					changeColor(10);//Red
				}
					cout << " | " << "EW" << ew;
					ew++;
				}
				while (ef<103)
				{
					if(EF>ef){
					changeColor(12);
				}
				else{
					changeColor(10);
				}
					cout << " | " << "EF" << ef;
					ef++;
				}
				changeColor(11);
				break;
			}
							int q=1;
				while(q!=5){
				char key = 'e';
					if(q==1){
				system("cls");
				cout<<"\n\t_______________________________________";
				cout <<"\n\t    |"<<setw(7)<<"|"<<setw(16)<<"|"<<setw(7)<<"|";
				cout <<"\n\t    |"<<setw(10)<<"      | Emisha  Hotel |      |\tPress (w) to go up and (s) to go down";
				cout<<"\n\t    |______|_______________|______|\t(Press enter) to see floorplan. (m) to quit";
				cout <<"\n\t    |"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|";
				cout <<"\n\t    |"<<setw(10)<<"         |  Third  |"<<setw(10)<<"|";
				cout <<"\n\t    |"<<setw(10)<<"         |  Level  |"<<setw(10)<<"|";
				cout<<"\n\t |__|_________|_________|_________|__|";
				cout <<"\n\t    |"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|";
				cout <<"\n\t    |"<<setw(10)<<"         | Second  |"<<setw(10)<<"|";
				cout <<"\n\t    |"<<setw(10)<<"         |  Level  |"<<setw(10)<<"|";
				cout<<"\n\t |__|_________|_________|_________|__|";
				cout <<"\n\t    |"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|";
				cout <<"\n\t    |"<<setw(10)<<"         |  First  |"<<setw(10)<<"|";
				cout <<"\n\t    |"<<setw(10)<<"         |  Level  |"<<setw(10)<<"|";
				cout<<"\n\t____|_________|_________|_________|____";
				cout <<"\n\t |  |"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|";
				cout <<"\n\t |  |"<<setw(10)<<"         | Ground  |"<<setw(10)<<"|";
				cout <<"\n\t |  |"<<setw(10)<<"         |  Level  |"<<setw(10)<<"|"<<setw(10)<<"<----";
				cout<<"\n\t |  |_________|_________|_________|________  Beach        Ocean";//4 space depan
				cout<<"\n\t"<<setw(68)<<"---------~~~~~~~~~~~~~~~~";
				}
					if(q==2){
				system("cls");
				cout<<"\n\t_______________________________________";
				cout <<"\n\t    |"<<setw(7)<<"|"<<setw(16)<<"|"<<setw(7)<<"|";
				cout <<"\n\t    |"<<setw(10)<<"      | Emisha  Hotel |      |\tPress (w) to go up and (s) to go down";
				cout<<"\n\t    |______|_______________|______|\t(Press enter) to see floorplan. (m) to quit";
				cout <<"\n\t    |"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|";
				cout <<"\n\t    |"<<setw(10)<<"         |  Third  |"<<setw(10)<<"|";
				cout <<"\n\t    |"<<setw(10)<<"         |  Level  |"<<setw(10)<<"|";
				cout<<"\n\t |__|_________|_________|_________|__|";
				cout <<"\n\t    |"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|";
				cout <<"\n\t    |"<<setw(10)<<"         | Second  |"<<setw(10)<<"|";
				cout <<"\n\t    |"<<setw(10)<<"         |  Level  |"<<setw(10)<<"|";
				cout<<"\n\t |__|_________|_________|_________|__|";
				cout <<"\n\t    |"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|";
				cout <<"\n\t    |"<<setw(10)<<"         |  First  |"<<setw(10)<<"|";
				cout <<"\n\t    |"<<setw(10)<<"         |  Level  |"<<setw(10)<<"|"<<setw(10)<<"<----";
				cout<<"\n\t____|_________|_________|_________|____";
				cout <<"\n\t |  |"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|";
				cout <<"\n\t |  |"<<setw(10)<<"         | Ground  |"<<setw(10)<<"|";
				cout <<"\n\t |  |"<<setw(10)<<"         |  Level  |"<<setw(10)<<"|";
				cout<<"\n\t |  |_________|_________|_________|________  Beach        Ocean";//4 space depan
				cout<<"\n\t"<<setw(68)<<"---------~~~~~~~~~~~~~~~~";
				}
					if(q==3){
				system("cls");
				cout<<"\n\t_______________________________________";
				cout <<"\n\t    |"<<setw(7)<<"|"<<setw(16)<<"|"<<setw(7)<<"|";
				cout <<"\n\t    |"<<setw(10)<<"      | Emisha  Hotel |      |\tPress (w) to go up and (s) to go down";
				cout<<"\n\t    |______|_______________|______|\t(Press enter) to see floorplan. (m) to quit";
				cout <<"\n\t    |"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|";
				cout <<"\n\t    |"<<setw(10)<<"         |  Third  |"<<setw(10)<<"|";
				cout <<"\n\t    |"<<setw(10)<<"         |  Level  |"<<setw(10)<<"|";
				cout<<"\n\t |__|_________|_________|_________|__|";
				cout <<"\n\t    |"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|";
				cout <<"\n\t    |"<<setw(10)<<"         | Second  |"<<setw(10)<<"|";
				cout <<"\n\t    |"<<setw(10)<<"         |  Level  |"<<setw(10)<<"|"<<setw(10)<<"<----";
				cout<<"\n\t |__|_________|_________|_________|__|";
				cout <<"\n\t    |"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|";
				cout <<"\n\t    |"<<setw(10)<<"         |  First  |"<<setw(10)<<"|";
				cout <<"\n\t    |"<<setw(10)<<"         |  Level  |"<<setw(10)<<"|";
				cout<<"\n\t____|_________|_________|_________|____";
				cout <<"\n\t |  |"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|";
				cout <<"\n\t |  |"<<setw(10)<<"         | Ground  |"<<setw(10)<<"|";
				cout <<"\n\t |  |"<<setw(10)<<"         |  Level  |"<<setw(10)<<"|";
				cout<<"\n\t |  |_________|_________|_________|________  Beach        Ocean";//4 space depan
				cout<<"\n\t"<<setw(68)<<"---------~~~~~~~~~~~~~~~~";
				}
					if(q==4){
				system("cls");
				cout<<"\n\t_______________________________________";
				cout <<"\n\t    |"<<setw(7)<<"|"<<setw(16)<<"|"<<setw(7)<<"|";
				cout <<"\n\t    |"<<setw(10)<<"      | Emisha  Hotel |      |\tPress (w) to go up and (s) to go down";
				cout<<"\n\t    |______|_______________|______|\t(Press enter) to see floorplan. (m) to quit";
				cout <<"\n\t    |"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|";
				cout <<"\n\t    |"<<setw(10)<<"         |  Third  |"<<setw(10)<<"|";
				cout <<"\n\t    |"<<setw(10)<<"         |  Level  |"<<setw(10)<<"|"<<setw(10)<<"<----";
				cout<<"\n\t |__|_________|_________|_________|__|";
				cout <<"\n\t    |"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|";
				cout <<"\n\t    |"<<setw(10)<<"         | Second  |"<<setw(10)<<"|";
				cout <<"\n\t    |"<<setw(10)<<"         |  Level  |"<<setw(10)<<"|";
				cout<<"\n\t |__|_________|_________|_________|__|";
				cout <<"\n\t    |"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|";
				cout <<"\n\t    |"<<setw(10)<<"         |  First  |"<<setw(10)<<"|";
				cout <<"\n\t    |"<<setw(10)<<"         |  Level  |"<<setw(10)<<"|";
				cout<<"\n\t____|_________|_________|_________|____";
				cout <<"\n\t |  |"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|";
				cout <<"\n\t |  |"<<setw(10)<<"         | Ground  |"<<setw(10)<<"|";
				cout <<"\n\t |  |"<<setw(10)<<"         |  Level  |"<<setw(10)<<"|";
				cout<<"\n\t |  |_________|_________|_________|________  Beach        Ocean";//4 space depan
				cout<<"\n\t"<<setw(68)<<"---------~~~~~~~~~~~~~~~~";
				}
				key = _getch();
				if(key=='w'){
				q++;}
				if(key=='s'){
				q--;}
				if(key=='m'){
				break;}
				if(q==5){
				q=4;}
				if(q==0){
				q=1;}
				if(key=='\r'){
					if(q==1){
					}
	}
}

