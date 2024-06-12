//program that prints quotient and remainder of 2 numbers
#include<iostream>
using namespace std;

int main(){
	int a,b,quotient,rem;
	cout<<"Enter the first num: ";
	cin>>a;
	cout<<"\n";
	cout<<"ENter the second num: ";
	cin>>b;
	cout<<"\n";
	quotient=a/b;
	rem=a%b;
	cout<<"The quotient is: "<<quotient<<endl;
	cout<<"the remainder is: "<<rem;
    return 0;
}
