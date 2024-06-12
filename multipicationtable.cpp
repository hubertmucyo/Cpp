//What about a multiplication table to the number user wants????
#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Set a number for multiplication table to reach: ";
	cin>>num;
	cout<<endl<<"Multiplication Table: \n";
	for(int i=1;i<=num;i++){
		cout<<i<<"*"<<num<<"="<<num*i<<endl;
	}
    return 0;
}
