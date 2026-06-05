#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;
    printf("enter the position of the term in fibonacci series");
    scanf("%d", &n);
    if (n == 1)
 {
    printf("the %d fibbonacci term is %d", n, first);

 }
 else if (n ==2 )
 {
    printf("the %d fibbonacci term is %d", n, second);
 }
 else
 {
    for (i = 3; i <= n; i++)
    {
        next = first + second;
        first = second;
        second = next;
    } }
 printf("the %d fibbonacci term is %d", n, second);   
    
    return 0;
}