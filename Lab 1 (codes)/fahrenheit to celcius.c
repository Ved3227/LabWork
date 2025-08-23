#include <stdio.h>
int main ()
{
   float num1, ans;
   printf("temprature in fahrenheit: ");
   scanf("%f", &num1);

   ans= (num1-32)*5/9;
   printf("temprature in celcius: %f", ans);

}
