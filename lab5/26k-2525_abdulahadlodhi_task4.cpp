#include<stdio.h>
int main(){
	int category;
	printf("Enter 1 for talking about Greeting\n ");
	printf("Enter 2 for taking about study\n ");
	printf("Enter 3 for talking about weather\n ");
	printf("Enter 4 if you want help\n ");
	scanf("%d",&category);
	if(category==1){
		printf("Greeting: Hello, How are you, Goodbye ");
	}
	else if(category==2){
		printf("Study: Programming, Mathematics, AI ");
	}
	else if(category == 3){
		printf("Weather: Today, Tomorrow, Forecast ");
	}
	else if(category == 4){
		printf("Help: About Chatbot, Commands, Exit ");
	}
	else{
		printf("Invalid category ");
	}
	
}
