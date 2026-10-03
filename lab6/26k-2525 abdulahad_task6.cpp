#include<stdio.h>
int main(){
	int reading,mod;
	printf("Enter your reading");
	scanf("%d",&reading);
	while(reading%10 != 0){
		mod = reading%10;
		if(mod%2 == 0){
			printf("This digit is even %d\n",mod);
		}
		else if(mod%2 != 0){
			printf("This digit is odd %d\n",mod);
		}
		reading = reading/10;
		
	}
	

	
}
