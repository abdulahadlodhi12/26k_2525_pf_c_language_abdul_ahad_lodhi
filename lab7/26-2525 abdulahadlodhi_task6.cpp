#include<stdio.h>
int main(){
	int shift[4][3];
	int init_rows = 3;
	int i=0,j;
	
	for(i=0;i<init_rows;i++){
		for(j=0;j<3;j++){
			printf("Enter Workstation %d Data ",i+1);
			scanf("%d",&shift[i][j]);
		}
	}
	
	int tar_index;
	printf("Enter a target index you want to place the data:");
	scanf("%d",&tar_index);
	
	
	int new_row[3];
	for(j=0;j<3;j++){
		printf("Enter 3 production data to persue the fillings");
		scanf("%d",&new_row[j]);
	}
	
	
	for(i=3;i>tar_index;i--){
		for(j=0;j<3;j++){
			shift[i][j]=shift[i-1][j];
		}
	}
	
	
	for(j=0;j<3;j++){
		shift[tar_index][j] = new_row[j];
	}
	
	
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("%d",shift[i][j]);
		}
		printf("\n");
	}
}
