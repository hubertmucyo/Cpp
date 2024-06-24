#include<iostream>
using namespace std;

int location_of_largest(int array[], int index){
	int large_sub=0;
	for(int i=0;i<index;i++){
		if(array[i]>array[large_sub]){
			large_sub=i;
		}
	}
	
	return large_sub;
}


int main(){
	int size,arr[size];
	cout<<"Enter the size of the array:\n";
	cin>>size;
	cout<<"Enter the elements of the array:\n";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<"The subscript of the largest number is: "<<location_of_largest(arr,size)<<endl;
	return 0;
}
