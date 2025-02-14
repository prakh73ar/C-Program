#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enetr the Number");
    scanf("%d",&x);
    

    if (x%5==0||x%3==0)
    {
        printf("The number of divisible 5 or 3");

    }
    else
    {
        printf("This number is not divisble by 5 or 3");
    }
    
    return 0;
}