#include<stdio.h>
int main(){
	int c_score;
	printf("Enter Confindece Score between 0 to 100 ");
	scanf("%d",&c_score);
	if(c_score >=80 && c_score<=100){
		printf("High Confidence ");
	}
 	else if(c_score>=50 && c_score<=79){
		printf("Moderate Score ");
	}
	else if(c_score>=0 && c_score<=49){
		printf("Low Score ");
	}
	else if(c_score <0 && c_score >100){
		printf("Invalid Score ");
	}
	else{
		printf("Invalid NUmber ");
	}
	
}
