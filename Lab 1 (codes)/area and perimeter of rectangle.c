#include <stdio.h>
int main()
{
   float l,b,area,perimeter;
   printf("Length: ");
   scanf("%f", &l);

   printf("Breadth: ");
   scanf ("%f", &b);


   area= l*b;
   printf("Area of the rectangle: %f\n", area);

   perimeter= 2*l + 2*b;
   printf("Perimeter of the rectangle: %f\n", perimeter);

   return 0;
}
