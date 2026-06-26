#include <stdio.h>

int main() {
    double balance = 5000.0; 
    int choice;
    double amount;

    while (1) {
        // printing the main dashboard menu
        printf("\n=== ATM SIMULATION INTERFACE ===\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit Terminal\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: Rs. %.2lf\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%lf", &amount);
                if (amount > 0) {
                    balance += amount; // update total balance
                    printf("Rs. %.2lf deposited successfully!\n", amount);
                } else {
                    printf("Invalid amount!\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%lf", &amount);
                // check if the ATM account actually has enough money
                if (amount > balance) {
                    printf("Inadequate balance! Transaction failed.\n");
                } else if (amount <= 0) {
                    printf("Invalid amount!\n");
                } else {
                    balance -= amount; // deduct from balance
                    printf("Please collect your cash: Rs. %.2lf\n", amount);
                }
                break;

            case 4:
                printf("Thank you for using our ATM services. Goodbye!\n");
                return 0; 

            default:
                printf("Wrong choice! Select a valid option between 1 and 4.\n");
        }
    }

    return 0;
}