#include <stdio.h>
int main()
{
  float grs,netsal;
  printf("Gross Salary: ");
  scanf("%f", &grs);

  netsal= grs -(10*grs)/100;
  printf("the net sale is: %f", netsal);

}
