/** A program to take 3 user inputts and find the middle number**/
#include<iostream>
using namespace std;

int main(){
	int nums[3],swap;
	cout<<"Enter three integers:  ";
	for(int i=0;i<3;i++){
		cin>>nums[i];
	}
	
	for(int i=0;i<3;i++){
		for(int j=i+1;j<3;j++){
			if(nums[j]<nums[i]){
				swap=nums[j];
				nums[j]=nums[i];
				nums[i]=swap;
			}
		}
	}
	cout<<"The new order is: \n";
	for(int i=0;i<3;i++){
		cout<<nums[i];
	}
	
	cout<<"\n\nThe middle number is:"<<nums[1]<<endl;
	
	return 0;
}

