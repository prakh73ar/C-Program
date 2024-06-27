#include<stdio.h>
#include<conio.h>
int main()
{
    int l,b,a,p;
    printf("Enetr the Length ");
    scanf("%d",&l);
    printf("Enetr the breagth ");
    scanf("%d",&b);\
    a=l*b;
    p=2*(l+b);
 

    if (a>p)
    {
        printf("Area is grater than parameter");

    }
    else
    {
        printf("Parameter is grater than area");
    }
    
    return 0;
}