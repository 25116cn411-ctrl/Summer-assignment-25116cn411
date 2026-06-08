#include <stdio.h>

int main()
{
    int n, count = 0;

    printf("Enter Number: ");
    scanf("%d", &n);

    while(n != 0)
    {
        n /= 10;
        count++;
    }

    printf("Total Digits = %d", count);

    return 0;
} 