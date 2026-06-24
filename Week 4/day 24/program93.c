#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    printf("Enter original string: ");
    scanf(" %[^\n]", str1);
    printf("Enter string to check for rotation: ");
    scanf(" %[^\n]", str2);

   
    if (strlen(str1) != strlen(str2)) {
        printf("The string is NOT a rotation.\n");
        return 0;
    }

    
    strcpy(temp, str1);
    strcat(temp, str1);

   
    if (strstr(temp, str2) != NULL) {
        printf("Yes, the string is a valid rotation.\n");
    } else {
        printf("No, the string is NOT a rotation.\n");
    }

    return 0;
}