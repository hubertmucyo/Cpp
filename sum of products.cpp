#include<iostream>
using namespace std;

int main(){
	double num;
	int sum=0;
	cout<<"Input value of the nth term:\n";
	cin>>num;

	cout<<"The series are:\n";
	for(int i=1;i<=int(num);i++){
		cout<<i<<" * "<<i<<" = "<<i*i<<endl;
		sum=sum+(i*i);
	}
	cout<<"The sum of the series is: "<<sum;
	
	return 0;
}
