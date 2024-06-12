//this program simply finds the factorial of an integer
#include<iostream>
using namespace std;

int main(){
	int num;
	long factorial=1;
	cout<<"Enter a positive whole number: ";
	cin>>num;
	cout<<"\n";
	if(num<0){
		cout<<"The factorial of a negative doesn't exist!\n";
	}
	else {
		for(int i=1;i<=num;i++){
			factorial *=i;
		}
		cout<<"The factorial of "<<num<<" is: "<<factorial<<endl;
	}
    return 0;
}
