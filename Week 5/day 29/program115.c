#include <stdio.h>

int main() {
    char str[200], temp[100];
    int choice;

    printf("Enter initial string: ");
    scanf(" %[^\n]", str);

    while (1) {
        printf("\n--- STRING OPERATIONS MENU ---\n");
        printf("1. Find Length\n2. Copy String\n3. Concatenate String\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int len = 0;
                while (str[len] != '\0') len++; 
                printf("Length of string = %d\n", len);
                break;
            }
            case 2: {
                int i = 0;
                while (str[i] != '\0') {
                    temp[i] = str[i]; 
                    i++;
                }
                temp[i] = '\0'; 
                printf("Copied string into temp: %s\n", temp);
                break;
            }
            case 3: {
                printf("Enter string to append: ");
                scanf(" %[^\n]", temp);
                int i = 0, j = 0;
                while (str[i] != '\0') i++; 
                while (temp[j] != '\0') {
                    str[i] = temp[j]; 
                    i++;
                    j++;
                }
                str[i] = '\0'; 
                printf("Updated string: %s\n", str);
                break;
            }
            case 4:
                return 0;
            default:
                printf("Invalid selection!\n");
        }
    }
}