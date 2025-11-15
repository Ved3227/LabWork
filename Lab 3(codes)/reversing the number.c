#include <stdio.h>

int main()
{
    int num, temp, digit, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp != 0)
    {
        digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp = temp / 10;
    }

    printf("Reversed number of %d = %d\n", num, reversed);

    return 0;
}
