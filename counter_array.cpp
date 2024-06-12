#include<iostream>
using namespace std;

int main(){
	int arr[20],positive_nums=0,negative_nums=0,odds=0,even=0,zeros=0;
	cout<<"Enter twenty numbers:\n";
	for(int i=0;i<20;i++){
		cin>>arr[i];
	}
	for(int i=0;i<20;i++){
		if(arr[i]>0){
			positive_nums++;
		}
		else if(arr[i]<0){
			negative_nums++;
		}
		else{
			zeros++;
		}
}
	for(int i=0;i<20;i++){
		if(arr[i]%2==0){
			odds++;
		}
		else{
			even++;
		}
	}
	cout<<"The count of positive integers is: "<<positive_nums<<endl;
	cout<<"The count of negative integers is: "<<negative_nums<<endl;
	cout<<"The count of odd integers is: "<<odds<<endl;
	cout<<"The count of even integers is: "<<even<<endl;
	cout<<"The count of zeroes is: "<<zeros<<endl;
	return 0;
}
