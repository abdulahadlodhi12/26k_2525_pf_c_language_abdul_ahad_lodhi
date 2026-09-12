#include<stdio.h>
int main(){
	int data_used,price_per_gb,basic_cost;
	float final_cost;
	printf("Enter data used in GBS ");
	scanf("%d",&data_used);
	printf("Enter price per GB ");
	scanf("%d",&price_per_gb);
	
	
	basic_cost = data_used * price_per_gb;
	
	if(data_used < 50){
		printf("Your basic cost will be %d",basic_cost);
	}
	else if(data_used >=50 && data_used<=99){
		final_cost = basic_cost-(0.05)*basic_cost;
		printf("You get 5 percent discount which means your total cost will be %.3f",final_cost);
	}
	else if(data_used >=100 && data_used>=199){
		final_cost = basic_cost-(0.1)*basic_cost;
		printf("You get 10 percent discount which means your total cost will be %.3f",final_cost);
	}
	
}
