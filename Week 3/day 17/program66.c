// union of array

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

    printf("Union of the arrays is: ");

    // step 1: print elements of first array, skipping its own duplicates
    for (int i = 0; i < n1; i++) {
        int duplicate = 0;
        for (int j = 0; j < i; j++) {
            if (arr1[i] == arr1[j]) {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate) printf("%d ", arr1[i]);
    }

    // step 2: print elements from second array ONLY if they aren't in first array
    for (int i = 0; i < n2; i++) {
        int found_in_first = 0;
        for (int j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                found_in_first = 1;
                break;
            }
        }
        
       
        if (!found_in_first) {
            int duplicate = 0;
            for (int k = 0; k < i; k++) {
                if (arr2[i] == arr2[k]) {
                    duplicate = 1;
                    break;
                }
            }
            if (!duplicate) printf("%d ", arr2[i]);
        }
    }
    printf("\n");

    return 0;
}