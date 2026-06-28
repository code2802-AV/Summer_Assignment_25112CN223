#include <stdio.h>


struct Employee {
    int emp_id;
    char name[50];
    float salary;
};

int main() {
    int n;
    printf("--- Employee Management System ---\n");
    printf("Enter total number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

  
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].emp_id);
        printf("Enter Name: ");
        scanf(" %[^\n]", emp[i].name);
        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }

    
    printf("\n================ EMPLOYEE DATABASE ================\n");
    printf("Emp ID\t\tName\t\t\tSalary\n");
    printf("---------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%-20s\tRs. %.2f\n", emp[i].emp_id, emp[i].name, emp[i].salary);
    }

    return 0;
}