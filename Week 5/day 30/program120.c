#include <stdio.h>


struct StoreItem {
    int code;
    char name[50];
};


struct StoreItem shop[50];
int total_items = 0;

void displayMenu() {
    printf("\n==== GENERAL STORE INVENTORY SYSTEM ====\n");
    printf("1. Restock New Item\n");
    printf("2. Review Current Stock List\n");
    printf("3. Shut down Terminal System\n");
    printf("Enter choice: ");
}

void restockItem() {
    printf("Enter Item Code: ");
    scanf("%d", &shop[total_items].code);
    printf("Enter Item Name: ");
    scanf(" %[^\n]", shop[total_items].name);
    total_items++;
    printf("Item log successfully registered into terminal records!\n");
}

void listStock() {
    if (total_items == 0) {
        printf("Store warehouse report returns empty items status.\n");
    } else {
        printf("\nCode\tItem Name\n");
        printf("-----------------------\n");
        for (int i = 0; i < total_items; i++) {
            printf("%d\t%s\n", shop[i].code, shop[i].name);
        }
    }
}

int main() {
    int choice;

    
    while (1) {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                restockItem();
                break;
            case 2:
                listStock();
                break;
            case 3:
                printf("System shutting down securely. Terminal closed.\n");
                return 0;
            default:
                printf("Invalid input option! Choose another command code.\n");
        }
    }
    return 0;
}