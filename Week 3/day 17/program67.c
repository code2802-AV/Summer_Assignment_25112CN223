//intersection of array

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

    printf("Intersection of the arrays is: ");

    // nested loop to compare each item of arr1 against all items of arr2
    for (int i = 0; i < n1; i++) {
    
        int internal_dup = 0;
        for (int k = 0; k < i; k++) {
            if (arr1[i] == arr1[k]) {
                internal_dup = 1;
                break;
            }
        }
        if (internal_dup) continue;

       
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break; 
            }
        }
    }
    printf("\n");

    return 0;
}