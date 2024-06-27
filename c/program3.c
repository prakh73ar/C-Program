#include <stdio.h>
#include <conio.h>
void main()
{
   int n1, n2, n3;
   // find smallest number using if , esle if, esle
   printf("Enter First no:");
   scanf("%d", &n1);
   printf("Enter Second no:");
   scanf("%d", &n2);
   printf("Enter Third no:");
   scanf("%d", &n3);

   if (n1 < n2 && n1 < n3)
   {
      printf("%d is smallest ", n1);
   }

   else if (n2 < n1 && n2 < n3)
   {
      printf("%d is smallest ", n2);
   }

   else
   {
      printf("%d is smallest ", n3);
   }

   getch();
}