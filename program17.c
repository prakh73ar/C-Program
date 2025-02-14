#include <stdio.h>
#include <conio.h>

void main()
{
    int num, sum, digit, temp;
    printf("Enter the number");
    scanf("%d", &num);
    temp = num;
    sum = 0;

    do
    {
        sum = sum + (num % 10);
        num = num / 10;
        printf("sum of digits %d is %d", temp, sum)
    } while (num != 0);

    getch();
}