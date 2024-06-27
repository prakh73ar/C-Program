#include <stdio.h>
#include <conio.h>

int main()
{
    int year;
    printf("year=");
    scanf("%d", &year);

    if (year%400==0&&year%4==0||year%100!=0)
    {
        printf("Its is a leap ");
    }

    else
    {
        printf("not a leap ");
    }

    return 0;
}