#include <stdio.h>
#include <conio.h>
int main(void)
{
   int a = -3;
   a = -a - a + !a;

   printf("%d\n", a);

   return 0;
}