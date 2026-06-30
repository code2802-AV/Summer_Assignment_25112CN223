#include <stdio.h>

struct CorporateEmp {
    int id;
    char name[50];
    char post[30];
};

int main() {
    struct CorporateEmp directory[50];
    int entries = 0, choice, search_id, found;

    while (1) {
        printf("\n=== MINI EMPLOYEE REGISTRY ===\n");
        printf("1. Register Employee\n2. View Staff Directory\n3. Search by ID\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter unique Staff ID: ");
                scanf("%d", &directory[entries].id);
                printf("Enter Full Name: ");
                scanf(" %[^\n]", directory[entries].name);
                printf("Enter Designation Post: ");
                scanf(" %[^\n]", directory[entries].post);
                entries++;
                printf("Corporate employee file created!\n");
                break;
            case 2:
                if (entries == 0) printf("No registry profiles matching standard fields found.\n");
                else {
                    printf("\nID\tName\t\tDesignation\n");
                    for (int i = 0; i < entries; i++) {
                        printf("%d\t%-15s\t%s\n", directory[i].id, directory[i].name, directory[i].post);
                    }
                }
                break;
            case 3:
                printf("Enter Employee ID to track: ");
                scanf("%d", &search_id);
                found = 0;
                for (int i = 0; i < entries; i++) {
                    if (directory[i].id == search_id) {
                        printf("\nProfile Found!\nName: %s\nDesignation: %s\n", directory[i].name, directory[i].post);
                        found = 1;
                        break;
                    }
                }
                if (!found) printf("No employee records match the given ID value.\n");
                break;
            case 4:
                return 0;
            default:
                printf("Invalid command option code!\n");
        }
    }
}