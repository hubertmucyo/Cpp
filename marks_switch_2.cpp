//program that displays message according to marks
#include<iostream>
using namespace std;
int main(){
	int marks;
	cout<<"Enter marks out of 100: \n";
	cin>>marks;
	switch(marks/10){
		case 10:
			cout<<"Superb!\n";
			break;
		case 9:
			cout<<"Excellent\n";
			break;
		case 8:
			cout<<"Very Good\n";
			break;
		case 7:
			cout<<"Good\n";
			break;
		case 6:
			cout<<"Average\n";
			break;
		case 5:
			cout<<"Weak\n";
			break;
		case 4:
			cout<<"Weak\n";
			break;
		case 3:
			cout<<"Weak\n";
			break;
		case 2:
			cout<<"Weak\n";
			break;
		case 1:
			cout<<"Weak\n";
			break;
		case 0:
			cout<<"Weak\n";
			break;
		default:
			cout<<"Invalid input !!!\n";
			break;
	}
}
