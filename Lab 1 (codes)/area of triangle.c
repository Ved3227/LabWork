#include <stdio.h>
int main()
{
   float h,b,area;
   printf("height of the triangle: ");
   scanf("%f", &h);

   printf("base of the triangle: ");
   scanf("%f", &b);


   area= h*b/2;
   printf("Area of the triangle: %f\n", area);

}
