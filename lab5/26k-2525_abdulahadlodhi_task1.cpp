#include<stdio.h>
int main(){
	int prog,maths,ai,attendence;
	printf("Enter the marks for maths: ");
	scanf("%d",&maths);
	printf("Enter the marks for programming: ");
	scanf("%d",&prog);
	printf("Enter the marks for ai: ");
	scanf("%d",&ai);
	float no_of_days_per_sem = 182.0;
	printf("How many days have you attended in this semester ");
	scanf("%d",&attendence);
	float attendence_percent = (attendence/no_of_days_per_sem)*100;
	printf("Your attendence percentage be %.1f\n ",attendence_percent);
	if(prog>=50 && maths>=50&&ai>=50&&attendence_percent>=75.0){
		float average = (prog+maths+ai)/3;
		printf("The average of 3 subjects are %.2f \n",average);
		if(average>=80){
			printf("Excellent");
		}
		else if(average>=70){
			printf("Very Good");
		}
		else if(average >=60){
			printf("Good");
		}
		else if(average >=50){
			printf("Satisfactory");
		}
		else if(average <=50){
			printf("Poor");
		}
		
	}
	else{
		printf("Student is not eligible");
		
	}
	

}
