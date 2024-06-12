//program function to check if num is prime to return 1 and if not return 0
#include<iostream>
using namespace std;
int is_prime(int n){
	if(n<2){
		return 0;
	}
	else{
    	for(int i=2;i<n;i++){
    		if (n%i==0)
    			return 0;
			else
				return 1;
		}
	}
}
int main(){
	int num;
	cout<<"Enter any number:\n";
	cin>>num;
	cout<<is_prime(num);
	return 0;
}
