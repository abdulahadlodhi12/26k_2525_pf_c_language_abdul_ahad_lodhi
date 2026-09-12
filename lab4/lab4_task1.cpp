#include<stdio.h>
int main(){
	int num1,num2,num3;
	printf("Enter num1\n");
	scanf("%d",&num1);
	printf("Enter num2\n");
	scanf("%d",&num2);
	printf("Enter num3\n");
	scanf("%d",&num3);
	if(num1 == num2 || num1==num3 || num2==num3 || num2==num1 || num3==num1 || num3 == num2){
		printf("All Numbers are equal");
	}
	else if(num1>num2 && num1>num3){
		printf("Num1 is Greatest %d",num1);
	}
	else if(num2>num3 && num2>num1){
		printf("num2 is greatest %d",num2);
	}
	else if(num3>num2 && num3>num1){
		printf("Number3 is greatest %d",num3);
	}
	else{
		printf("Invalid Number");
	}
}
