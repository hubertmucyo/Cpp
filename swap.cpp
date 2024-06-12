//a program that swaps 2 numbers
#include<iostream>
using namespace std;

int main(){
	float num1=0,num2=0,swap;
	cout<<"Enter the first number: ";
	cin>>num1;
	cout<<"\n";
	cout<<"Enter the second number: ";
	cin>>num2;
	cout<<"\n";
	swap=num1;
	num1=num2;
	num2=swap;
	cout<<"The first num is: "<<num1<<endl;
	cout<<"The second num is: "<<num2<<endl;
    return 0;
}
