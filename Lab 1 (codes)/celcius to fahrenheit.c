#include <stdio.h>
int main ()
{
   float num1, ans;
   printf("temprature in celcius: ");
   scanf("%f", &num1);

   ans= (num1 * 9/5) + 32;
   printf("temprature in fahrenheit: %f", ans);

}
