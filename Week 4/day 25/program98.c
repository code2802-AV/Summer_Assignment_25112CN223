#include <stdio.h>

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf(" %[^\n]", str1);
    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    printf("Common characters are: ");

   
    for (int i = 0; str1[i] != '\0'; i++) {
        
        
        if (str1[i] == ' ') continue;

       
        for (int j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j]) {
                printf("%c ", str1[i]);
                str2[j] = ' '; 
                break;         
            }
        }
    }
    printf("\n");

    return 0;
}