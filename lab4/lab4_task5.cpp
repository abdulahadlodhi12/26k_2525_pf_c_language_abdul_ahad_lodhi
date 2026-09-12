#include<stdio.h>
#include<string.h>
int main(){
	char user[100];
	int admin,researcher,student,active,inactive,number;
//1. An inactive account must always be denied access.
//2. An Admin requires security level 3 or higher.
//3. A Researcher requires security level 2 or higher.
//4. A Student requires security level 1 or higher.
//5. If the security requirements are satisfied, display the appropriate access level.
//6. Otherwise display Access Denied.

// first check if the user is admin reasearcher or a student
printf("Enter no for checking active or not ");
	scanf("%d",&number);
	if(number==1){
		active = number;
	}
	else if(number ==0){
		inactive == number;
	}
	
	if(inactive ==  0){
		printf("access denied");
	}
	
	printf("Please tell me Are you an Admin or a researcher or a student ");
	scanf("%s",&user);
	
	
	if (strcmp(user,"admin")==0 || strcmp(user,"Admin")==0){
		printf("Enter no for admin ");
		scanf("%d",&admin);
		if(admin>=3){
		printf("Access Allowed ");
		}
		else{
			printf("Access Denied");
		}
	}
	else if(strcmp(user,"researcher")==0 || strcmp(user,"Researcher")==0){
		printf("Enter no for researcher ");
		scanf("%d",&researcher);
		if(researcher>=2){
		printf("Access Allowed ");
		}
		else{
			printf("Access Denied");
		}
	}
	else if (strcmp(user,"student")==0 || strcmp(user,"Student")==0){
		printf("Enter no for student ");
		scanf("%d",&student);
		if(student>=1){
			printf("Access Allowed ");
		}
		else{
			printf("Access Denied");
		}
	}

	
	

	
	


	
	
	
	
	
	
}
