#include <stdio.h>
int main()
{
  float mat, sci, eng, avgmrks, totalmrks;
  printf("marks in maths:");
  scanf("%f", &mat);

  printf("marks in science:");
  scanf("%f", &sci);

  printf("marks in english:");
  scanf("%f", &eng);

  avgmrks= (mat + sci + eng)/3;
  printf("the average marks are: %f\n", avgmrks);

  totalmrks= mat + sci + eng;
  printf("the total marks are: %f\n", totalmrks);
}
