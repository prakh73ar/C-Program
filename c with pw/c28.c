#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("Enetr a number");
    scanf("%d", &a);

    if (a % 5 == 0)
    {
        if (a % 3 == 0)
        {
            printf("This number is divisble by 5 and 3");
        }

        else
        {
            printf("this number is not divisible by  3 but divisible by 5");
        }
    }
    else
    {
      printf("thsi is not divisible by 5 and 3");
    }
    
    return 0;
}
