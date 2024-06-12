//program accepts any character and categorizes the char
#include<iostream>
using namespace std;

int main(){
	char ch;
	cout<<"Enter any character: \n";
	cin>>ch;
	if (ch>='A' && ch<='Z'){
		cout<<"Uppercase. \n";
	}
	else if (ch>='a' && ch<='z'){
		cout<<"Lowercase. \n";
	}
	else if (ch>='0' && ch<='9' ){
		cout<<"Number. \n";
	}
	else {
		cout<<"Special character!\n";
	}
    return 0;
}
