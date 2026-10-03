#include<stdio.h>
int main(){
	int total_std = 30,n=0,present=0,absent=0,attendence;
	while(n!=30){
		printf("Please mark your attendence Enter 1 for present and 0 for absent ");
		scanf("%d",&attendence);
		if(attendence ==1){
			present++;
		}
		n++;

	}
	absent = total_std-present;
	printf("Present Students are: %d\n",present);
	printf("Absent Students are: %d\n",absent);
}
