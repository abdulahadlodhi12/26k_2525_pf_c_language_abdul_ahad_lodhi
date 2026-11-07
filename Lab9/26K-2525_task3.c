#include <stdio.h>

int main() {
    int image[3][3];
    int (*ptr)[3] = image; 
    int i,j;

    printf("Enter values for a 3x3 image matrix (9 integers):\n");
    for ( i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", (*(ptr + i) + j)); 
        }
    }

    // increase every value through the pointer
    for (i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            *(*(ptr + i) + j) *= 2; 
        }
    }


    printf("\nUpdated 3x3 image matrix (Brightness Increased):\n");
    for ( i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", *(*(ptr + i) + j)); 
        }
        printf("\n");
    }

    return 0;
}
