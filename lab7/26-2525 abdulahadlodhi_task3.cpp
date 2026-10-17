#include<stdio.h>
int main(){
	char secret_message[3][100];
	int count_space;
	int word_count;
	int i=0,j;
	
	while(i<3){
		secret_message[i][0] = '\0';
		printf("Enter %d Message ",i+1);
		scanf(" %[A-Z ]",secret_message[i]);
		int c;
        while((c = getchar()) != '\n' && c != EOF);
		i++;
	}
	
	
	// ITTERATE to find the space and word count in the array
	
	for(i=0;i<3;i++){
		count_space=0;
		word_count=0;
		for(j=0;secret_message[i][j] != '\0';j++){
			if(secret_message[i][j] == ' '){
				count_space++;
			}
		}
		
		
		if(secret_message[i][0] != '\0'){
			word_count = count_space + 1;
		}
		else{
			word_count=0;
		}
		printf("Filtered Message: %s\n",secret_message[i]);
		printf("\nMessage %d  Spaces: %d Words: %d\n", i+1, count_space, word_count);
	}
	

}
