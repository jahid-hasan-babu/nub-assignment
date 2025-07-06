#include <stdio.h>

int main()
{
    int dividend, divisor, quotient, remainder;
    printf("Enter the dividend (numerator): ");
    scanf("%d", &dividend);

    printf("Enter the divisor (denominator): ");
    scanf("%d", &divisor);

    if (divisor == 0)
    {
        printf("Error! Division by zero is not allowed.\n");
        return 1;
    }

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}
