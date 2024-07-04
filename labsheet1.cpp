//labsheet 1 recap

#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<string>
#include<cmath>
#include<utility>

using namespace std;

string hello(){
	return "Hello World!!!\n\n";
}

void output(float n,float n1){
	cout<<"The numbers you entered are:\n"<<n<<" "<<n1<<endl;
}

void checker(float n,float m){
	if(int(n)%2==0 && int(m)%2==0){
		cout<<n<<" and "<<m<<" are even \n\n";
	}
	else if(int(n)%2!=0 && int(m)%2!=0) {
		cout<<n<<" and "<<m<<" are odd \n\n";
	}
	else if(int(n)%2==0 && int(m)%2!=0){
		cout<<n<<"is even "<<" and "<<m<<" is odd \n\n";
	}
	else if(int(n)%2!=0 && int(m)%2==0){
	cout<<m<<"is even "<<" and "<<n<<" is odd \n\n";
	}
	else{
		cout<<n<<" and "<<m<<" are zero\n\n";
	}
}

float adder(float n1,float n2){
	return n1+n2;
}

pair <float,float> swap(float n, float n1){
	float sum=n+n1;
	n=sum-n;
	n1=sum-n1;
	return make_pair(n,n1);
} 

pair <float,float> compute(float a,float b){
	float rem;
	float quotient;
	quotient=a/b;
	rem=int(a)%int(b);
	return make_pair(quotient,rem);
}

int main(){
	float num1,num2;
	cout<<"Enter two numbers:\n";
	cin>>num1>>num2;
	cout<<hello();
	output(num1,num2);
	checker(num1,num2);
	cout<<"The sum is:\n";
	cout<<adder(num1,num2);
	getch();
	system("cls");
	cout<<"Let us swap!\n";
	output(num1,num2);
	cout<<"The numbers after swaping are:\n";
	pair<float,float>result=swap(num1,num2);
	cout<<result.first<<" "<<result.second<<endl;
	
	cout<<"\nLet us compute the quotient and remainder!\n";
	pair<float,float>computer=compute(num1,num2);
	cout<<"The quotient is: "<<computer.first<<endl;
	cout<<"The remainder is: "<<computer.second<<endl;
	
	int num3;
	cout<<"Enter the third number: ";
	cin>>num3;
	output(num1,num2);
	cout<<num3;
	
	return 0;
}
