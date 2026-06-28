#include <stdio.h>

struct Marksheet {
    int roll_no;
    char name[50];
    int physics;
    int chemistry;
    int math;
    int total;
    float percentage;
};

int main() {
    int n;
    printf("--- Marksheet Generation System ---\n");
    printf("Enter number of student marksheets to generate: ");
    scanf("%d", &n);

    struct Marksheet report[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter grades for Student %d:\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &report[i].roll_no);
        printf("Enter Name: ");
        scanf(" %[^\n]", report[i].name);
        printf("Enter Physics Marks (out of 100): ");
        scanf("%d", &report[i].physics);
        printf("Enter Chemistry Marks (out of 100): ");
        scanf("%d", &report[i].chemistry);
        printf("Enter Math Marks (out of 100): ");
        scanf("%d", &report[i].math);

        // calculate total and percentage metrics automatically
        report[i].total = report[i].physics + report[i].chemistry + report[i].math;
        report[i].percentage = (float)report[i].total / 3;
    }

    
    for (int i = 0; i < n; i++) {
        printf("\n=============================================");
        printf("\n             ACADEMIC MARKSHEET              ");
        printf("\n=============================================");
        printf("\nRoll No: %d            Name: %s", report[i].roll_no, report[i].name);
        printf("\n---------------------------------------------");
        printf("\nPhysics   : %d / 100", report[i].physics);
        printf("\nChemistry : %d / 100", report[i].chemistry);
        printf("\nMath      : %d / 100", report[i].math);
        printf("\n---------------------------------------------");
        printf("\nGrand Total: %d / 300", report[i].total);
        printf("\nPercentage : %.2f%%", report[i].percentage);
        printf("\n=============================================\n");
    }

    return 0;
}