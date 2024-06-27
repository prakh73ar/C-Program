#include <stdio.h>
#include <conio.h>
int factorial(int number)

{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}
int main()
{
    int x;
    printf("Enter the number you want to factorial");
    scanf("%d", &x);
    printf("The factorial of %d is %d \n", x, factorial(x));

    return 0;
}