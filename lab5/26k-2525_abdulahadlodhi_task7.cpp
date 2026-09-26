#include<stdio.h>
int main(){
	int confidence,threshold;
	printf("Enter the confidence\n");
	scanf("%d",&confidence);
	printf("Enter the threshold confidence of the model\n");
	scanf("%d",&threshold);
	if(confidence>=90){
		printf("VERY HIGH\n");
	}
	else if(confidence>=75){
		printf("High Confidence\n");
	}
	else if(confidence>=50){
		printf("Moderate Confidence\n");
	}
	else if(confidence<=50){
		printf("Low Confidence\n");
	}
	
	
	if(confidence>=threshold && confidence>=50){
		printf("Accepted");
	}
	else{
		printf("rejected");
	}
}
