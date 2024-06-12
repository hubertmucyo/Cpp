//porgram to add digits of a number
#include<iostream>
using namespace std;
int main(){
	int integer,num,sum=0;
	cout<<"Enter an integer: \n";
	cin>>integer;
	num=integer;
	while(integer!=0){
		int digit=integer%10;//extract the last digit
		sum=sum+digit;//add digits to sum
		integer/=10;
	}
	cout<<"The number entered is: "<<num<<endl;
	cout<<"The sum of the digits is:\n"<<sum<<endl;
	
}
