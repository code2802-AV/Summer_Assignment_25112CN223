#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15]; 
    char email[50];
};

int main() {
    int n;
    printf("--- Contact Management System ---\n");
    printf("Enter total number of contacts to save: ");
    scanf("%d", &n);

    struct Contact list[n];

    // loop to collect telephone list indices row by row
    for (int i = 0; i < n; i++) {
        printf("\nEnter data for Contact %d:\n", i + 1);
        printf("Enter Name: ");
        scanf(" %[^\n]", list[i].name);
        printf("Enter Phone Number: ");
        scanf("%s", list[i].phone); 
        printf("Enter Email ID: ");
        scanf("%s", list[i].email);
    }

    printf("\n================ SAVED CONTACT CARD LIST ================\n");
    printf("%-20s\t%-15s\t%-30s\n", "Name", "Phone Number", "Email Address");
    printf("----------------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-20s\t%-15s\t%-30s\n", list[i].name, list[i].phone, list[i].email);
    }

    return 0;
}