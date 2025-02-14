#include <stdio.h>
#include <conio.h>
void main()
{
    int num;
    //find even odd using if else
    printf("Enter any integer no:");
    scanf("%d", &num);

    if (num % 2 == 0)

    {
        printf("%d is an even no: \n", num);
    }
    else
    {
        printf("%d is an odd no: \n", num);
    }

    getch();
}