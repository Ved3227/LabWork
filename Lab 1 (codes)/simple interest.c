#include <stdio.h>
int main()
{
  float si, p, r, n;
  printf("Value of principle amount: ");
  scanf("%f", &p);

  printf("Value of rate of interest: ");
  scanf("%f", &r);

  printf("Amount of time: ");
  scanf("%f", &n);

  si= (p*r*n) / 100;
  printf("Simple Interest: %f", si);






}
