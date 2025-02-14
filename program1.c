#include <stdio.h>
#include <conio.h>
void main()
{
   int num;
//find out number is even or odd using if statement only
   printf("Enter any integer no:");
   scanf("%d", &num);

   if (num % 2 == 0)
   {
      printf("%d is an even no: \n", num);
   }
   if (num % 2 != 0)
   {
      printf("%d is an odd no: \n", num);
   }

   getch();
}