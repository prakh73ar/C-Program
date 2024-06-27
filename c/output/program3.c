#include<stdio.h>
#include<conio.h>
 void main()
 {
int n1,n2,n3;
printf("Enter First no:");
scanf("%d",&n1);
printf("Enter Second no:");
scanf("%d",&n2);
printf("Enter Third no:");
scanf("%d",&n3);

if (n1>n2&&n1>n3)
{
    printf("%d is greatest ",n1);
}

else if (n2>n1&&n2>n3)
{
   printf("%d is greatest ",n2);

}

else
{
    printf("%d is greatest",n3);
}


    getch();
 }