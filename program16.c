#include <stdio.h>

int main()
{
    int start, end, num, original, remainder;
    int sum;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers are:\n");

    for (num = start; num <= end; num++)
    {
        original = num;
        sum = 0;

        while (original != 0)
        {
            remainder = original % 10;
            sum = sum + (remainder * remainder * remainder);
            original = original / 10;
        }

        if (sum == num)
        {
            printf("%d ", num);
        }
    }

    return 0;
}

