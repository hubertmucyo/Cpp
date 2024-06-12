//Program to Find ASCII Value of a Character
#include<iostream>
using namespace std;
int main(){
	char ch;
	int ascii;
	start:
	cout<<"Enter any character:\n";
	cin>>ch;
	ascii=ch;
	cout<<"The ASCII value of "<<ch<<" is: "<<ascii<<endl;
	goto start;
	return 0;
}
