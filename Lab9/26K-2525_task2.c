#include <stdio.h>

void withdraw(int *balance, int amount);
void deposit(int *balance, int amount);

int main() {
    int balance = 50000; // starting balance for this account
    int amount;
    char choice;

    printf("Enter transaction type ('d' for withdraw, 'c' for deposit): ");
    scanf(" %c", &choice);

    if (choice == 'd' || choice == 'd') {
        printf("Enter the withdrawal amount: ");
        scanf("%d", &amount);
        withdraw(&balance, amount);
    } 
    else if (choice == 'c' || choice == 'c') {
        printf("Enter the deposit amount: ");
        scanf("%d", &amount);
        deposit(&balance, amount);
    } 
    else {
        printf("Invalid transaction type!\n");
    }

    printf("Final account balance: %d\n", balance);
    return 0;
}

void withdraw(int *balance, int amount) {
    // update the original balance using its address
    if (amount <= *balance) {
        *balance -= amount;
        printf("Transaction is successful!\n");
    } else {
        printf("Transaction Declined: Insufficient Balance\n");
    }
}

void deposit(int *balance, int amount) {
    *balance += amount;
    printf("Transaction is successful! Updated balance: %d\n", *balance);
}
