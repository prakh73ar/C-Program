#include <stdio.h>
#include <conio.h>
int main()
{
    int marks[4];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of :\n", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d elements of the array is %d\n", i, marks[i]);
    }

    return 0;
}