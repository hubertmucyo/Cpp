//program to reverse a given integer
#include<iostream>
using namespace std;
int main(){
	int integer,num,reversed=0;
	cout<<"Enter an integer: \n";
	cin>>integer;
	num=integer;
	while(integer!=0){
		int digit=integer%10;//extract the last digit
		reversed=reversed*10+digit;//append the last digit to reversed new number
		integer/=10;
	}
	cout<<"The number entered is: "<<num<<endl;
	cout<<"The reversed number is:\n"<<reversed<<endl;
	
}
