#include <stdio.h>
#include <string.h>

int main() {
    char entered_username[50];
    char entered_password[50];
    char saved_username[50];
    char saved_password[50];

    // ask the user to enter their login details
    printf("Enter Username: ");
    scanf("%49s", entered_username);

    printf("Enter Password: ");
    scanf("%49s", entered_password);

    // read the saved login details from the configuration file
    FILE *credentials_file = fopen("credentials.txt", "r");

    if (credentials_file == NULL) {
        printf("Error: Configuration file not found!\n");
        return 1;
    }

    fscanf(credentials_file, "%49s %49s", saved_username, saved_password);
    fclose(credentials_file);

    // compare both entries and show the result
    if (strcmp(entered_username, saved_username) == 0 &&
        strcmp(entered_password, saved_password) == 0) {
        printf("Access Granted!\n");
    } else {
        printf("Access Denied!\n");
    }

    return 0;
}
