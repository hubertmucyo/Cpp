//program to print biggest number between two num inputs
#include<iostream>
using namespace std;

int main(){
	float num1,num2;
	cout<<"Enter two numbers: \n";
	cin>>num1>>num2;
	if(num1>num2)
		cout<<"The biggest number is: "<<num1<<endl;
	else 
		cout<<"The biggest number is: "<<num2<<endl;
    return 0;
}
