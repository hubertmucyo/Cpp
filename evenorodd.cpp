//check if num is even or odd
#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter a number: \n";
	cin>>num;
	if(num%2==0){
		cout<<"the number is even!\n";
	}
	else if(num%2!=0){
		cout<<"the number is odd!\n";
	}
	else {
		cout<<"Invalid input!\n";
	}
    return 0;
}
