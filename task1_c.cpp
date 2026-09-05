#include<stdio.h>
int main(){
	int age;
	char name[20],city[20];
	printf("Enter your name ");
	scanf("%s",&name);
	printf("Enter your age ");
	scanf("%d",&age);
	printf("Enter your city ");
	scanf("%s",&city);
	
	printf("Your name is %s\n ",name);
	printf("Your age is %d\n ",age);
	printf("Your city is %s ",city);
	
	return 0;
	
}
