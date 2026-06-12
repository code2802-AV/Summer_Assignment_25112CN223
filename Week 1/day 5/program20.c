#include <stdio.h>

int main() {
    int num, largest = -1;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Divide by 2 until it's odd
    while(num % 2 == 0) {
        largest = 2;
        num /= 2;
    }

    // Divide by odd numbers starting from 3
    for(int i = 3; i * i <= num; i += 2) {
        while(num % i == 0) {
            largest = i;
            num /= i;
        }
    }

    // If num is still > 2, it is the largest prime factor
    if(num > 2) largest = num;

    printf("Largest prime factor is: %d\n", largest);
    return 0;
}