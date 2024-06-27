#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("Enetr percentage");
    scanf("%d", &a);
    if (a > 80)
    {
        printf("A grade");
    }
    else if (a > 60)
    {
        printf("B grade");
    }
    else if (a > 40)
    {
        printf("C grade");
    }

    else
    {
        printf("fail");
    }

    return 0;
}
