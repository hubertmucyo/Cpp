//program that displays km/hr and miles/hr
#include<iostream>
using namespace std;

int main(){
	float dist,miles=0,speed=0,speed2=0,time;
	cout<<"Enter the distance travelled in KM: \n";
	cin>>dist;
	cout<<"Enter the time taken to cover the distance in hrs:\n";
	cin>>time;
	speed=dist/time;
	cout<<"The speed in km/hr is: ";
	cout<<speed<<"KM/hr"<<endl;
	miles=dist*0.621371;
	speed2=miles/time;
	cout<<"The speed in miles/hr is: \n";
	cout<<speed2<<"miles/hr";
    return 0;
}
