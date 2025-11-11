#include <stdio.h>
int main()
{
  float grssal,allw,ded,netsal;
  printf("gross salary: ");
  scanf("%f", &grssal);

  if (grssal>10000)
  {
    allw=(grssal*10)/100;
    ded= (grssal*3)/100;
  }

  else if (grssal>5000 && grssal<10000)
  {
    allw=(grssal*7)/100;
    ded= (grssal*2)/100;
  }


  netsal= grssal + allw - ded;
  printf("the net salary is %f", netsal);



}
