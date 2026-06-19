//binary search

#include <stdio.h>

int main() {
    int n, key, found = -1;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements (MUST be entered in sorted order):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &key);

    int low = 0;
    int high = n - 1;

    // binary search logic: narrowing down search boundaries
    while (low <= high) {
        int mid = (low + high) / 2; // find the middle index
        
        if (arr[mid] == key) {
            found = mid; 
            break;
        } 
        else if (arr[mid] < key) {
            low = mid + 1; 
        } 
        else {
            high = mid - 1; 
        }
    }

    if (found != -1) {
        printf("Element found at index: %d\n", found);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}