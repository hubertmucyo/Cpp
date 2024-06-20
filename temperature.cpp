#include<iostream>
using namespace std;

int i=0,j=0;
float cel[12],fahr=0;

void calculate(){
    
}

void summary(){
    cout<<"Temperature Summary for the day\n";
    cout<<"----------------------------------\n";
    cout<<"Average temperature :"<<avg<<endl;
    cout<<"Minimum temperature :"<<minimum<<endl;
    cout<<"Maximum temperature :"<<maximum<<endl;
}

int main(){
    
    
    start:
    do{
    cout<<"Enter your temperature in celsius for hour "<<j<<" :\n";
    cin>>cel[i];
    if(cel<35 || cel>42){
        cin.fail();
        cin.ignore();
        goto start;
    }
    i++;
    j=j+2;
    fahr=(cel*1.8)+32;
    }while(i<12);
    return 0;
}