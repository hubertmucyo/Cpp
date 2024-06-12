//matrix transpose
#include<iostream>
using namespace std;

int main(){
	int r,c;
	cout<<"Enter the number of rows and columns of your matrix:\n";
	cout<<"Values should be less than or equal to 10!\n";
	cin>>r>>c;
	int matrix[r][c];
	cout<<"Enter values of the matrix:\n";
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>matrix[i][j];
		}
	}

	cout<<"The matrix you entered is:\n";
		for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	
		//transpose process
	cout<<"After transposing\n";
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++){
			cout<<matrix[j][i]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
