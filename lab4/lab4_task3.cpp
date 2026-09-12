#include<stdio.h>
int main(){
	int no_of_record,missing_record,duplicate_record;
	float final_record;
	printf("Enter total no of records ");
	scanf("%d",&no_of_record);
	printf("Enter total no of missing record ");
	scanf("%d",&missing_record);
	printf("Enter total no of duplicate records ");
	scanf("%d",&duplicate_record);
	
	if(no_of_record <=0){
		printf("Invalid Dataset");
	}
	else if(missing_record>=30){
		printf("Poor Quality Dataset");
	}
	else if(missing_record<=30 && duplicate_record >20){
		printf("Dataset Required Cleaning");
	}
	else{
		printf("Good Quality Dataset");b
	}
}
