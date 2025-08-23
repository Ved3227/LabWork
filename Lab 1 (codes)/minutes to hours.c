#include <stdio.h>
int main()
{
  float num1, divide;
  printf("minutes: ");
  scanf("%f", &num1);

  divide= num1 / 60;
  printf(" %f minutes is %f hours",num1,divide);
  return 0;

}
