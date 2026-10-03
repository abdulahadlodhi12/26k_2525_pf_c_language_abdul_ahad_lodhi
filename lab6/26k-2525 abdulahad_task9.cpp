#include<stdio.h>
int main(){
	char array[50],reversed[50];
	int i,length=0,start=0,end=0,vovles=0,consonant=0;
	// Inputs the wrod in the array
	printf("Enter any word you want to do operation ");
	scanf("%s", array);
	// find the length of the character array
	while(array[length] != '\0'){
		length++;
	}
	printf("The length of the array is %d",length);
	
	// reverses the word of the array
	for(i=0;i<length;i++){
		reversed[i] = array[length-1-i];
	}
	printf("\nThe Reversed array will be: %s",reversed);
	
	// checking if the word is a palindrome or not
	end = length-1;
	for(i=0;i<length;i++){
		if(array[i] == reversed[i]){
			printf("\nThis word is a palindrome");
			break;
		}
		else if(array[i]!=reversed[i]){
			printf("\nThis word is not a palindrome");
			break;
		}
	}
	
	
	// check the number of vovles in the array
	for(i=0;i<length;i++){
		if(array[i] == 'a' || array[i] == 'e' || array[i] == 'i' || array[i] == 'o' || array[i] == 'u'){
			vovles++;
		}
		else if(array[i] != 'a' || array[i] != 'e' || array[i] != 'i' || array[i] != 'o' || array[i] != 'u'){
			consonant++;
		}
		
	}
	printf("\n NO of vovles in the word is: %d",vovles);
	printf("\n NO of Consonant in the word is: %d",vovles);
}
