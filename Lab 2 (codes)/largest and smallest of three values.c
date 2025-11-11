#include <stdio.h>
int main()
{
  int a,b,c, largest, smallest;
  printf("number 1: ");
  scanf("%d",&a);

  printf("number 2: ");
  scanf("%d",&b);

  printf("number 3: ");
  scanf("%d",&c);

  largest=a;
  if (b>largest)
  {
   largest=b;
  }

  if (c>largest)
  {
   largest=c;
  }

  smallest=a;
  if (b<smallest)
  {
   smallest=b;
  }

  if (c<smallest)
  {
   smallest=c;
  }

  printf("the largest number is: %d\n", largest);
  printf("the smallest number is: %d", smallest);
  return 0;
}
