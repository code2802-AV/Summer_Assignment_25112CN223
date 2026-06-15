//Frequency of an elemen

#include <stdio.h>

int main() {
    int n, target, count = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to find its frequency: ");
    scanf("%d", &target);

    // loop to match target with every item and count occurrences
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    printf("The element %d appears %d times.\n", target, count);
    return 0;
}