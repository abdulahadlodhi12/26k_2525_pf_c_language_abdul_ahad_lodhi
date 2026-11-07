#include <stdio.h>

void printsensordata(void *ptr, char type);

int main(){
    float temp;
    char door;
    int motion;

    printf("Enter temperature value (float): ");
    scanf("%f", &temp);

    printf("Enter door status ('O' for Open, 'C' for Closed): ");
    scanf(" %c", &door); 

    printf("Enter motion status (1 for detected, 0 for no motion): ");
    scanf("%d", &motion);

    // send each value with its type
    printsensordata(&temp, 'f');
    printsensordata(&door, 'c');
    printsensordata(&motion, 'i');

    return 0;
}

void printsensordata(void *ptr, char type) {
    if (type == 'f') {
        float *t = (float *)ptr;
        printf("Temperature: %.2f C\n", *t);
    } 
    else if (type == 'i'){
        int *m = (int *)ptr;
        if (*m == 1){
            printf("Motion Detected\n");
        }
        else if (*m == 0){
            printf("No Motion\n");
        }
    }
    else if (type == 'c') {
        char *d = (char *)ptr;
        if (*d == 'o' || *d == 'o') {
            printf("Door Open\n");
        } else {
            printf("Door Closed\n");
        }
    }
}
