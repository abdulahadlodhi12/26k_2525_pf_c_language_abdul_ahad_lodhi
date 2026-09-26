#include<stdio.h>
int main(){
	int category,sub_cat;
	printf("Choose Category No'\n'");
	printf("Choose 1 For Animal\n");
	printf("Choose 2 for Vehicle\n");
	printf("Choose 3 for Food\n");
	printf("Choose 4 for Human\n");
	scanf("%d",&category);
	switch(category){
		case 1:
			printf("Choose Sub_Category No\n");
			printf("Choose 1 For cat\n");
			printf("Choose 2 for dog\n");
			printf("Choose 3 for bird\n");
			scanf("%d",&sub_cat);
			
				switch(sub_cat){
					case 1:
						printf("Selected:  Animal  Cat");
						break;
					case 2:
						printf("Selected:  Animal Dog");
						break;
					case 3:
						printf("Selected: Bird");
						break;
			}
			break;
	
	
		case 2:
			
			printf("Choose Sub_Category No\n");
			printf("Choose 1 For car\n");
			printf("Choose 2 for bus\n");
			printf("Choose 3 for bike\n");
			scanf("%d",&sub_cat);
			
			switch(sub_cat){
				
					printf("Selected:  vehicle  Car");
					break;
				
				case 2:
					printf("Selected:  vehicle bus");
					break;
				
				case 3:
					printf("Selected: vehicle bike");
					break;
				
				
					break;
				}
			break;
		case 3:
			printf("Choose Sub_Category No\n");
			printf("Choose 1 For Pizza\n");
			printf("Choose 2 for Biryani\n");
			printf("Choose 3 for burger\n");
			scanf("%d",&sub_cat);
			
			switch(sub_cat){
				case 1:
					printf("Selected:  Food  Pizza");
					break;
			
				case 2:
					printf("Selected:  Food Biryani");
					break;
				
				case 3:
					printf("Selected: Food burger");
					break;
				
				
				}
			break;
			
			case 4:
					printf("Choose Sub_Category No\n");
			printf("Choose 1 For Male\n");
			printf("Choose 2 for Female\n");
			printf("Choose 3 for Child\n");
			scanf("%d",&sub_cat);
			
			switch(sub_cat){
				case 1:
					printf("Selected:  Human  Male");
					break;
				
				case 2:
					printf("Selected:  Human Female");
					break;
				
				case 3:
					printf("Selected: Human Child");
					break;
				
				}
				break;
		}	
	
}
