//program that prints perimeter of a circle
#include<iostream>
using namespace std;

int main(){
	float perimeter,radius;
	const float pi=3.14159;
	cout<<"Enter the value of radius: ";
	cin>>radius;
	cout<<endl;
	perimeter=2*radius*pi;
	cout<<"the perimeter is: "<<perimeter;
	cout<<endl;
    return 0;
}
