#include <stdio.h>

int main() {
    int num, temp;
    int count = 0;

    printf("Enter any integer: ");
    scanf("%d", &num);

    temp = num;

    // Shift and check until there are no bits left
    while (temp > 0) {
        // temp & 1 returns 1 only if the last bit is a 1
        if ((temp & 1) == 1) {
            count++;
        }
        
        // Shift bits to the right by 1 position
        temp = temp >> 1;
    }

    printf("Number of set bits (1s) in %d is: %d\n", num, count);
    return 0;
}