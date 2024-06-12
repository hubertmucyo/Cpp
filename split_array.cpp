#include<iostream>
using namespace std;
int main(){
	int arr[10];
	int first_part[5];
	int second_part[5];
	cout<<"Enter 10 integers:\n";
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}
	cout<<"The first array is:\n";
	for(int i=0;i<5;i++){
		first_part[i]=arr[i];
		cout<<first_part[i]<<" ";
	}
	cout<<"\nThe second array is:\n";
	for(int i=5;i<10;i++){
		second_part[i]=arr[i];
		cout<<second_part[i]<<" ";
	}
	return 0;
}
