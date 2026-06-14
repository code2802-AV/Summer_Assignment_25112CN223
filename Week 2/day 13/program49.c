//To Input and display array

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    // loop to take input from the user row by row
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The array elements are: ");
    // loop to print out the saved array elements
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}