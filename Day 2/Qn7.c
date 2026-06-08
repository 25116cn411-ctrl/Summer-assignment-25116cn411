#include <stdio.h>

int main()
{
    int num, digit;
    int product = 1;

    printf("Enter Number: ");
    scanf("%d", &num);

    while(num != 0)
    {
        digit = num % 10;
        product *= digit;
        num = num / 10;
    }

    printf("Product of Digits = %d", product);

    return 0;
} 