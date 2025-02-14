#include <stdio.h>
#include <conio.h>
void main()
{
   int x;
   // find out given number is even and divisible by 7 using if esle
   printf("Enter value of x:");
   scanf("%d", &x);

   if (x % 2 == 0 && x % 7 == 0)
   {
      printf("%d is even no and also divisble by 7 \n", x);
   }
   else if (x % 2 != 0 && x % 7 == 0)
   {
      printf("%d is not even number but  divisble by 7 \n", x);
   }
   else if (x % 2 == 0 && x % 7 != 0)
   {
      printf("%d is even no but not divisble by 7 \n", x);
   }

   else
   {
      printf("%d is not even number and also not divisble by 7 \n", x);
   }

   getch();
}