#include<stdio.h>
int main(){
	char pr_name[20];
	int quantity,price;
	
	printf("Enter product name ");
	scanf("%s",&pr_name);
	printf("Enter Quantity ");
	scanf("%d",&quantity);
	printf("Enter price ");
	scanf("%d",&price);
	printf("Product is %s\n",pr_name);
	printf("Quantity is %d\n", quantity);
	printf("PRice is %d",price);
}
