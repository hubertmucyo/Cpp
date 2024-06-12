// Program to Check Whether a Number is Palindrome or Not.
#include <iostream>
using namespace std;
int main(){
	int pal,reversed_pal=0;
	cout<<"This program checks if a number provided is a palindome\n";
	cout<<"Enter a palindrome: \n";
	cin>>pal;
	int i=pal;
	while(i!=0){
		int rem=i%10;
		reversed_pal=reversed_pal*10+rem;
		i/10;
	}
	//check if pal==rev_pal
	if(pal==reversed_pal)
		cout<<"The number is a palindrome!\n";
	else
		cout<<"The number provided isn't a palidrome!\n";
	
	return 0;
}
