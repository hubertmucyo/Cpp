//check if char is vowel or cons
#include<iostream>
using namespace std;

int main(){
	char ch;
	cout<<"Enter a character: \n";
	cin>>ch;
	switch (ch){
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
		case 'i':
		case 'I':
			cout<<"IT is a vowel!\n";
			break;
		default:
			cout<<"it is a consonant!\n";
			break;
	}
    return 0;
}
