#include <stdio.h>

int main() {
    int age;

    printf("--- Voting Eligibility System ---\n");
    printf("Enter your age: ");
    scanf("%d", &age);

    // standard age restriction check 
    if (age >= 18) {
        printf("You are eligible to vote! Please cast your vote responsibly.\n");
    } 
    else if (age > 0) {
        int years_left = 18 - age; 
        printf("You are not eligible to vote yet.\n");
        printf("You need to wait %d more year(s) to become eligible.\n", years_left);
    } 
    else {
        printf("Invalid age entered. Please try again.\n");
    }

    return 0;
}