#include<stdio.h>
int main(){
	int obstacle , person,battery;
	printf("Enter obstacle in 1 and 0 ");
	scanf("%d",&obstacle);
	printf("Enter person in 1 and 0 ");
	scanf("%d",&person);
	printf("Enter battery percent ");
	scanf("%d",&battery);
	
	if(obstacle == 1){
		if(person == 1){
			printf("Emergency Stop");
		}
		else{
			printf("Change Direction");
		}
	}
	
	
	if(obstacle ==0){
		if(battery <=20){
			printf("Return to charging station");
		}
		else{
			printf("Keep Moving");
		}
	}
}
