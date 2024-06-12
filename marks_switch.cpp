//marks category using switch
#include<iostream>
using namespace std;

int main(){
	int marks;
	cout<<"Enter your marks out of 100: \n";
	cin>>marks;
	switch(marks/10){
		case 10:
		case 9:
		case 8:
			cout<<"A\n";
			break;
		case 7:
			cout<<"B\n";
			break;
		case 6:
			cout<<"C\n";
			break;
		default:
			cout<<"D\n";
			break;	
	}
    return 0;
}
