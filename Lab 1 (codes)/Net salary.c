#include <stdio.h>
int main()
{
  float grs,alw,ded, netsal;
  printf("Gross Salary: ");
  scanf("%f", &grs);

  alw= (10*grs)/100;

  printf("allowence: %f\n", alw);

  ded= (3*grs)/100;

  printf("deduction: %f\n", ded);

  netsal= grs + alw - ded;
  printf("the net salary is: %f", netsal);

}
