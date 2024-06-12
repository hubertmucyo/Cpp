//a program that prints a number entered by the user
#include<cstdio>
using namespace std;

int main(){
	double num;
	printf("enter any number: \n");
	scanf("%lf",&num);
	printf("the number you entered is: ");
	printf("%lf",num);
	return 0;
}
