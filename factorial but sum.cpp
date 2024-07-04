/**a C++ program takes a positive integer from user and display the sum of natural 
numbers up to the number user entered**/
#include<stdio.h>

int main(){
	int num,sum=0;
	printf("Enter a positive integer:\n");
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		sum=sum+i;
	}
	printf("The sum is: ");
	printf("%d",sum);	
	return 0;
}
