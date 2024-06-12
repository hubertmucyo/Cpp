//program to print inverted half pyramid
#include<iostream>
using namespace std;
int main(){
	int rows;
	cout<<"Enter number of rows for the inverted half pyramid:\n";
	cin>>rows;
	for(int j=rows;j>=1;j--){
		for(int i=1;i<=j;i++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
