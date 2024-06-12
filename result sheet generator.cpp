#include<iostream>
#include<limits>
#include<cstring>
#include<iomanip>
using namespace std;
struct student{
	
};

float marks[10];//iii. -Array which stores marks of all students
string grade[10];

void main_menu();//ii.-Display menu items
void add_new_marks();//iv. -add marks for 10 students
void print_marks_sheet();//vi. -print existing data in an array
void print_grade_sheet();//vii. -print grade
void print_data_summary();//viii. -print summary

void main_menu(){
	int option;
	do {
		cout<<"-----------------------------\n";
		cout<<"Result Sheet Generator\n";
		cout<<"-----------------------------\n";
		cout<<"[1] Add New Student Marks\n"
			<<"[2] Print Mark Sheet\n"
			<<"[3] Print Grade Sheet\n"
			<<"[4] Print Summary Sheet\n"
			<<"[5] Exit\n"
			<<"-----------------------------\n";
		cout<<"Choose option: \n";
		cin>>option;
		switch(option){
			case 1:
				add_new_marks();
				break;
			case 2:
				print_marks_sheet();
				break;
			case 3:
				print_grade_sheet();
				break;
			case 4:
				print_data_summary();
				break;
			case 5:
				break;
			default:
				cout<<"INVALID INPUT!\n";
				break;	
		}
	}while(option!=5);
}

void add_new_marks() {
    for (int i = 0; i < 10; ++i) { 
        cout << "Enter student " << i + 1 << " marks: \n";//prompt each student to enter marks
        while (true) {
            cin >> marks[i];
            
            //V. -validation process
            if (cin.fail()) {//checks if the input operation failed (e.g., non-numeric input)
                cin.clear(); // clear the error state
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
                cout << "Invalid input. Please enter a number between 0 and 100 for student " << i + 1 << " marks: ";
            } else if (marks[i] < 0 || marks[i] > 100) {
                cout << "Marks must be between 0 and 100. Please re-enter marks for student " << i + 1 << ": ";//user re-prompted to enter marks
            } else {
                break;//If the input is valid, exit loop
            }
        }
    }
}

void print_marks_sheet(){
	cout<<"-----------------------------\n";
	cout<<"        Mark Sheet\n";
	cout<<"-----------------------------\n";
	cout<<"        Student   Subject\n";
	for(int i=0;i<10;++i){
		cout<<setw(13)<<i+1<<"   "<<"\t"<<marks[i]<<endl;//print marks in a tabular form setting width to align with previous titles
	}
}

void print_grade_sheet(){
		for(int i=0;i<10;++i){
        if(marks[i]>=90&&marks[i]<=100){
        	grade[i]="A+";
		}
		else if(marks[i]>=80&&marks[i]<=89){
			grade[i]="A";
		}
		else if(marks[i]>=70&&marks[i]<=79){
			grade[i]="B+";
		}
		else if(marks[i]>=60&&marks[i]<=69){
			grade[i]="B";
		}
		else if(marks[i]>=50&&marks[i]<=59){
			grade[i]="C+";
		}
		else if(marks[i]>=40&&marks[i]<=49){
			grade[i]="C";
		}
		else if(marks[i]>=30&&marks[i]<=39){
			grade[i]="D+";
		}
		else if(marks[i]>=20&&marks[i]<=29){
			grade[i]="D";
		}
		else if(marks[i]<20){
			grade[i]="E";
		}
		else{
			grade[i]="No grade";
		}
	}
	//Display the grades for each student
	cout<<"-----------------------------\n";
	cout<<"        Grade Sheet\n";
	cout<<"-----------------------------\n";
	cout<<"        Student   Subject\n";
	for(int i=0;i<10;++i){
		cout<<setw(13)<<i+1<<"   "<<"\t"<<grade[i]<<endl;//print grades in a tabular form setting width to align with previous titles
	}
}
void print_data_summary(){
	float sum=0,average=0;//Declare and Initialize sum and average
	for(int i=0;i<10;i++){
		sum=sum+marks[i];//calculate sum of all marks of students 
	}
	average=sum/10;//calculate average of marks of all students
	
	//find the minimum value in array marks
	float min_val = marks[0]; // Initialize min_val with the first element
    for (int i = 1; i < 10; ++i) {
        if (marks[i] < min_val) {//compare all marks to min_val
            min_val = marks[i];//stores the smallest value in min_val until loop terminates
        }
    }

    // Find the maximum value in array marks
    float max_val = marks[0]; // Initialize max_val with the first element
    for (int i = 1; i < 10; ++i) {
        if (marks[i] > max_val) {//compare all marks to max_val
            max_val = marks[i];//stores the smallest value in max_val until loop terminates
        }
    }
	cout<<"-----------------------------\n";
	cout<<"        Class summary\n";
	cout<<"-----------------------------\n";
	cout<<"              Subject\n";
	cout<<"Average: "<<setw(5)<<average<<endl;
	cout<<"Minimum marks: "<<min_val<<endl;
	cout<<"Maximum marks: "<<max_val<<endl;
		
		
}

int main(){
	main_menu();//call function main_menu() in main() to execute the program
	return 0;
}
