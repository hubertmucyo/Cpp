//program that calculates quadratic equation
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,c;
	float root1=0,root2=0,delta=0;
	cout<<"Enter three coefficients of your equation:\n";
	cin>>a>>b>>c;
	delta=sqrt((b*b)/(4*a*c));
	if (delta>0){
		root1=(-b+delta)/(2*a);
		root2=(-b-delta)/(2*a);	
		cout<<"1st root: "<<root1<<endl;	
		cout<<"2nd root: "<<root2;
	}
	else if(delta=0){
		root1=(-b)/(2*a);
		root2=root1;
		cout<<"1st root: "<<root1<<endl;
		cout<<"2nd root: "<<root2;
	}
	else{
		cout<<"Error!!!!!!!\n";
	}
	return 0;
}
