//Find largest and smallest element

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // assume the first element is both largest and smallest initially
    int max = arr[0];
    int min = arr[0];

    // loop through the rest of the array to compare values
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // found a bigger one, update max
        }
        if (arr[i] < min) {
            min = arr[i]; // found a smaller one, update min
        }
    }

    printf("Largest element = %d\n", max);
    printf("Smallest element = %d\n", min);

    return 0;
}