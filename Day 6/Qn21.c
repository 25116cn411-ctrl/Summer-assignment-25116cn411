#include <stdio.h>

int main()
{
    int num, binary[32], i = 0;

    printf("Enter Decimal Number: ");
    scanf("%d", &num);

    while(num > 0)
    {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary Number = ");

    for(i = i - 1; i >= 0; i--)
        printf("%d", binary[i]);

    return 0;
}