//program to find max and min number among an array of 10 elements
#include<iostream>
using namespace std;

int main(){
	int num[10];
	cout<<"Enter 10 numbers:\n";
	for(int i=0;i<10;i++){
		cin>>num[i];
	}
	
	//print the integers
	cout<<"\n The numbers are: \n";
	for(int i=0;i<10;i++){
		cout<<num[i]<<endl;
	}
	//calculate largest number
	int largest=num[0];
	for(int i=0;i<10;i++){
		if(num[i]>largest){
			largest=num[i];
		}
	}
	cout<<"The largest number is:\n";
	cout<<largest<<endl;
	
	//calculate smallest number
	int smallest=num[0];
	for(int i=0;i<10;i++){
		if(num[i]<smallest){
			smallest=num[i];
		}
	}
	cout<<"The smallest number is:\n";
	cout<<smallest<<endl
	;
	return 0;
}
