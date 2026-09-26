#include<stdio.h>
int main(){
	
	int category,sub;
	printf("Enter Category");
	printf("Enter 1 if category is Classification\n" );
	printf("Enter 2 if category is Regression\n ");
	printf("Enter 3 if category is Clustering\n ");
	printf("Enter 4 if category is Computer Vision\n ");
	scanf("%d",&category);
	switch(category){
		case 1:
			printf("Choose Sub Category\n ");
			printf("Enter 1 for Logistic Regression\n ");
			printf("Enter 2 for Decision Tree\n ");
			printf("Enter 3 for knn\n ");
			scanf("%d",&sub);
			switch(sub){
				case 1:
					printf("You choose Classification  Logistic Regression");
					break;
				
				case 2:
					printf("You choose Classification   Decesion tree");
					break;
				
				case 3:
					printf("You choose Classification  knn");
					break;	
		
		}break;
		
		case 2:
			printf("Choose Sub Category\n");
			printf("Enter 1 for Linear Regression\n");
			printf("Enter 2 for  Polynomial Regression\n");
			printf("Enter 3 for SVR\n");
			scanf("%d",&sub);
			switch(sub){
				case 1:
					printf("You choose Regression  Linear Regression");
					break;
				
				case 2:
					printf("You choose Regression   Polynomial Regresion");
					break;
				
				case 3:
					printf("You choose Regression  SVR");
					break;	
		
	
			}break;	
			
			
		case 3:
			printf("Choose Sub Category\n");
			printf("Enter 1 for K means\n");
			printf("Enter 2 for Hirarhical Clustring\n");
			printf("Enter 3 for dbscan\n");
			scanf("%d",&sub);
			switch(sub){
				case 1:
					printf("You choose Clustering K means");
					break;
				
				case 2:
					printf("You choose Clustering Hirarhical Clustring");
					break;
				
				case 3:
					printf("You choose Clustering  dbscan");
					break;	
		
	
			}break;
		
		case 4:
			printf("Choose Sub Category\n");
			printf("Enter 1 for CNN\n");
			printf("Enter 2 for Yolo\n");
			printf("Enter 3 for RNN\n");
			scanf("%d",&sub);
			switch(sub){
				case 1:
					printf("You choose Computer Vision CNN");
					break;
				
				case 2:
					printf("You choose Computer Vision YOLO");
					break;
				
				case 3:
					printf("You choose Computer Vision  RNN");
					break;	
		
	
			}break;		
	
	
	}
	
	
return 0;
	
}
