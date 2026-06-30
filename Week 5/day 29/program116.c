#include <stdio.h>

struct Product {
    int id;
    char name[50];
    int qty;
};

int main() {
    struct Product inv[50];
    int count = 0, choice;

    while (1) {
        printf("\n--- INVENTORY MANAGEMENT SYSTEM ---\n");
        printf("1. Add Product\n2. Display Inventory\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Product ID: ");
                scanf("%d", &inv[count].id);
                printf("Enter Product Name: ");
                scanf(" %[^\n]", inv[count].name);
                printf("Enter Quantity: ");
                scanf("%d", &inv[count].qty);
                count++; 
                printf("Product added successfully!\n");
                break;
            case 2:
                if (count == 0) {
                    printf("No inventory entries found!\n");
                } else {
                    printf("\nID\tName\t\tQuantity\n");
                    printf("---------------------------------\n");
                    for (int i = 0; i < count; i++) {
                        printf("%d\t%-15s\t%d\n", inv[i].id, inv[i].name, inv[i].qty);
                    }
                }
                break;
            case 3:
                return 0;
            default:
                printf("Invalid option selected!\n");
        }
    }
}