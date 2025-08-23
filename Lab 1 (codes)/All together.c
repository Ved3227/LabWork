#include <stdio.h>
int main()
{
   float num1,num2,multiply,add,subtract,divide;
   printf("First Number:");
   scanf("%f", &num1);

   printf("Second Number:");
   scanf("%f", &num2);

   multiply= num1 * num2;
   printf("Multiplication of the Numbers: %f\n", multiply);

   add= num1 + num2;
   printf("Addition of the two numbers: %f\n", add);

   subtract= num1 - num2;
   printf("Subtraction of the two numbers: %f\n", subtract);

   divide= num1 / num2;
   printf("Division of the two numbers: %f\n", divide);
   return 0;
}
