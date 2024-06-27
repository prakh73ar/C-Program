#include <stdio.h>
#include <conio.h>
void main()
{
    int num, index = 0;
    printf("Enter a number");
    scanf("%d", &num);

    do
    {
        printf("%d \n", index + 2);
        index = index + 2;

    } while (index < num);

    getch();
}