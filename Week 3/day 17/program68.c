//find common element

#include <stdio.h>

int main() {
    int n1, n2;
    
    printf("Enter size of array 1: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of array 1:\n");
    for (int i = 0; i < n1; i++) scanf("%d", &arr1[i]);

    printf("Enter size of array 2: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of array 2:\n");
    for (int i = 0; i < n2; i++) scanf("%d", &arr2[i]);

    printf("Common elements are: ");

    // loop to match elements across both arrays
    for (int i = 0; i < n1; i++) {
        
        int skipped = 0;
        for (int k = 0; k < i; k++) {
            if (arr1[i] == arr1[k]) {
                skipped = 1;
                break;
            }
        }
        if (skipped) continue;

        
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