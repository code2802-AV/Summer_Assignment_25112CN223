#include <stdio.h>


struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    int n;
    printf("--- Student Record Management System ---\n");
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n]; 

    
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter Name: ");
        scanf(" %[^\n]", s[i].name); 
        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

   
    printf("\n================ STUDENT RECORDS ================\n");
    printf("Roll No\t\tName\t\t\tMarks\n");
    printf("-------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%-20s\t%.2f\n", s[i].roll_no, s[i].name, s[i].marks);
    }

    return 0;
}