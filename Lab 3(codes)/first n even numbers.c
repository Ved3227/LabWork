#include <stdio.h>

int main()
{
    int n,i;

    printf("Enter the value of n:");
    scanf("%d",&n);

    printf("The first %d even numbers are:\n", n);


    for (i = 2; i <= 2*n; i=i+2)
    {
        printf("%d\n", i);
    }

    return 0;
}
