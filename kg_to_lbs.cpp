//program to convert KG into Lbs
#include<iostream>
using namespace std;

int main(){
	const float fix=2.2046;
	float kg,lbs=0;
	cout<<"convert KG into Lbs.\n";
	cout<<"Enter the weight in KG:";
	cin>>kg;
	lbs=kg*fix;
	cout<<"The weight in pounds is: ";
	cout<<lbs<<"lbs\n";
    return 0;
}
