//program to print numbers in half pyramid
#include<iostream>
using namespace std;
int main(){
	int row;
	cout<<"Enter the number of rows:\n";
	cin>>row;
	for(int j=1;j<=row;j++){
		for(int i=1;i<=j;i++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
