//To move zeroes to end

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

    int count = 0; 

    // placing non-zero elements to the front positions
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count] = arr[i];
            count++;
        }
    }

    // fill up all the remaining empty slots at the end with zeros
    while (count < n) {
        arr[count] = 0;
        count++;
    }

    printf("Array after moving zeroes: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}