#include <stdio.h>
#include <conio.h>

void sum();
void sub();
void main()
{
    sum();
    sub();
    getch();
}

void sum()
{

    int n1, n2, result;
    printf("Enter the number : \n");
    scanf("%d", &n1);
    printf("Enter the number : \n");
    scanf("%d", &n2);

    result = n1 + n2;
    printf("Sum of two no is %d \n" ,result);
}

void sub()
{

    int n1, n2, result;
    printf("Enter the number : \n");
    scanf("%d", &n1);
    printf("Enter the number : \n");
    scanf("%d", &n2);

    result = n1 - n2;
    printf("Sub of two no is %d \n" ,result);
}
