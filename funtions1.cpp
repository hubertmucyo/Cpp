#include<iostream>
#include<cmath>
using namespace std;

void input(double &a, double &b){
	cout<<"Enter the first number: ";
	cin>>a;
	cout<<"Enter the second number: ";
	cin>>b; 
}

double sum(double a,double b){
	return a+b;
}

int main(){
	double result;
	double num1,num2;
	input(num1,num2);
	result=sum(num1,num2);
	cout<<"The sum is: "<<result<<endl;
	system("pause");
	return 0;
}
