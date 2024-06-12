//program to print biggest num among 3 inputs
#include<iostream>
using namespace std;

int main(){
	float num1,num2,num3;
	cout<<"Enter three numbers: \n";
	cin>>num1>>num2>>num3;
	cout<<"The biggest number is: ";
	if (num1>num2 && num1>num3)
		cout<<num1;
	else if (num2>num1 && num2>num3)
		cout<<num2;
	else if (num3>num1 && num3>num2)
		cout<<num3;
	else if (num1==num2 || num1==num3 || num2==num3)
		cout<<num1;
	else
		cout<<"No biggest number! The numbers are equal! \n";
    return 0;
}
