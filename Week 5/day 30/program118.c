#include <stdio.h>

struct LibraryBook {
    int accession_no;
    char title[100];
    int is_issued; // track if borrowed (1 for yes, 0 for no)
};

int main() {
    struct LibraryBook collection[50];
    int book_count = 0, choice;

    while (1) {
        printf("\n=== MINI LIBRARY MODULE ===\n");
        printf("1. Add New Book\n2. View Book Stock Ledger\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Book Accession ID: ");
                scanf("%d", &collection[book_count].accession_no);
                printf("Enter Book Title: ");
                scanf(" %[^\n]", collection[book_count].title);
                collection[book_count].is_issued = 0; // standard default is in-stock
                book_count++;
                printf("Book logged into inventory system!\n");
                break;
            case 2:
                if (book_count == 0) printf("Library collection is completely empty.\n");
                else {
                    printf("\nAcc ID\tTitle\t\t\tStatus\n");
                    printf("-------------------------------------------\n");
                    for (int i = 0; i < book_count; i++) {
                        printf("%d\t%-20s\t%s\n", collection[i].accession_no, collection[i].title,
                               (collection[i].is_issued == 1) ? "Borrowed" : "Available");
                    }
                }
                break;
            case 3:
                return 0;
            default:
                printf("Invalid selection!\n");
        }
    }
}