#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
    printf("Enetr first side ");
    scanf("%d", &a);
    printf("Enetr second side ");
    scanf("%d", &b);
    printf("Enter third side");
    scanf("%d", &c);

    if (a + b > c && b + c > a & c + a > b)
    {
        printf("Triangle valid");
    }
    else
    {
        printf("Invalid triangle");
    }

    return 0;
}