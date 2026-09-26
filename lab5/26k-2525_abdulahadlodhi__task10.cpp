#include <stdio.h>
#include <math.h>

int main() {
    int user_role, model_status, data_size;
    float accuracy, confidence, model_score;
    int permissions;

    printf("Select User Role:\n1. Admin\n2. Developer\n3. Researcher\n ");
    scanf("%d", &user_role);

    // Input Model data
    printf("Enter Model Accuracy: ");
    scanf("%f", &accuracy);
    printf("Enter Model Confidence: ");
    scanf("%f", &confidence);
    printf("Enter Dataset Size (rows): ");
    scanf("%d", &data_size);

    // Input Model Status
    printf("\nSelect Model Status:\n1. Ready\n2. Testing\n3. Training\n: ");
    scanf("%d", &model_status);

    printf("\nEnter User Permissions:\n");
    printf("1 for View , 2 for Train , 4 for Test , 8 for Deploy\n");
    printf("Enter permission value: ");
    scanf("%d", &permissions);

    // Calculate Model Score
    model_score = (accuracy + confidence) / 2.0f;
    
 // using switch statement
    switch (user_role) {
        case 1:
            printf("User Role: Admin\n");
            break;
        case 2:
            printf("User Role: Developer\n");
            break;
        case 3:
            printf("User Role: Researcher\n");
            break;
        default:
            printf("Invalid User Role Selected.\n");
            return 1;
    }

    printf("Calculated Model Score: %.2f\n", model_score);

    switch (model_status) {
        case 1: 
            printf("Model Status: Ready\n");

            if (accuracy >= 80.0f && confidence >= 75.0f && data_size >= 1000 && (permissions & 8)) {
                printf("Deployment Status: READY FOR DEPLOYMENT\n");
            } else {
                printf("Deployment Status: not ready\n");
                if (accuracy < 80.0f){
                	printf("Low Accuracy");
				}
                if (confidence < 75.0f){
                	printf("Low Confidence ");
				} 
                if (data_size < 1000){
                	printf("Insufficient Dataset Size ");
				} 
            }
            break;

        case 2: 
            printf("Model Status: Testing\n");
            printf("Deployment Status: NOT READY Yet\n");
            break;

        case 3:
            printf("Model Status: Training\n");
            printf("Deployment Status:Not Ready Yet\n");
            break;

        default:
            printf("Invalid Model Status Selected.\n");
            break;
    }
    
    
    printf("\nSummary\n");
    printf("View    : %s\n", (permissions & 1) ? "YES" : "NO");
    printf("Train   : %s\n", (permissions & 2) ? "YES" : "NO");
    printf("Test    : %s\n", (permissions & 4) ? "YES" : "NO");
    printf("Deploy  : %s\n", (permissions & 8) ? "YES" : "NO");

    return 0;
}
