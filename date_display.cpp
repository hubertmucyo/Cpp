//program that displays date in different formats
#include<iostream>
using namespace std;
int main(){
	int day,month,year,option;
	string suffix,mois;
	cout<<"You are required to enter date. \n";
	cout<<"Enter day: \n";
	cin>>day;
	cout<<"Enter month: \n";
	cin>>month;
	cout<<"Enter year: \n";
	cin>>year;
	cout<<"Choose an option format to display date: \n";
	cout<<"option 1: 21.05.2001\n";
	cout<<"option 2: 21.05.01\n";
	cout<<"option 3: 21st May 2001\n";
	cin>>option;
	if(option==1){
		cout<<day<<".0"<<month<<"."<<year<<endl;
	}
	else if(option==2){
		cout<<day<<".0"<<month<<"."<<year%100;
	}
	else if(option==3){
		switch(day%10){
			case 1:
				suffix=(day=11)?"th":"st";
				break;
			case 2:
				suffix=(day=12)?"th":"nd";
				break;
			case 3:
				suffix=(day=13)?"th":"rd";
				break;
			default:
				suffix="th";
				break;
		}
		switch(month){
			case 1:
				mois="January";
				break;
			case 2:
				mois="February";
				break;
			case 3:
				mois="March";
				break;
			case 4:
				mois="April";
				break;
			case 5:
				mois="May";
				break;
			case 6:
				mois="June";
				break;
			case 7:
				mois="July";
				break;
			case 8:
				mois="August";
				break;
			case 9:
				mois="September";
				break;
			case 10:
				mois="October";
				break;
			case 11:
				mois="November";
				break;
			case 12:
				mois="December";
				break;
			default:
				mois="Month";
				break;
		}
		cout<<day<<suffix<<" "<<mois<<" "<<year;
	}
	return 0;
}
