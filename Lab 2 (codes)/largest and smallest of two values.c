#include <stdio.h>
int main()
{
  int a,b;
  printf("number 1: ");
  scanf("%d",&a);

  printf("number 2: ");
  scanf("%d",&b);

  if (a>b)
          {
           printf("%d is the larger of the two numbers\n", a);
           printf("%d is the smaller of the two numbers", b);
          }

  else
         {
          printf("%d is the larger of the two numbers\n", b);
          printf("%d is the smaller of the two numbers", a);
         }

}
