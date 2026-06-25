#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements (in sorted order):\n");
    for (int i = 0; i < n1; i++) scanf("%d", &arr1[i]);

    printf("Enter size of second sorted array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements (in sorted order):\n");
    for (int i = 0; i < n2; i++) scanf("%d", &arr2[i]);

    int n3 = n1 + n2;
    int arr3[n3];

    int i = 0, j = 0, k = 0;

    // compare elements from both arrays and pick the smaller one
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            i++;
        } else {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }

    // if items are left over in arr1, copy them over directly
    while (i < n1) {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    // if items are left over in arr2, copy them over directly
    while (j < n2) {
        arr3[k] = arr2[j];
        j++;
        k++;
    }

    printf("Merged sorted array: ");
    for (int x = 0; x < n3; x++) printf("%d ", arr3[x]);
    printf("\n");

    return 0;
}