//program to Linear search

#include <stdio.h>

int main() {
    int n, key, found = -1;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    // scan the array element 
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i; // save the index position where we found it
            break;     // stop searching since we got a match
        }
    }

    if (found != -1) {
        printf("Element found at index: %d\n", found);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}