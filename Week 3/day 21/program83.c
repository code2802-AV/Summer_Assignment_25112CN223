//count vowel and consonants

#include <stdio.h>

int main() {
    char str[150];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    // check each character from the start of the array
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

       
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
       
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }
    }

    printf("Vowels count = %d\n", vowels);
    printf("Consonants count = %d\n", consonants);
    return 0;
}