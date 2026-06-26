#include <stdio.h>

int main() {
    int secret_num = 45; // setting a fixed number to guess
    int guess;
    int attempts = 0;

    printf("--- Welcome to the Number Guessing Game! ---\n");
    printf("I have picked a number between 1 and 100. Can you guess it?\n\n");

    // continuous loop that runs until the user hits the right number
    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        // checking the guess against our secret number
        if (guess > secret_num) {
            printf("Too high! Try a smaller number.\n\n");
        } 
        else if (guess < secret_num) {
            printf("Too low! Try a bigger number.\n\n");
        } 
        else {
            printf("Congratulations! You guessed it right in %d attempts.\n", attempts);
            break; 
        }
    }

    return 0;
}