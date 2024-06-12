//menu driven program to check if number provided is odd,even or prime!
#include<iostream>
using namespace std;

int choice;
int number;

void checker();
void prime(){
	bool prime;
	if(number=2){
		prime=true;
	}
	else if(number>2){
		for(int i=2;i<number;i++){
			if(number%i==0){
				prime=false;
			}
			else{
				prime=true;
			}
		}
	}
	if(prime==1){
		cout<<"The number is a prime\n";
	}
	else{
		cout<<"the number isn't a prime\n";
}
}

void main_menu(){
	do{
	cout<<"------CHoose to check any type of number is provided!----\n";
	cout<<"[1] Odd\n";
	cout<<"[2] Even\n";
	cout<<"[3] Prime\n";
	cout<<"[4] Exit\n";
	cin>>choice;
	switch(choice){
	case 1:
	case 2:
	case 3:
		checker();
		break;
	case 4:
		cout<<"Exiting!!\n";
		break;
	default:
		cout<<"Invalid input....Please re-enter the acceptable value!!\n";
}
}while(choice!=4);
}
void checker(){
	cout<<"ENter a number:\n";
	cin>>number;
	if(number%2!=0){
		cout<<"The number you entered is odd\n";
		prime();
	}
	else if(number%2==0){
		cout<<"The number you entered is even\n";
	}
	}
int main(){
	main_menu();
	return 0;
}
