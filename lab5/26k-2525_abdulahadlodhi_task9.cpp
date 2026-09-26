#include<stdio.h>
#include<math.h>
int main(){
	float absolute,square_rt;
	int base,exponent,power,expression,number;
	double floor_num,ceil_num;
	printf("Enter any number in which you have to apply mathamatical operation\n");
	scanf("%d",&number);
	printf("Enter 1 for finding the square root of the number \n");
	printf("Enter 2 for finding the power of the number \n");
	printf("Enter 3 for finding the absolute of the number \n");
	printf("Enter 4 for finding the floor of the number \n");
	printf("Enter 5 for finding the ceiling of the number \n");
	scanf("%d",&expression);
	switch(expression){
		case 1:
			square_rt = sqrt(number);
			printf("The Square root of the given number is %.2f ",square_rt);
			break;
		
		case 2:
			printf("For finding power enter base and exponent");
			printf("Enter value for base ");
			scanf("%d",&base);
			printf("Enter value for exponent ");
			scanf("%d",&exponent);
			power = pow(base,exponent);
			printf("The Power of the required base and exponent be %d ",power);
			break;
			
		case 3:
				printf("For finding absolute ");
				absolute = fabs(number);
				printf("The absolute of the given number is %.2f ",absolute);
				break;
		
		case 4:
				printf("For finding Floor ");
				floor_num = floor(number);
				printf("The floor of the given number is %lf ",floor_num);
				break;
				
		case 5:
				printf("For finding celling ");
				ceil_num = ceil(number);
				printf("The floor of the given number is %lf ",ceil_num);
				break;
			
		default:
			printf("Invalid Or Wrong Information");
	}
	}
