#include <stdio.h>

int main() {
    int num, temp, remainder, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    temp = num;
  
    if (temp < 0) {
        temp = -temp;
    }

    while (temp != 0) {
        remainder = temp % 10; 
        sum += remainder;      
        temp /= 10;            
    }

    printf("Sum of digits of %d = %d\n", num, sum);
    return 0;
}