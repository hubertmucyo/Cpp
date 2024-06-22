//program that calculates quadratic equation
#include<iostream>
#include<cmath>
using namespace std;

float root1=0,root2=0,delta=0;

void discriminant(){
	delta=sqrt((b*b)/(4*a*c));
	if (delta>0){
		root1=(-b+delta)/(2*a);
		root2=(-b-delta)/(2*a);	
		cout<<"1st root: "<<root1<<endl;	
		cout<<"2nd root: "<<root2;
	}
	else if(delta==0){
		root1=(-b)/(2*a);
		root2=root1;
		cout<<"1st root: "<<root1<<endl;
		cout<<"2nd root: "<<root2;
	}
	else if(delta<0){
		cout<<"1st root: "<<(-b/2*a)<<"+i"<<(sqrt(-(b*b-(4*a*c)))/2*a)<<endl;
		cout<<"2nd root: "<<(-b/2*a)<<"-i"<<(sqrt(-(b*b-(4*a*c)))/2*a)<<endl;
	}

}

int main(){
	int a,b,c;
	cout<<"Enter three coefficients of your equation:\n";
	cin>>a>>b>>c;
	discriminant();
	
	return 0;
}
