#include <stdio.h>

int main()
{
    int num, sum = 0, digit;

    printf("Enter Number: ");
    scanf("%d", &num);

    while(num != 0)
    {
        digit = num % 10;
        sum += digit;
        num = num / 10;
    }

    printf("Sum of Digits = %d", sum);

    return 0;
} 