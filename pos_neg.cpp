//see if num is +ive,-ive or zero
#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter a number: \n";
	cin>>num;
	if(num>0)
		cout<<"the number is positive!\n";
	else if(num<0)
		cout<<"The number is negative!\n";
	else if(num==0)
		cout<<"it is a zero!\n";
	else
		cout<<"Invalid\n";
    return 0;
}
