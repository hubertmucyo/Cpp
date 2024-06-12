#include<iostream>
using namespace std;
int main(){
	int arr[10];
	int reverse_arr[10];
	cout<<"Enter 10 integers:\n";
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}
	/**reverse_arr[9] = arr[0]
		reverse_arr[8] = arr[1]
		reverse_arr[i+1] = arr[j-1]
	**/
	for(int i=9,j=0;i>=0;i--){
		reverse_arr[i]=arr[j];
		j++;
	}
	cout<<"The array in reverse: \n";
	for(int i=0;i<10;i++){
		cout<<reverse_arr[i]<<" ";
	}	
	return 0;
}
