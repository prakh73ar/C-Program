#include <stdio.h>
#include <conio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d", &x);
    x % 2 == 0 ? printf("Even number ") : printf("Odd number "); //ternary opertor
    //  if (x%2==0)
    //  {
    //     printf("Even number ");

    //  }
    //  else
    //  {
    //     printf("Odd number ");
    //  }

    return 0;
}
