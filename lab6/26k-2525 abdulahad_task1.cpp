#include<stdio.h>
int main(){
	int num,result,sum;
	printf("Enter your 4 digit pin ");
	scanf("%d",&num);
	if(num<=9999){
		while(num%10 !=0){
			result = num%10;
			sum = sum+result;
			num = num/10;
			
		}
		printf("%d\n",sum);
		if(sum>=10){
			printf("Strong Password\n");
		}
		else{
			printf("Weak Password");
		}
	}
	else{
		printf("Your Pin is not of 4 digits");
	}
	
}
