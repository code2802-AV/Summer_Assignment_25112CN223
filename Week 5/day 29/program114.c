#include <stdio.h>

int main() {
    int arr[100], n = 0, choice, val;

    while (1) {
        printf("\n--- ARRAY OPERATIONS MENU ---\n");
        printf("1. Insert Element\n2. Display Array\n3. Find Maximum\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &val);
                arr[n] = val; 
                n++;          
                printf("Element inserted successfully!\n");
                break;
            case 2:
                if (n == 0) {
                    printf("Array is empty!\n");
                } else {
                    printf("Array elements: ");
                    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
                    printf("\n");
                }
                break;
            case 3:
                if (n == 0) {
                    printf("No elements in array to check!\n");
                } else {
                    int max = arr[0];
                   
                    for (int i = 1; i < n; i++) {
                        if (arr[i] > max) max = arr[i];
                    }
                    printf("Maximum element = %d\n", max);
                }
                break;
            case 4:
                printf("Exiting system.\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}