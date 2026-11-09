#include <stdio.h>

int main() {
    char customer_name[50];
    int account_number;
    float withdrawal_amount;

    // collect the details of the transaction
    printf("Enter Customer Name: ");
    scanf("%49s", customer_name);

    printf("Enter Account Number: ");
    scanf("%d", &account_number);

    printf("Enter Withdrawal Amount: ");
    scanf("%f", &withdrawal_amount);

    // open the log file so the new entry is added at the end
    FILE *log_file = fopen("bank_log.txt", "a");

    if (log_file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(log_file, "Customer Name: %s, Account Number: %d, Withdrawal Amount: %.2f\n",
            customer_name, account_number, withdrawal_amount);

    fclose(log_file);

    printf("Transaction logged successfully to bank_log.txt\n");

    return 0;
}
