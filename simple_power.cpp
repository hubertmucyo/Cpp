//program takes base number and exponent to calculate power
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float base,power=0;
	int exp;
	start:
	cout<<"\nEnter a number: \n";
	cin>>base;
	cout<<"Enter the exponent: \n";
	cin>>exp;
	power=pow(base,exp);
	cout<<"The power of the number is: \n";
	cout<<power;
	goto start;
	return 0;
}
