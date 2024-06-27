#include <stdio.h>
#include <conio.h>

void main()
{
    int year;
    printf("Enter the value of year:");
    scanf("%d", &year);
    if (year % 400 == 0 && year % 100 == 0)
    {
        printf("%d is The given year is century year but not conferm is leap year", year);

        if (year % 4 == 0 && year % 100 != 0)
        {
            printf("%d is The leap year", year);
        }
        else
        {
            printf("this year is not leap year ");
        }
        
    }

    getch();
}