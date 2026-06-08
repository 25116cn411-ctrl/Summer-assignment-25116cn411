#include <stdio.h>

int main()
{
    int num, i;

    printf("Enter Number: ");
    scanf("%d", &num);

    printf("Factors are:\n");

    for(i = 1; i <= num; i++)
    {
        if(num % i == 0)
            printf("%d ", i);
    }

    return 0;
}