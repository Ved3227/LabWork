#include <stdio.h>
int main()
{
  float num1, multiply;
  printf("Hours: ");
  scanf("%f", &num1);

  multiply= num1 * 60;
  printf(" %f hours is %f minutes",num1,multiply);
  return 0;

}
