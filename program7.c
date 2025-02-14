#include <stdio.h>
#include <conio.h>
void main()
{
   int year, flag;
   flag = false;
   printf("Enter the year");
   scanf("%d", &year);
   if (year % 400 == 0 && year % 100 == 0)
   {
      flag = true;
      || flag = 1;
   }

   else if (year % 4 == 0 && year != 0)
   {
      flag = true;
      || flag = 1;
   }

   getch();
}