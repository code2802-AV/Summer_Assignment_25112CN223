#include <stdio.h>

struct BtechStudent {
    int roll;
    char name[50];
    char branch[10];
};

int main() {
    struct BtechStudent database[100];
    int total = 0, choice, search_roll, found;

    while (1) {
        printf("\n=== STUDENT RECORD SYSTEM ===\n");
        printf("1. Register Student\n2. Display All Records\n3. Search by Roll No\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &database[total].roll);
                printf("Enter Name: ");
                scanf(" %[^\n]", database[total].name);
                printf("Enter Branch (CSE, IT, ECE etc): ");
                scanf("%s", database[total].branch);
                total++;
                printf("Student profile saved successfully!\n");
                break;
            case 2:
                if (total == 0) printf("No students registered yet.\n");
                else {
                    printf("\nRoll No\tName\t\tBranch\n");
                    for (int i = 0; i < total; i++) {
                        printf("%d\t%-15s\t%s\n", database[i].roll, database[i].name, database[i].branch);
                    }
                }
                break;
            case 3:
                printf("Enter Roll Number to search: ");
                scanf("%d", &search_roll);
                found = 0;
                // scan the active record slots to look for a match
                for (int i = 0; i < total; i++) {
                    if (database[i].roll == search_roll) {
                        printf("\nRecord Found!\nName: %s\nBranch: %s\n", database[i].name, database[i].branch);
                        found = 1;
                        break;
                    }
                }
                if (!found) printf("Student record not found in system database.\n");
                break;
            case 4:
                return 0;
            default:
                printf("Wrong index option!\n");
        }
    }
}