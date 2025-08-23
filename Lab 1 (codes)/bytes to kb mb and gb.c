#include <stdio.h>
int main()
{
   float num1,div;
   printf("Value in bytes:");
   scanf("%f", &num1);

   div= num1 / 1000;
   printf("Value in KB: %f\n", div);

   div= num1 / 1000000;
   printf("Value in MB: %f\n", div);

   div= num1 / 1000000000;
   printf("Value in GB: %f\n", div);

}
