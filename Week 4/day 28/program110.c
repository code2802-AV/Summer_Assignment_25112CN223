#include <stdio.h>


struct Account {
    long long acc_no;
    char name[50];
    float balance;
};

int main() {
    int n;
    printf("--- Bank Account Management System ---\n");
    printf("Enter number of accounts to create: ");
    scanf("%d", &n);

    struct Account acc[n];

    // collect input profile values row by row
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Account %d:\n", i + 1);
        printf("Enter Account Number: ");
        scanf("%lld", &acc[i].acc_no);
        printf("Enter Holder Name: ");
        scanf(" %[^\n]", acc[i].name);
        printf("Enter Starting Balance: ");
        scanf("%f", &acc[i].balance);
    }

    // printing customer account ledger records
    printf("\n================ SYSTEM CUSTOMER RECORDS ================\n");
    printf("Acc Number\t\tHolder Name\t\tBalance\n");
    printf("---------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%lld\t\t%-20s\tRs. %.2f\n", acc[i].acc_no, acc[i].name, acc[i].balance);
    }

    return 0;
}