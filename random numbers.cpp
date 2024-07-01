//C++ program to guess a number from 1 to 10 and if he wins he gets 10 times his bet

#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int num,bet_num; 
	string play;
	double amount;
	cout<<"------WELCOME TO THE GAME------\n\n\n";
	game:
		cout<<"PLace your bet: \n";
		cin>>amount;
		cout<<"Enter a number between 1 and 10:\n";
		cin>>num;
		bet_num=5;
		if(num==bet_num){
			cout<<"YOU HAVE WON!!!\n";
			cout<<"Your winnings are: "<<amount*10<<endl;
		}
		else{
			cout<<"YOU HAVE LOST!!!\n";
		}
	cout<<"Do you want to continue playing the gamme? [y/n]\n";
	cin>>play;
	if(play=="y" || play=="Y" || play=="yes" || play=="YES" || play=="Yes"){
		system("cls");
		goto game;
	}
	else{
		cout<<"Thanks for playing!!!\n";
	}
	return 0;
}
