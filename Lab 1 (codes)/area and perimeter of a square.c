#include <stdio.h>
int main()
{
   float num1,area,perimeter;
   printf("Length:");
   scanf("%f", &num1);


   area= num1 * num1;
   printf("Area of the square: %f\n", area);

   perimeter= num1 * 4;
   printf("Perimeter of the square: %f\n", perimeter);

   return 0;
}
