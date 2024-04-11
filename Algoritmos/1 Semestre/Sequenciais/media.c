#include<stdio.h>
#include<stdlib.h>
int main(void)
{
  float A, B, media;

  scanf("%f",&A);

  scanf("%f",&B);

  media = ((A*3.5) + (B*7.5))/11.0;;

  printf("MEDIA = %.5f\n",media);

  return 0;
}