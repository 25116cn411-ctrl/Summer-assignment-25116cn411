#include <stdio.h>

int main()
{
    int start, end, i, j, count;

    printf("Enter Start and End: ");
    scanf("%d %d", &start, &end);

    printf("Prime Numbers are:\n");

    for(i = start; i <= end; i++)
    {
        count = 0;

        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
                count++;
        }

        if(count == 2)
            printf("%d ", i);
    }

    return 0;
}