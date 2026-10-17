#include<stdio.h>
int main(){
	char sentences[3][100];
	int i=0,count=0,k=0,j=0;
	printf("Enter 3 Sentences seperated using semicolon(;) ");
	
	
	while(i < 3){
		scanf("%99[^;]",sentences[i]);
		if(i < 3){
			scanf("%*c");
		}
    i++;
	}
	
		printf("\n--- Parsed Sentences ---\n");`                                         
    for(int j = 0; j < 3; j++) {
    	count = 0;
    	for(k=0; sentences[j][k] != '\0';k++){
			char ch = sentences[j][k];
    		if((ch == 'a') || (ch == 'A') || (ch == 'e') || (ch == 'E')|| (ch =='i') || (ch == 'I') || (ch == 'o') || (ch == 'O') || (ch == 'u') || (ch == 'U')){
        	count++;
			}
		}
        printf("Row %d: %s\n", j+1, sentences[j]);
       
		printf("The Count of Vovels in each row is: %d\n",count);
	
    }
     
}
