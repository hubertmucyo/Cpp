//using loop
#include<iostream>
using namespace std;
int main(){
	float num,power=1;
	int exp;
	cout<<"Enter a number base: \n";
	cin>>num;
	cout<<"Enter the exponent\n";
	cin>>exp;
	for(int i=1;i<=exp;i++){
		power=power*num;
	}
	cout<<"The power of is: "<<power<<endl;
	return 0;
}
