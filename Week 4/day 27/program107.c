#include <stdio.h>

struct SalaryData {
    int emp_id;
    char name[50];
    float base_pay;
    float allowances;
    float gross_salary; 
};

int main() {
    int n;
    printf("--- Salary Management System ---\n");
    printf("Enter number of entries: ");
    scanf("%d", &n);

    struct SalaryData staff[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter salary metrics for Staff member %d:\n", i + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &staff[i].emp_id);
        printf("Enter Name: ");
        scanf(" %[^\n]", staff[i].name);
        printf("Enter Base Pay: ");
        scanf("%f", &staff[i].base_pay);
        printf("Enter Allowances: ");
        scanf("%f", &staff[i].allowances);

        
        staff[i].gross_salary = staff[i].base_pay + staff[i].allowances;
    }

    printf("\n================ PAYROLL REPORT ================\n");
    printf("ID\tName\t\tBase Pay\tAllowances\tGross Pay\n");
    printf("-----------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%-12s\t%.2f\t%.2f\t\t%.2f\n", 
               staff[i].emp_id, staff[i].name, staff[i].base_pay, staff[i].allowances, staff[i].gross_salary);
    }

    return 0;
}