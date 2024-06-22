/**A program that collects positive integers from the user, stopping when the user enters a negative number
  or zero, After that output the product of all positive entries **/

#include<iostream>
using namespace std;

int main(){
	int numbers,product=1;
	do {
		cout<<"Enter positive integers :\n";
		cin>>numbers;
		if(numbers<=0)
			continue;
		product=product*numbers;
	}while(numbers>0);
	
	cout<<"The product of the entered integers is:"<<product<<endl;
	
	return 0;
}
