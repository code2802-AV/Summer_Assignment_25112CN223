#include <stdio.h>

int main() {
    int num, temp, remainder, product = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    temp = num;

    // Handle case if number is 0
    if (temp == 0) {
        product = 0;
    } else {
        if (temp < 0) {
            temp = -temp; 
        }
        
        while (temp != 0) {
            remainder = temp % 10;
            product *= remainder;
            temp /= 10;
        }
    }

    printf("Product of digits of %d = %d\n", num, product);
    return 0;
}