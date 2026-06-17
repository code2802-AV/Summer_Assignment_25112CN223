//Find maximum frequency element

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

    int max_element = arr[0];
    int max_count = 0;

    // nested loop to check frequency of every single element
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        
        if (count > max_count) {
            max_count = count;
            max_element = arr[i];
        }
    }

    printf("Element with max frequency is %d (appears %d times).\n", max_element, max_count);
    return 0;
}