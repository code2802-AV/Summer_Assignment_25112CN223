//selection sort

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

    // selection sort logic: find the minimum and pull it forward
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i; // assume current position holds the lowest value
        
        // look ahead through the rest of the array for a smaller value
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j; // update position of the lowest value
            }
        }
        
        // swap the smallest found element into its correct sorted slot
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }

    printf("Sorted array using Selection Sort: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}