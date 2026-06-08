#include <stdio.h>
#include <math.h>

int main()
{
    long long binary;
    int decimal = 0, base = 1, rem;

    printf("Enter Binary Number: ");
    scanf("%lld", &binary);

    while(binary > 0)
    {
        rem = binary % 10;
        decimal += rem * base;
        base *= 2;
        binary /= 10;
    }

    printf("Decimal Number = %d", decimal);

    return 0;
}