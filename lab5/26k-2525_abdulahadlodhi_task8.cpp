#include <stdio.h>

int main() {
    int permission;

    printf("Enter user permission value: ");
    scanf("%d", &permission);

    if (permission & 1) {
        printf("- View\n");
    }
    if (permission & 2) {
        printf("- Train\n");
    }
    if (permission & 4) {
        printf("- Test\n");
    }
    if (permission & 8) {
        printf("- Deploy\n");
    }

    if ((permission & 2) && (permission & 8)) {
        printf("\n User has both training and deployment permsion.\n");
    } else {
        printf("\nUser has no training and deployment permsion\n");
    }

    return 0;
}
