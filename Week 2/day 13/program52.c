//Count even and odd elements

#include <stdio.h>

int main() {
    int n;
    int even_count = 0, odd_count = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // loop to check divisibility of each element
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even_count++; // perfectly divisible by 2 means even
        } else {
            odd_count++;  // otherwise it is odd
        }
    }

    printf("Total Even elements = %d\n", even_count);
    printf("Total Odd elements = %d\n", odd_count);

    return 0;
}