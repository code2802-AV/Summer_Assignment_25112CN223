#include <stdio.h>


struct Book {
    int book_id;
    char title[100];
    float price;
};

int main() {
    int n;
    printf("--- Library Management System ---\n");
    printf("Enter number of books to add: ");
    scanf("%d", &n);

    struct Book b[n]; 

    // step 1: loop to take inputs for all books
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Book %d:\n", i + 1);
        printf("Enter Book ID: ");
        scanf("%d", &b[i].book_id);
        printf("Enter Title: ");
        scanf(" %[^\n]", b[i].title); 
        printf("Enter Price: ");
        scanf("%f", &b[i].price);
    }

    // step 2: display the catalog in a neat format
    printf("\n================ LIBRARY CATALOG ================\n");
    printf("Book ID\t\tTitle\t\t\t\tPrice\n");
    printf("-------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%-30s\tRs. %.2f\n", b[i].book_id, b[i].title, b[i].price);
    }

    return 0;
}