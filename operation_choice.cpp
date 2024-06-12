//accept operator and 2 operands and performs operations
#include<iostream>
using namespace std;

int main(){
	int choice;
	float num1,num2;
start:	
	cout<<"Choose operator among these: \n";
	cout<<"1. Addition \n 2. Substraction \n 3. multiplication \n 4. division \n";
	cin>>choice;
	cout<<"Enter two numbers: \n";
	cin>>num1>>num2;
	if (choice==1){
		cout<<"The sum is: "<<num1+num2;
	}
	else if (choice==2){
		cout<<"The difference is: "<<num1-num2;
	}
	else if (choice==3){
		cout<<"The product is: "<<num1*num2;
	}
	else if (choice==4){
		cout<<"The quotient is: "<<num1/num2;
	}
	else {
		cout<<"Retry!\n";
		goto start;
	}
    return 0;
}
