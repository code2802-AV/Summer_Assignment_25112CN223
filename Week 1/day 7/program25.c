#include <stdio.h>
int factorial (int);    

int main(){
int result , n ;
printf("enter the number");
scanf("%d", &n );
result = factorial(n);
printf("the factorial is = %d",result);
 
return 0;
}
int factorial (int n)
{
    if (n == 1)
    return 1 ;
    else
    return (n*factorial(n-1));

}