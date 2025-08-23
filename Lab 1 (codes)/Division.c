#include <stdio.h>
int main()
{
   float num1,num2,div;
   printf("First Number:");
   scanf("%f", &num1);
   printf("Second Number:");
   scanf("%f", &num2);

   div= num1 / num2;
   printf("Division of the Numbers: %f", div);
   return 0;

}
