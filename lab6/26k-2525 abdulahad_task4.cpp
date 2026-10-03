#include<stdio.h>
int main(){
	int book_code,number,reversed,saved_code;
	printf("Enter book code");
	scanf("%d",&book_code);
	saved_code = book_code;
	while(book_code%10 !=0){
		number = book_code%10;
		reversed = (reversed*10)+number;
		book_code = book_code/10;
	}
	
	
	if(saved_code == reversed){
		printf("This number is palindrome");
	}
	else if(saved_code != reversed){
		printf("This number is not a palindrome");
	}
	
}
