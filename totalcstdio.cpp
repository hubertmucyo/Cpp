//display the given output by prompting from user

#include<stdio.h>
#include<stdlib.h>
int main(){

	double price,total;
	int quantity;
	printf("Enter The unit price of your product: ");
	scanf("%lf",&price);
	printf("\n");
	printf("Enter the quantity: ");
	scanf("%d",&quantity);
	printf("\n");
	system("pause");
	system("CLS");
	printf("-----------------------------------------------\n");
	printf("Unit Price: ");
	printf("%lf",price);
	printf("\n");
	printf("Quantity: ");
	printf("%d",quantity);
	printf("\n");
	printf("-----------------------------------------------\n");
	total=price*quantity;
	printf("Total: ");
	printf("%lf",total);
	printf("\n");
	printf("-----------------------------------------------\n");
	return 0;
}
