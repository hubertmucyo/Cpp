//voting for the best project

#include<iostream>
#include<iomanip>
using namespace std;
int vote;
int validvote=0;
int rejectedvote=0;
int c1=0,c2=0,c3=0,c4=0,c5=0;
int p1,p2,p3,p4,p5;


int main(){
	cout<<"-----There are 5 candidates for best project----\n ";
	cout<<"-----To vote enter the number of a candidate----\n ";
	cout<<"[1] Candidate 1 \n";
	cout<<"[2] Candidate 2 \n";
	cout<<"[3] Candidate 3 \n";
	cout<<"[4] Candidate 4 \n";
	cout<<"[5] Candidate 5 \n";
	
	for(int i=0;i<24;i++){
	cout<<"Time to vote.\n Choose your candidate: \n";
	cin>>vote;

	switch(vote){
		case 1:
			c1++;
			validvote++;
			break;
		case 2:
			c2++;
			validvote++;
			break;
		case 3:
			c3++;
			validvote++;
			break;
		case 4:
			c4++;
			validvote++;
			break;
		case 5:
			c5++;
			validvote++;
			break;
		default:
			rejectedvote++;
			break;
	}
	p1=(c1*100)/validvote;
	p2=(c2*100)/validvote;
	p3=(c3*100)/validvote;
	p4=(c4*100)/validvote;
	p5=(c5*100)/validvote;
	}
	
	cout<<"-----------------------------------------------\n";
	cout<<"Faculty of Computing\n";
	cout<<"Final year best project-2024\n";
	cout<<"-----------------------------------------------\n";
	cout<<"Candidate        Votes Obtained      Percentage\n";
	cout<<"------------------------------------------------\n";
	cout<<"Candidate 1"<<setw(10)<<c1<<"           "<<p1<<"%"<<endl;
	cout<<"Candidate 2"<<setw(10)<<c2<<"           "<<p2<<"%"<<endl;
	cout<<"Candidate 3"<<setw(10)<<c3<<"           "<<p3<<"%"<<endl;
	cout<<"Candidate 4"<<setw(10)<<c4<<"           "<<p4<<"%"<<endl;
	cout<<"Candidate 5"<<setw(10)<<c5<<"           "<<p5<<"%"<<endl;
	cout<<"------------------------------------------------\n";
	cout<<"Valid vote      "<<validvote<<endl;
	cout<<"Rejected vote   "<<rejectedvote<<endl;
	cout<<"------------------------------------------------\n";
	
	return 0;
}
