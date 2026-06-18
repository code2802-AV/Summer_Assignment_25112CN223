//merge array

#include <stdio.h>

int main() {
    int n1, n2;
    
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of first array:\n");
    for (int i = 0; i < n1; i++) scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of second array:\n");
    for (int i = 0; i < n2; i++) scanf("%d", &arr2[i]);

    // size of final array is sum of both sizes
    int merged_size = n1 + n2;
    int merged[merged_size];

    // step 1: copy all items from the first array
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // step 2: copy all items from the second array into remaining slots
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    printf("Merged array is: ");
    for (int i = 0; i < merged_size; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}