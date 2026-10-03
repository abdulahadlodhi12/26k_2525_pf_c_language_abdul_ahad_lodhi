#include<stdio.h>
int main(){
	int number,mod,result;
	printf("Enter any number you want to reverse it ");
	scanf("%d",&number);
	
	while(number%10 !=0){
		mod = number%10;
		number = number/10;
		printf("%d",mod);
	}
	
}
