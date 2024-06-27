#include<stdio.h>
#include<conio.h>
void main()
{
   int age;

  printf("Enter the age \n");
  scanf("%d",&age);

  printf("You have entered %d  as your age\n",age);

if (age>=18)
{
    printf("You can vote !\n");
}

 else if (age>10)
 {
   printf("You are between 10 and 18 and you can vote for kids ");
 }
 

 else
 {
    printf("You cannot vote!\n");
 }



    getch();
}