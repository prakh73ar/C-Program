#include<stdio.h>
int main()
{
int x;

printf("Enter the number you want multiplicatio of:\n");
scanf("%d",&x);
 
for (int i = 1; i <=10; ++i)
{
    printf("%d*%d=%d \n",x,i,x*i);
}

    return 0;
}