//Find missing number in array

#include <stdio.h>

int main() {
    int n; 
    printf("Enter what the total count 'n' should be: ");
    scanf("%d", &n);

    int arr[n - 1];
    int actual_sum = 0;

    printf("Enter %d elements (from 1 to %d with one missing):\n", n - 1, n);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        actual_sum += arr[i]; 
    }

    // math formula to find sum of first n natural numbers
    int expected_sum = (n * (n + 1)) / 2;

    int missing = expected_sum - actual_sum;
    printf("The missing number is: %d\n", missing);

    return 0;
}