#include<stdio.h>
int main(){
	char name[20],grade[6];
	int age;
	float height,cgpa;
	printf("Enter name ");
	scanf("%s",&name);
	printf("Enter grade ");
	scanf("%s",&grade);
	printf("Enter Age ");
	scanf("%d",&age);
	printf("Enter height ");
	scanf("%f",&height
	);
	printf("Enter cgpa ");
	scanf("%f",&cgpa);
	
	
	printf("Student name is %s\n",name);
	printf("Student age is %d\n",age);
	printf("Student height is %.2f\n",height);
	printf("Student grade is %s\n",grade);
	printf("Student cgpa is %.2f",cgpa);
}
