#include <stdio.h>
#include <conio.h>

void main()
{
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("%d \n Enter your age :", i);
        scanf("%d", &age);
        if (age > 10)
        {
            break;
        }
        printf("we have not come accross any continue statement");
    }

    getch();
}