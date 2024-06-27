#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enetr the digit");
    scanf("%d",&x);
 
    if (x>99&&x<1000)
    {
        printf("It is a three digit number ");

    }
    else
    {
        printf("Not a three digit number");
    }
    
    return 0;
}
