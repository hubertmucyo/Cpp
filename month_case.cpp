//print name of a month in accordance to integer input from 1-12
#include<iostream>
using namespace std;

int main(){
	int month;
	cout<<"ENTER AN INTEGER BETWEEN 1-12: \n";
	cin>>month;
	cout<<"The month equivalent is: \n";
	switch (month){
		case 1:
			cout<<"JAN\n";
			break;
		case 2:
			cout<<"FEB\n";
			break;
		case 3:
			cout<<"MARCH\n";
			break;
		case 4:
			cout<<"APRIL\n";
			break;
		case 5:
			cout<<"MAY\n";
			break;		
		case 6:
			cout<<"JUNE\n";
			break;
		case 7:
			cout<<"JULY\n";
			break;
		case 8:
			cout<<"AUG\n";
			break;
		case 9:
			cout<<"SEPT\n";
			break;	
		case 10:
			cout<<"OCT\n";
			break;
		case 11:
			cout<<"NOV\n";
			break;	
		case 12:
			cout<<"DEC\n";
			break;	
		default:
			cout<<"Invalid Input!\n";
			break;	
		}
    return 0;
}
