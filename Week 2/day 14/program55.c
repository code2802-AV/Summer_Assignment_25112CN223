//Second largest element

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array needs to have at least 2 elements.\n");
        return 0;
    }

    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int sec_max = -1; // initializing to a dummy small value

    // one pass logic to track both highest and second highest values
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            sec_max = max; // old highest becomes second highest now
            max = arr[i];   // update new highest
        } 
       
        else if (arr[i] > sec_max && arr[i] != max) {
            sec_max = arr[i];
        }
    }

    if (sec_max == -1) {
        printf("There is no unique second largest element.\n");
    } else {
        printf("The second largest element is: %d\n", sec_max);
    }

    return 0;
}