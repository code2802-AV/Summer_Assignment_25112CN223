#include <stdio.h>

int main() {
    double base, ans = 1.0;
    int exp, abs_exp;

    printf("Enter base (x): ");
    scanf("%lf", &base);
    printf("Enter exponent (n): ");
    scanf("%d", &exp);

    // If the exponent is negative, flip it to positive for the loop
    if (exp < 0) {
        abs_exp = -exp;
    } else {
        abs_exp = exp;
    }

    // Multiply 'base' to 'ans' exactly 'abs_exp' times
    for (int i = 1; i <= abs_exp; i++) {
        ans = ans * base;
    }

    // Fix the result if the original exponent was negative
    if (exp < 0) {
        ans = 1.0 / ans;
    }

    printf("%.2lf raised to the power %d is: %.5lf\n", base, exp, ans);
    return 0;
}