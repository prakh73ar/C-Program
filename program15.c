#include <stdio.h>
#include <conio.h>

void sum(int, int);
void sub(int, int);
void product(int, int);
void div(int, int);

void main()
{

    int x, y, result;

    printf("Enter the vaule of x and y\n");
    scanf("%d%d", &x, &y);

    sum(x, y);
    sub(x, y);
    product(x, y);
    div(x, y);

    getch();
}

void sum(int a, int b)
{
    int result;
    result = a + b;
    printf("Result is %d \n", result);
}

void sub(int a, int b)
{
    int result;
    result = a - b;
    printf("Result is %d \n", result);
}

void product(int a, int b)
{
    int result;
    result = a * b;
    printf("Result is %d \n", result);
}

void div(int a, int b)
{
    int result;
    result = a / b;
    printf("Result is %d \n", result);
}