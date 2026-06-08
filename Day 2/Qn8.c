#include <stdio.h>

int main()
{
    int num, original, rev = 0;

    printf("Enter Number: ");
    scanf("%d", &num);

    original = num;

    while(num != 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }

    if(original == rev)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
} 