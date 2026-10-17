#include<stdio.h>
int main(){
	char logs[3][40];
	int upper=0;
	int i,j;
	
	printf("Enter data of CSV format e.g(Username,Status,Timestamp) \n");
	scanf(" %[^,],%[^,],%[^\n]",logs[0],logs[1],logs[2]);
	
	
	// checking and increasing the count of upper letters 
	
	for(i=0;i<3;i++){
		for(j=0;logs[i][j] != '\0';j++){
			if(logs[i][j]>='A' && logs[i][j]<='Z'){
				upper++;
			}
		}
	}
	
	
	printf("Username: %s\n ",logs[0]);
	printf("Count: %d\n ",upper);
}
