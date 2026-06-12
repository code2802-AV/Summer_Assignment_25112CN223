#include <stdio.h>

int findSum(int a, int b) {
    int total;
    total = a + b; 
    return total; 
}

int main() {
    int num1, num2, ans;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // calling our function here and saving whatever it returns into 'ans'
    ans = findSum(num1, num2);

    printf("The sum is: %d\n", ans);
    return 0;
}