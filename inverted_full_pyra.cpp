//print inverted full pyramid
#include<iostream>
using namespace std;
int main(){
	int rows;
	cout<<"Enter rows:\n";
	cin>>rows;
	//print rows
	for(int i=rows;i>=1;i--){
		//print spaces
		for(int j=1;j<=rows-i;j++){
			cout<<" ";
		}
		//print star *********
		for(int k=1;k<=(2*i)-1;k++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
