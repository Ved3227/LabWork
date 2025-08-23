#include <stdio.h>
int main()
{
   float num1,div;
   printf("Amount in dollars:");
   scanf("%f", &num1);

   div= num1 / 1.45833;
   printf("Amount in pounds: %f", div);
   return 0;

}
