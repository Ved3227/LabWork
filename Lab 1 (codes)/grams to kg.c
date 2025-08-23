#include <stdio.h>
int main()
{
   float num1,div;
   printf("Weight in grams:");
   scanf("%f", &num1);

   div= num1 / 1000;
   printf("Weight in kg: %f", div);
   return 0;

}
