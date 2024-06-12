#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter number of elements:\n";
	cin>>num;
	int arr[num];
	cout<<"Enter the array integers:\n";
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	cout<<"The reverse is:\n";
	for(int i=num-1;i>=0;i--){
		cout<<arr[i]<<" ";
	}	
	return 0;
}
