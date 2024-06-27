#include <stdio.h>
#include <conio.h>
void main()
{
   int maths, physics, chemistry, english, hindi, obtmarks, total;
   float per;
   total = 500;

   printf("Enter the marks of math");
   scanf("%d", &maths);
   printf("Enter the marks of physics");
   scanf("%d", &physics);
   printf("Enter the marks of chemistry");
   scanf("%d", &chemistry);
   printf("Enter the marks of english");
   scanf("%d", &english);
   printf("Enter the marks of hindi");
   scanf("%d", &hindi);

   obtmarks = maths + physics + chemistry + english + hindi;
   per = obtmarks * 0.2f;

   printf("::::::::::::::::::::::::::::::::::::::::::::::::");
   printf("***********Student Evolution Slot************\n");
   printf("---------------------------------------------\n");
   printf("Name :\t   \tPrakhar Singh \t \n");
   printf("---------------------------------------------\n");
   printf("Subject    \t totalmark \t obtmarks \t \n");
   printf("--------------------------------------------\n");
   printf("Maths      \t 100      \t %d \n", maths);
   printf("Physics    \t 100      \t %d \n", physics);
   printf("Chemistry  \t 100      \t %d \n", chemistry);
   printf("English    \t 100      \t %d \n", english);
   printf("Hindi      \t 100      \t %d \n", hindi);
   printf("------------------------------------------\n");
   printf("Totall     \t 500      \t %d \n", obtmarks);
   printf("------------------------------------------\n");

   if (per >= 80)
   {
      printf("Grade:Excellent \n");
   }
   else if (per <= 80 && per >= 70)
   {
      printf("Grade:A+ \n");
   }
   else if (per < 70 && per >= 60)
   {
      printf("Grade:A \n");
   }
   else if (per < 60 && per >= 50)
   {
      printf("Grade:B \n");
   }

   else if (per < 50 && per >= 45)
   {
      printf("Grade:C \n");
   }
   else
   {
      printf("Tera kuch nhi ho sakta \n");
   }
   {
      printf("perrcentage is the %f", per);
   }
   getch();
}
