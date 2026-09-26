#include<stdio.h>
int main(){
	int age,income,credit_score,loan;
	printf("Enter your age: ");
	scanf("%d",&age);
	printf("Enter your monthly income ");
	scanf("%d",&income);
	printf("Enter the score ");
	scanf("%d",&credit_score);
	printf("Enter 1 if you have taken loan or enter 0 if you doesnot have taken loan ");
	scanf("%d",&loan);
	
	if(age>=21&&income>=100000&&credit_score>=650&&loan==0){
		printf("You Are Eligible ");
	} 
	else if(age>=21&&income>=100000&&credit_score>=650&&loan==1){
		printf("You Are Eligible ");
	}
	else if(age>=21&&income>=750000&&credit_score>=600&&loan==1){
		printf("You Are Eligible ");
	} 
	else if(age>=21&&income>=750000&&credit_score>=600&&loan==0){
		printf("You Are Eligible ");
	} 
	else if(age>=21&&income>=50000&&credit_score>=600&&loan==1){
		printf("You Are Possibly Eligible");
	}
	else{
		printf("Your condition doesnot mathch so you are rejected");
	}
	
	
	
}
