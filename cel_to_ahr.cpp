//program to convert degree celsius to fahrenheit
#include<iostream>
using namespace std;

int main(){
	float cel,fahr;
	cout<<"Enter the temperature in degree celsius: \n";
	cin>>cel;
	fahr=(cel*9/5)+32;
	cout<<"The temperature in hahrenheit is: "<<fahr<<endl;
    return 0;
}
