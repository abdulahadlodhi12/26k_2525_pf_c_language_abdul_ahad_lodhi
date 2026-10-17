#include<stdio.h>
int main(){
	char word_grid[3][100],longest_word[50];
	int i=0,j,count=0,max_len=0,max_rows,max_cols,length,m=0;
	
	while(i<3){
		printf("Enter 3 space seperated items List %d: ",i+1);
		scanf(" %[^\n]",word_grid[i]);
		i++;
	}
	
	for(i=0;i<3;i++){
		j=0;
		int col_index = 0;
		while(word_grid[i][j] != '\0'){
		while(word_grid[i][j] == ' ' && word_grid[i][j] != '\0'){
			j++;
		}
		char current_word[50];
		length=0;
		int increment=0;
		while(word_grid[i][j] != ' ' && word_grid[i][j]!='\0'){
			current_word[increment] = word_grid[i][j];
			increment++;
			length++;
			j++;
		}
		current_word[increment] = '\0';
		
		if(length>max_len){
			max_len=length;
		m=0;
		while(current_word[m] != '\0'){
			longest_word[m]= current_word[m]; 
			m++; 	
		}
		longest_word[m] = '\0';
		
		max_rows = i;
		max_cols = col_index;
	}
	
		col_index++;
	}
}
    printf("Longest Word   : %s\n", longest_word);
    printf("Length         : %d characters\n", max_len);
    printf("Row Index (i)  : %d\n", max_rows);
    printf("Column Index(j): %d\n", max_cols);	
	
	

}
