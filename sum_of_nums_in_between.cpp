//program that prints the sum of all numbers in between a given range of 2 numbers entered by the user
#include<iostream>
using namespace std;
int sum_of_to(int first,int last);
int main(){
	int num1,num2;
	cout<<"Enter two numbers:\n";
	cin>>num1>>num2;
	cout<<"The sum of the numbers in between the numbers provided(Included) is:\n";
	cout<<sum_of_to(num1,num2);
	return 0;
}
int sum_of_to(int first,int last){
	int sum=0;
	for(int i=first;i<=last;i++){
		sum=sum+i;
	}
	return sum;
}
