//menu driven program to print area of 2d shapes
#include<iostream>

using namespace std;

int option;

void triangle();
void square();
void rectangle();
void circle();

void main_menu(){
	do{
		cout<<"----------calculate areas------:\n";
		cout<<"[1] Triangle \n";	
		cout<<"[2] Square \n";	
		cout<<"[3] Rectangle \n";	
		cout<<"[4] Circle \n";	
		cout<<"[5] Exit\n";
		cout<<"--------------------------------\n";
		cout<<"Enter your choice:\n";
		cin>>option;
		switch(option){
			case 1:
				triangle();
				break;
			case 2:
				square();
				break;
			case 3:
				rectangle();
				break;
			case 4:
				circle();
				break;
			case 5:
				break;
			default:
				cout<<"Invalid input!! PLease re-enter the acceptable choice!!!!\n";
				
		}
	} while(option!=5);
	
}

void triangle(){
	float h,b,area=0;
	cout<<"Enter the height and base:\n";
	cin>>h>>b;
	area=(b*h)/2;
	cout<<"The area of the triangle is:\n";
	cout<<area<<endl;
}

void square(){
	float s,area=0;
	cout<<"Enter the side:\n";
	cin>>s;
	area=s*s;
	cout<<"The area is:\n";
	cout<<area<<endl;
}

void rectangle(){
	float l,w,area=0;
	cout<<"Enter the length and width:\n";
	cin>>l>>w;
	area=l*w;
	cout<<"The area is:\n";
	cout<<area<<endl;
}

void circle(){
	float r,area=0;
	const float pi=3.1459;
	cout<<"ENter the radius:\n";
	cin>>r;
	area=pi*r*r;
	cout<<"The area of circle is:\n";
	cout<<area<<endl;
}

int main(){
	main_menu();
	return 0;
}
