//program to print all prime numbers between two intervals
#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	bool prime=true;
	cout<<"Enter 2 numbers in ascending order!\n";
	cin>>num1>>num2;
	for( ;num1<num2;num1++){
		if(num2%num1==0){
			prime=false;
		}
		else{
			cout<<num1;
		}
	}
}
