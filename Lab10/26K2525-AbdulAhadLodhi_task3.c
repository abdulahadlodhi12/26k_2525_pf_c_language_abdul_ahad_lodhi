#include <stdio.h>
#include <string.h>

int main() {
    char email_address[100];
    char email_domain[50];

    // ask the user for an email address
    printf("Enter employee email address: ");
    scanf("%99s", email_address);

    // find the @ symbol to separate the domain
    char *at_symbol_position = strchr(email_address, '@');

    if (at_symbol_position == NULL) {
        printf("Invalid Email Format\n");
    } else {
        strcpy(email_domain, at_symbol_position + 1);
        printf("Extracted Domain: %s\n", email_domain);
    }

    return 0;
}
