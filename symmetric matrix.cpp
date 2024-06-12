//check is the matrix is symmetric
#include<iostream>
using namespace std;

int main(){
	int matrix[3][3];
	bool ans;
	cout<<"Enter the values of the matrix:\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>matrix[i][j];
		}
    }
	cout<<"The array stored is:\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"After transposing:\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matrix[j][i]<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(matrix[j][i]!=matrix[i][j]){
				ans=false;
			}
			else{
				ans=true;
			}
		}
		cout<<endl;
	}
	if(ans==1){
		cout<<"The matrix is symmetric!\n";
	}
	else{
		cout<<"The matrix isn't symmetric!\n";
	}
	return 0;
}
