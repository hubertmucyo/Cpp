//program to print grade of a given mark
#include<iostream>
using namespace std;

int main(){
	float marks;
	cout<<"Enter your marks out of 100% to see your Grade: \n";
	cin>>marks;
	if (marks>=75 && marks <=100){
		cout<<"Grade A\n";
	}
	else if(marks>=60 && marks<75){
		cout<<"Grade B\n";
	}
	else if(marks>=40 && marks<60){
		cout<<"Grade C\n";
	}
	else if(marks<40){
		cout<<"Failed!\n";
	}
	else {
		cout<<"Invalid input\n";
	}
    return 0;
}
