#include <stdio.h>

int main() {
    int num, temp, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;

    while(temp > 0) {
        digit = temp % 10;
        
        // Calculate factorial for each digit
        int fact = 1;
        for(int i = 1; i <= digit; i++) fact *= i;
        
        sum += fact;
        temp /= 10;
    }

    if(sum == num) printf("%d is a Strong number.\n", num);
    else printf("%d is not a Strong number.\n", num);
    return 0;
}