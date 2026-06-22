//find string length

#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
   
    scanf("%[^\n]", str);

    // loop runs until it hits the null character at the end of the string
    while (str[length] != '\0') {
        length++; 
    }

    printf("Length of the string is: %d\n", length);
    return 0;
}