#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j = 0;
    for (i = 0; i < 5; i++)
    {
        printf("%d %d \n", i, j);
        j++;
    }

    getch();
}