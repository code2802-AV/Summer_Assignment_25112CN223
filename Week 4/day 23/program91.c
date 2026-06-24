#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int count[256] = {0}; 
    int len1 = 0, len2 = 0;
    int is_anagram = 1;

    printf("Enter first string: ");
    scanf(" %[^\n]", str1);
    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    // finding lengths of both strings manually
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;

    // if lengths don't match, they cannot be anagrams
    if (len1 != len2) {
        printf("The strings are NOT anagrams.\n");
        return 0;
    }

    // increment tracking index for str1 and decrement it for str2
    for (int i = 0; i < len1; i++) {
        count[(int)str1[i]]++;
        count[(int)str2[i]]--;
    }

    
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            is_anagram = 0; 
            break;
        }
    }

    if (is_anagram) {
        printf("The strings are Anagrams.\n");
    } else {
        printf("The strings are NOT Anagrams.\n");
    }

    return 0;
}