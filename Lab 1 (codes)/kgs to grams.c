#include <stdio.h>
int main()
{
   float num1,multiply;
   printf("weight in kg:");
   scanf("%f", &num1);

   multiply= num1 * 1000;
   printf("weight in grams: %f", multiply);
   return 0;

}
