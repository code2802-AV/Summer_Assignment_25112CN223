#include <stdio.h>

int main() {
    char ans;
    int score = 0;

    printf("--- Welcome to the Computer Science Quiz! ---\n");
    printf("Answer by typing A, B, C, or D in uppercase.\n\n");

    // Question 1
    printf("Q1. Brain of a computer system is known as?\n");
    printf("A. RAM\nB. CPU\nC. Hard Disk\nD. Monitor\n");
    printf("Your Answer: ");
    scanf(" %c", &ans); // space before %c helps clear input buffer bugs
    if (ans == 'B') {
        score++;
    }

    // Question 2
    printf("\nQ2. Which of the following is NOT a programming language?\n");
    printf("A. C++\nB. Python\nC. HTML\nD. Java\n");
    printf("Your Answer: ");
    scanf(" %c", &ans);
    if (ans == 'C') {
        score++;
    }

    // Question 3
    printf("\nQ3. What is the size of an 'int' data type in standard 32-bit C compiler?\n");
    printf("A. 1 Byte\nB. 2 Bytes\nC. 4 Bytes\nD. 8 Bytes\n");
    printf("Your Answer: ");
    scanf(" %c", &ans);
    if (ans == 'C') {
        score++;
    }

    // Final result screen calculation
    printf("\n--- Quiz Finished! ---\n");
    printf("Your final score is: %d out of 3\n", score);

    return 0;
}