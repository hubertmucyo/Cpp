//addition of the matrix
#include<iostream>
using namespace std;
int main(){
	int mat1[3][3],mat2[3][3], sum[3][3];
	cout<<"Enter values of the first matrix:\n";
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cin>>mat1[i][j];
			}
    }
    cout<<"Enter values of the second matrix:\n";
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cin>>mat2[i][j];
			}
    }
    cout<<"The first matrix is:\n";
 		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cout<<mat1[i][j]<<" ";
			}
		cout<<endl;
    }   
    cout<<"The second matrix is:\n";
 		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cout<<mat2[i][j]<<" ";
			}
		cout<<endl;
    } 

    for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				sum[i][j]=mat1[i][j]+mat2[i][j];
			}
    }
    cout<<"The addition is:\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<sum[i][j]<<" ";
		}
		cout<<endl;
    }
	return 0;
}
