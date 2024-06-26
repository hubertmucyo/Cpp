#include<iostream>
#include<iomanip>
using namespace std;

int choice;
float celsius[12],fahr[12],avg=0,sum=0,mini,maxa;
char cont;

void prompt(){
	for(int i=0,j=0;i<12;i++){
		prompter:
			cout<<"\nEnter your temperature for hour "<<j<<" :"<<endl;
			cin>>celsius[i];
		 	if (celsius[i]<35 || celsius[i]>42 ){
		 		cout<<"Invalid Input!\n Accepted Range: 35 to 42 \n";
		 		cin.clear();
		 		cin.ignore();
		 		goto prompter;
			 }
		fahr[i]=(celsius[i]*1.8)+32;
		j=j+2;
	}
}


void summary(){
	sum=0;
	for(int i=0;i<12;i++){
		sum=sum+fahr[i];
	}
	avg=sum/12;
	
	mini=fahr[0];
	for(int i=0;i<12;i++){
		if (mini<fahr[i]){
			mini=fahr[i];
		}
	}
	maxa=fahr[0];
	for(int i=0;i<12;i++){
		if (maxa>fahr[i]){
			maxa=fahr[i];
		}
	}
	
	cout<<"Temperature Summary for a day\n"
		<<"-----------------------------\n"
		<<"Average Temperature: "<<avg<<endl
		<<"Maximum Temperature: "<<maxa<<endl
		<<"Minimum Temperature: "<<mini<<endl
		<<"-----------------------------\n";
}


void display(){
	cout<<"-----------------------------------------------\n";	
	cout<<"Application to read the temperature of the day:\n";
	cout<<"-----------------------------------------------\n";	
	cout<<"[1] Enter the temperature for the day \n";	
	cout<<"[2] Temperature Summary for the day \n";	
	cout<<"[3] Bar Chart Graph \n";	
	cout<<"[4] Exit \n";
	cout<<"-----------------------------------------------\n";
}


void bar(){
	cout<<"----------------------------------\n";
	cout<<"BAR CHART (Temperature Summary)   \n";
	cout<<"----------------------------------\n";
	cout<<"Time (h) Temperature(95-108) F0.\n";
	cout<<"----------------------------------\n";
 	for(int i = 0, j = 0; i < 12; i++, j += 2){
        int num_x = static_cast<int>(fahr[i] - 95); // Simple scale for bar chart
        cout << j << "  " <<setw(2)<<fahr[i] << "   ";
        for(int k = 0; k < num_x; k++){
            cout << "x";
        }
        cout << endl;
    }
    cout << "----------------------------------\n";
}

void main_menu(){
	start:
		display();
		cout<<"Choose an option:\n";
		cin>>choice;
		switch(choice){
			case 1:
				prompt();
				break;
			case 2:
				summary();
				break;
			case 3:
				bar();
				break;
			case 4:
				cout<<"\n\nExiting!!!\n";
				break;
			default:
				cout<<"Invalid option!!\n";
				cin.ignore();
				goto start;
				break;
		}
	cout<<"Would you like to continue the application[Y/N?]: \n";
	cin>>cont;
	asker:
		if (cont=='y' || cont=='Y'){
			goto start;
		}
		else if(cont=='n' || cont=='N'){
			cout<<"\n\nThanks for using our app!\n";
			exit(0);
		}
		else{
			cout<<"Invalid option, PLease specify if Yes or NO!\n";
			goto asker;
		}
	
}

int main(){
	
	main_menu();
	return 0;
}
