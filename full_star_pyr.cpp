//program to print full star pyramid
#include<iostream>
using namespace std;
int main(){
	int rows;
	cout<<"Enter the number of rows of the pyramid:\n";
	cin>>rows;
	for(int i=1;i<=rows;i++){
		//print spaces
		for(int j=1;j<=rows-i;j++){
			cout<<" ";
		} 
		//print star ******
		for (int k=1;k<=(2*i)-1;k++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
