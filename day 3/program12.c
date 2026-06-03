#include <stdio.h>

int main() {
    int n1, n2, gcd = 1, lcm;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

   
    n1 = (n1 < 0) ? -n1 : n1;
    n2 = (n2 < 0) ? -n2 : n2;

    int absoluteProduct = n1 * n2;

    
    for (int i = 1; i <= n1 && i <= n2; ++i) {
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }
    }

    lcm = absoluteProduct / gcd;

    printf("L.C.M of given numbers is: %d\n", lcm);
    return 0;
}
