#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("Even Number");
    }

    if (a % 2 != 0)
    {
        printf("Odd Number");
    }

    return 0;
}