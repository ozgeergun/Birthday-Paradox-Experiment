#include <cstdlib> 
#include <ctime> 
#include <iostream>
using namespace std;
int daysOfMonths[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
int month,date;
int birthdays[31][12]; 
int numberOfSame;

void birthdayGenerator(){
	srand((unsigned)time(0));
	cout<<"Random generated birthdays\n";
	cout<<"--------------------------\n";
	for(int i=0;i<100;++i){
	month = (rand()%12)+1; //generating random birthdays
	date = (rand()%daysOfMonths[month-1])+1;
	cout<<date<<"."<<month<<endl;
	++birthdays[date][month]; //number of the same birthday-counter
}
}
void print(){
	cout<<"\n\nThe results of experiment\n";
	cout<<"-------------------------"<<endl;
	for(int b=0;b<=11;++b){ //printing the same birthdays
		for(int a=0;a<=30;++a){
			if(birthdays[a][b]>0 && a!=0 && b!=0){
				numberOfSame+=birthdays[a][b];
				if(a<10 && b<10){
					cout<<a<<"."<<b<<": ";
					cout<<birthdays[a][b]<<endl;
				}
				else{
					cout<<a<<"."<<b<<":";
					cout<<birthdays[a][b]<<endl;
				}
			}
		}
	}
	cout<<"\n"<<numberOfSame<<" is the total number of birthdays that are listed above.\n";
}

int main(){


for(int z=0;z<=11;++z){ //assigning -1 to all of the elements of birthdays[] because n people --> n-1 birthdays.
	for(int y=0;y<=30;++y){
		birthdays[y][z]=-1;
	}
}
birthdayGenerator();
print();
}
