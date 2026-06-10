// alphabet pattern based problems

#include <stdio.h>

int main() {
    int rows = 5;
    char ch = 'A'; 
    // outer loop runs 5 times for 5 lines
    for (int i = 1; i <= rows; i++) {
        
        // inner loop runs 'i' times 
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        
        ch++; // increment character to get 'B', then 'C', etc. for the next row
        printf("\n"); 
    }

    return 0;
}