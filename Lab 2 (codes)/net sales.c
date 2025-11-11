#include <stdio.h>
int main()
{
  float grssal,netsal,dis;
  printf("gross sales: ");
  scanf("%f", &grssal);

  if (grssal>20000)
  {
    dis=(grssal*15)/100;
  }

  else if (grssal>10000 && grssal<20000)
  {
    dis=(grssal*10)/100;
  }

  else if (grssal<10000)
  {
    dis=(grssal*5)/100;
  }


  netsal= grssal - dis;
  printf("the net sales are %f", netsal);



}
