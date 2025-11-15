#include <stdio.h>

int main()
{
    int num, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digits of %d in reverse order: ", num);

    while(num > 0)
    {
        digit = num % 10;
        printf("%d", digit);
        if(num / 10 != 0)
        {
            printf(",");
        }
        num = num / 10;
    }

    printf("\n");

    return 0;
}
