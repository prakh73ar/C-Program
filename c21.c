#include<stdio.h>
#include<conio.h>
int main()
{
    int cp,sp;
    printf("Enetr the cost price ");
    scanf("%d",&cp);
    printf("Enter the selling price ");
    scanf("%d",&sp);

    if (sp>cp)
    {
        printf("Profit");

    }
    else
    {
        printf("Loss");
    }
    
    return 0;
}