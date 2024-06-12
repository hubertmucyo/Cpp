//calculates perimeter and area of a circle
#include<iostream>
using namespace std;

int main(){
	float r,per=0,area=0;
	const float pi=3.14159;
	cout<<"Enter radius of a circle: \n";
	cin>>r;
	per=2*pi*r;
	area=pi*r*r;
	cout<<"The perimeter is: "<<per<<endl;
	cout<<"The area is: "<<area<<endl;
    return 0;
}
