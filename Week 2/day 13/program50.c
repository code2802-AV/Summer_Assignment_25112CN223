//Find sum and average of array

#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i]; // adding each element to sum as we take input
    }

    // typecasting sum to float so the decimal division doesn't get messed up
    avg = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}