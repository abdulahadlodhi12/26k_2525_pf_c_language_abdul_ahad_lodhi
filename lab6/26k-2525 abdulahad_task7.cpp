#include<stdio.h>
int main(){
	int i,j,n;
	printf("Enter number to create a diamond");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		printf("*");
		if(i>1){
			for(j=1;j<=2 * i -3;j++){
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
        
    }
    
    
    // for bottom half
    
    for(i=n-1;i>=1;i--){
    	for(j=1;j<=n-i;j++){
    		printf(" ");
		}
		printf("*");
		if(i>1){
			for(j=1;j<= 2 * i -3;j++){
				printf(" ");
			}
			printf("*");		
		}
		printf("\n");
	}
	
}
