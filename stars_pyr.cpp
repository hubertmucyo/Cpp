//program to print stars in a half pyramid
#include<iostream>
using namespace std;
int main(){
	int rows;
	cout<<"Enter the number of rows:\n";
	cin>>rows;
	for(int j=1;j<=rows;j++){
		for(int i=1;i<=j;i++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
