#include <stdio.h>
#include <conio.h>
void main()
{
    int i = 0, j = 0;
    for (; i < 5, j < 7; i++)
    {
        printf("%d %d \n", i, j);
        j++;
    }

    getch();
}