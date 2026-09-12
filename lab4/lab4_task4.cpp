#include<stdio.h>
int main(){
	int model_acc,latency,status;
	printf("Enter Model accuracy between 0 to 100 ");
	scanf("%d",&model_acc);
	printf("Enter Model latency between 0 to 100 ");
	scanf("%d",&latency);
	printf("Enter Model approved staus between 0 to 1 ");
	scanf("%d",&status);
	
	if(model_acc >= 90 && latency <=100 && status == 1){
		printf("Model is Approved");
	}
	else if(model_acc<=89){
		printf("Your Accuracy is low");
	}
	else if(latency >100){
		printf("Your latency is too high");
	}
	else if(status != 1){
		printf("Your model is not approved first make it approved");
	}
}
