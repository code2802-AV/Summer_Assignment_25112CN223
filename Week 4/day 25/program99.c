#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("How many names do you want to sort? ");
    scanf("%d", &n);

    char names[n][50];
    char temp[50];

    printf("Enter %d names:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    // bubble sort track to compare adjacent string blocks
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            
            // strcmp returns greater than 0 if names[j] comes after names[j+1]
            if (strcmp(names[j], names[j + 1]) > 0) {
                // swap strings using strcpy
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    printf("\nNames sorted alphabetically:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}