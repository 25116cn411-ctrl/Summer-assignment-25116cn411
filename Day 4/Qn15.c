#include <stdio.h>

int main()
{
    int num, original, digit;
    int sum = 0;

    printf("Enter Number: ");
    scanf("%d", &num);

    original = num;

    while(num != 0)
    {
        digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }

    if(sum == original)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}