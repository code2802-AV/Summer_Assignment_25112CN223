//Fibonacci using function

#include <stdio.h>

// just printing the series directly, no return needed
void printFibonacci(int terms) {
    int t1 = 0, t2 = 1;
    int next_term;

    printf("Fibonacci Series: ");

    for (int i = 1; i <= terms; i++) {
        printf("%d ", t1);
        
        // standard addition and swapping step to generate next terms
        next_term = t1 + t2;
        t1 = t2;        
        t2 = next_term; 
    }
    printf("\n");
}

int main() {
    int n;
    printf("How many Fibonacci terms do you want? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number greater than 0.\n");
    } else {
        printFibonacci(n);
    }

    return 0;
}