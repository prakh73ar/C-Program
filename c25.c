#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
    printf("Enetr first number ");
    scanf("%d", &a);
    printf("Enetr second number ");
    scanf("%d", &b);
    printf("Enter third number");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("A is gratest");
    }
    if (b > c && b > a)
    {
        printf("b is gratest");
    }
    if (c > b && c > a)
    {
        printf("c is gratest");
    }

    return 0;
}