//Remove duplicates from array

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

    int unique_size = 0; 

    for (int i = 0; i < n; i++) {
        int is_duplicate = 0;
        
       
        for (int j = 0; j < unique_size; j++) {
            if (arr[i] == arr[j]) {
                is_duplicate = 1;
                break;
            }
        }
        
        
        if (!is_duplicate) {
            arr[unique_size] = arr[i];
            unique_size++;
        }
    }

    printf("Array after removing duplicates: ");
    for (int i = 0; i < unique_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}