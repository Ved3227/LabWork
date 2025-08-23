#include <stdio.h>
int main()
{
   int num1,num2,difference;
   printf("First Number:");
   scanf("%d", &num1);
   printf("Second Number:");
   scanf("%d", &num2);

   difference = num1 - num2;
   printf("Difference of the Numbers: %d", difference);
   return 0;

}
