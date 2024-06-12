//program to find greatest GCD
#include<iostream>
using namespace std;
int main(){
	int num1,num2,gcd=0;
	cout<<"Enter the first number: \n";
	cin>>num1;
	cout<<"Enter the second number: \n";
	cin>>num2;
	for(int i=1;i<=num2;i++){
		if(num2%i==0&&num1%i==0){
			gcd=i;
		}
	}
	cout<<"The greatest common dividor is: "<<gcd<<endl;
}
