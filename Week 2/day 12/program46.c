//Armstrong using function

#include <stdio.h>

int isArmstrong(int num) {
    int temp = num;
    int count = 0;
    int sum = 0;

    // step 1: count how many digits are there
    while (temp > 0) {
        count++;
        temp = temp / 10;
    }

    temp = num; 

    // step 2: extract digits and calculate powers manually
    while (temp > 0) {
        int digit = temp % 10;
        
        int power = 1;
        for (int i = 1; i <= count; i++) {
            power = power * digit;
        }
        
        sum = sum + power;
        temp = temp / 10;
    }

    // step 3: check if total sum matches the original input
    if (sum == num) {
        return 1;
    } else {
        return 0; 
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n) == 1) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is NOT an Armstrong number.\n", n);
    }

    return 0;
}