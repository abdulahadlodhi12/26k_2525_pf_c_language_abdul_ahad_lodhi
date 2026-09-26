#include<stdio.h>
int main(){
	int confidence,user_type;
	printf("Enter face recognition confidence ");
	scanf("%d",&confidence);
	printf("Enter 1 for Authorized User\n");
	printf("Enter 0 for the unauthorized user\n");
	scanf("%d",&user_type);
	
	if (confidence>=80 && user_type == 1){
		printf("Face Recognized and Access Granted");
	}
	else if(confidence>=50 && confidence<=79){
		printf("Needed Manual Verfication");
	}
	else if(confidence<50 && user_type==0){
		printf("Access Denied");
	}
	else{
		printf("Invalid");
	}
}
