#include <stdio.h>
#include <math.h>

int reverseNumber(int n, int digits)
{
    if(n == 0)
        return 0;

    return (n % 10) * pow(10, digits - 1)
           + reverseNumber(n / 10, digits - 1);
}

int main()
{
    int n, temp, digits = 0;

    printf("Enter Number: ");
    scanf("%d", &n);

    temp = n;

    while(temp != 0)
    {
        digits++;
        temp /= 10;
    }

    printf("Reversed Number = %d",
           reverseNumber(n, digits));

    return 0;
}