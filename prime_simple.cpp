//program to check if a number is a prime or not
#include<iostream>
using namespace std;
int main(){
	int num;
	bool prime=true;
	cout<<"Enter a number:\n";
	cin>>num;
	if(num<2)
		prime=false;
	for(int i=2;i<num;i++){
		if(num%i==0){
			prime=false;
		}
		else{
			prime;
		}
	}
	if (prime){
		cout<<"It is a prime number!\n";
	}
	else {
		cout<<"It is not a prime!\n";
	}
	return 0;
}
