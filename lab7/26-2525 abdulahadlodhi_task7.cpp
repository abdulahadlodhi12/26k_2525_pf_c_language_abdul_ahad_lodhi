#include<stdio.h>
int main(){
	int sensor_data[3][4];
	int i=0,j;
	
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter Day %d Sensor Data",i+1);
			scanf("%d",&sensor_data[i][j]);
		}
	}
	
	int tar_index;
	printf("Enter a target index wher to check the sensor");
	scanf("%d",&tar_index);
	
	for(i=0;i<3;i++){
	for(j=tar_index;j<3;j++){
		sensor_data[i][j] = sensor_data[i][j+1];
	}
}


for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		printf("%d",sensor_data[i][j]);
	}
	printf("\n");
}
}
