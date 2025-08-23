#include <stdio.h>
int main()
{
   float num1,num2,multiply;
   printf("First Number:");
   scanf("%f", &num1);

   printf("Second Number:");
   scanf("%f", &num2);

   multiply= num1 * num2;
   printf("Multiplication of the Numbers: %f", multiply);
   return 0;

}
