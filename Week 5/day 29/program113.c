#include <stdio.h>

int main() {
    int choice;
    double num1, num2;

    while (1) {
        printf("\n--- MENU CALCULATOR ---\n");
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting calculator. Goodbye!\n");
            break;
        }

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
        }

       
        switch (choice) {
            case 1:
                printf("Result = %.2lf\n", num1 + num2);
                break;
            case 2:
                printf("Result = %.2lf\n", num1 - num2);
                break;
            case 3:
                printf("Result = %.2lf\n", num1 * num2);
                break;
            case 4:
                // handling division by zero error condition safely
                if (num2 == 0) printf("Error! Division by zero is not allowed.\n");
                else printf("Result = %.2lf\n", num1 / num2);
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}