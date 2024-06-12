//program function to return true if character is a vowel and false otherwise
#include<iostream>
using namespace std;
bool getchar(char letter);
int main(){
	char l;
	cout<<"Enter any character:\n";
	cin>>l;
	if (getchar(l)==1)//l has value of 1
		cout<<"True\n";
	else 
		cout<<"False\n";//l has value of 0
	return 0;
} 
//function takes a character and using cases; it checks if it is a vowel to return true else it returns false
bool getchar(char letter){
	switch(letter){
		case 'A':
		case 'a':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'U':
		case 'u':
		case 'o':
		case 'O':
			return true;//return will be 1
			break;
		default:
			return false;//return will be 0
			break;
	}
}
