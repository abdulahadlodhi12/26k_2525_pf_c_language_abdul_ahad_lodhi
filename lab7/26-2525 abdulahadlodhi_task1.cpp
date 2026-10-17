#include<stdio.h>
int main(){
	int i,j;
	char names[3][50];
	int marks[3][3];
	
	while(i < 3){
		printf("Enter %d Your Name ",i+1);
		scanf(" %[^\n]",names[i]);
		i++;
	
	}
	for(i=0;i<3;i++){
		printf("Enter Subject Marks for Student %s\n",names[i]);
		for(j=0;j<3;j++){
			printf("Enter Marks for Subject %d ",j+1);
			scanf("%d",&marks[i][j]);
		}
	}
	printf("\n STUDENT REPORT\n");
	for(i=0;i<3;i++){
		float sum =0;
		for(j=0;j<3;j++){
			sum = sum+marks[i][j];
				
		}
		float avg = sum/3.0;
				printf("The Average of 3 Subjects of student %s are: %.2f\n ",names[i],avg);
	
	}
	

}
