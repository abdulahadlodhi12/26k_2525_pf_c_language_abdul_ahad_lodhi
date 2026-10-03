#include<stdio.h>
int main(){
	// first i create a factorial of a number
	int i=1,number,fact_2n=1,fact_n_1=1,fact_n=1,catalan=0;
	printf("Enter value to give the factorial of the number ");
	scanf("%d",&number);
	// first find the factorial of the 2n!
	for(i=1;i<=2*number;i++){
		fact_2n = fact_2n*i;
	}
	
	// now finding the factorial of (n+1)!
	for(i=1;i<=number+1;i++){
		fact_n_1 = fact_n_1*i;
	}
	
	// finding the factorial of n!
	for(i=1;i<=number;i++){
		fact_n = fact_n*i;
	}
	
	// now the catalan formulae
	catalan = fact_2n/(fact_n_1*fact_n);
	printf("The catalan number from the required number is %d\n",catalan);
	
}
