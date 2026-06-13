#include <stdio.h>

// function that compares two values and returns the bigger one
int findMax(int x, int y) {
    
    if (x > y) {
        return x; 
    } 
   
    else {
        return y;
    }
}

int main() {
    int a, b, max_val;

    printf("Enter two numbers to compare: ");
    scanf("%d %d", &a, &b);

    // sending 'a' and 'b' over to the function
    max_val = findMax(a, b);

    printf("The maximum number is: %d\n", max_val);
    return 0;
}