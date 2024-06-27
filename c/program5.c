#include <stdio.h>
#include <conio.h>

int main(void)
{
  int a, b, max;
  printf("Enter values for a and b :\n");
  scanf("%d%d", &a, &b);

  max = a > b ? a : b;
  printf("Larger of %d and %d is %d \n", a, b, max);

  return 0;
}