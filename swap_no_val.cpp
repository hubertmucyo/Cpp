//swap withour 3rd variable
#include<iostream>
using namespace std;
int main(){
    float num1,num2;
    cout<<"Enter 2 numbers: \n";
    cin>>num1>>num2;
    cout<<"\n Before swapping:"<<endl;
    cout<<"First number = "<< num1<<", Second number = "<< num2<< endl;

    num1 = num1 + num2; // a = 5 + 10 = 15
    num2 = num1 - num2; // b = 15 - 10 = 5
    num1 = num1 - num2; // a = 15 - 5 = 10

    cout<<"After swapping:"<<endl;
    cout<<"first number = "<< num1<<", second number = "<<num2<<endl;
    return 0;
}
