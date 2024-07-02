//program to divide houses to children

#include<iostream>
using namespace std;

int main(){
	int num;
	string house;
	prompt:
		cout<<"Enter your student number:\n";
		cin>>num;
	if(num<0 || num>183){
		cout<<"Number should be between 1 and 183!\n";
		goto prompt;
	}
	else if(num<=183 && num>0){
		if(num%3==1){
			house="Olu";
		}
		else if(num%3==2){
			house="Nelum";
		}
		else{
			house="Manel";
		}
	}
	else{
		cout<<"Invalid Input!!\n";
		goto prompt;
	}
	
	cout<<"Your house is: "<<house<<endl;
	
	return 0;
}
