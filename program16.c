#include <stdio.h>
#include <conio.h>

void sum(int, int);
void sub(int, int);

void main()
{
    int n1, n2;
    printf("Enter first number : \n");
    scanf("%d", &n1);
    printf("Enter second number : \n");
    scanf("%d", &n2);
    sum(n1, n2);
    sub(n1, n2);

    getch();
}

void sum(int x, int y)
{
    int result = x + y;
    printf("sum of %d and %d is %d \n", x, y, result);
}
void sub(int x, int y)
{
    int result = x - y;
    printf("sub of %d and %d is %d \n", x, y, result);
}
