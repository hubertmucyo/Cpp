//program that checks if it is a leap year
#include<iostream>
using namespace std;
int main(){
	int year;
	cout<<"enter the year: \n";
	cin>>year;
	if ((year%4==0 && year%100!=0) || (year%400==0)){
		cout<<"It is a leap year!\n";
}
	else if (year%4!=0 || year%400!=0){
		cout<<"It is not a leap year!\n";
	}
	else{
		cout<<"Invalid Input!\n";
	}
	return 0;
}
