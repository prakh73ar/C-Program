#include <stdio.h>
#include <conio.h>
int main()
{
    int x, y;
    printf("Enter the coordiantes : ");
    scanf("%d", &x);
    printf("Enter the coordiantes : ");
    scanf("%d", &y);
    if (x == 0 && y == 0)
    {
        printf("The point is orgin");
    }
    else if (x == 0)
    {
        printf("Lies on y-axis");
    }
    else
    {
        printf("Lies on x-axis");
    }

    return 0;
}
