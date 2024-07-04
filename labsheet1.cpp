//labsheet 1 recap

#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<string>
#include<cmath>
#include<utility>

using namespace std;

string hello(){
	return "Hello World!!!\n";
}

void output(float n,float n1){
	cout<<"The numbers you entered are:\n"<<n<<" "<<n1<<endl;
}

void checker(float n,float m){
	if(int(n)%2==0 && int(m)%2==0){
		cout<<n<<" and "<<m<<" are even \n";
	}
	else if(int(n)%2!=0 && int(m)%2!=0) {
		cout<<n<<" and "<<m<<" are odd \n";
	}
	else if(int(n)%2==0 && int(m)%2!=0){
		cout<<n<<"is even "<<" and "<<m<<" is odd \n";
	}
	else if(int(n)%2!=0 && int(m)%2==0){
	cout<<m<<"is even "<<" and "<<n<<" is odd \n";
	}
	else{
		cout<<n<<" and "<<m<<" are zero\n";
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
	
	return 0;
}
