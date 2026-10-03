#include<stdio.h>
int main(){
	// print all the array items
	int array[8],number,n=8,i=0;
		for(i=0; i<n;i++){
		printf("Enter values to insert to array ");
		scanf("%d",&array[i]);	
	}
	printf("Array Items Are: ");
		for(i=0;i<n;i++){
			printf("%d",array[i]);
		}
		// print max and min value in an array
		int max_num = array[0];
		for(i=0;i<n;i++){
			if(array[i] > max_num){
				max_num = array[i];
		}
	}
		printf("\nMax Number: %d\n",max_num);
		int min_num = array[0];
		for(i=n;i>n;i--){
			if(array[i] < min_num){
				min_num = array[i];
		}
	}
		printf("\nMin Number: %d\n",min_num);
		
		
		// print the index of a number that is inputed by the user in an array 
		int searched_number;
		printf("Enter a number to search from an array\n");
		scanf("%d",&searched_number);
		int result,index=-1;
		for(i=0;i<n;i++){
			if(array[i] == searched_number){
				index = i;
				printf("index is: %d",index);
			}
	}
			
		// insert some new value in an specific index
		
		int index_value,required_value;
		printf("\nEnter index value range(0-anyNumber) from where you want to put the required number");
		scanf("%d",&index_value);
		printf("Enter Required value for putting in the array");
		scanf("%d",&required_value);
		for(i=n;i>index_value;i--){
			array[i]=array[i-1];
		}
		array[index_value] = required_value;
		for(i=0;i<n+1;i++){
			printf("%d",array[i]);
		}
		
		
		// delete some values from the specific index
		int index_delete;
		printf("\nEnter an index from you want to delete the value");
		scanf("%d",&index_delete);
		if(index_delete >= 0 && index_delete <= n) {
    		for (i = index_delete; i < n - 1; i++) {
        		array[i] = array[i + 1];
    		}
    		n--;
    		for(i=0;i<n;i++){
			printf("%d",array[i]);
			}
			
		}
		else {
    		printf("Invalid index!\n");
		}	
    
//		
//		
//		for(i=index_delete;i<n-1;i++){
//			array[i] = array[i+1];
//		}
//	
	
		
}
