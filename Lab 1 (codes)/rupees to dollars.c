#include <stdio.h>
int main()
{
   float num1,div;
   printf("Amount in rupees:");
   scanf("%f", &num1);

   div= num1 / 48;
   printf("Amount in dollars: %f", div);
   return 0;

}
