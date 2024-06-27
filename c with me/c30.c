#include <stdio.h>
#include <conio.h>
int main()
{
    int marks[2][4] = {{45, 234, 2, 3},
                       {3, 3, 3, 4}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}