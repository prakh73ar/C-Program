#include <stdio.h>
#include <conio.h>

float circlarea();
float squrarea();
float rectarea();

void main()
{
    float result1, result2, result3;
    result1 = circlarea();
    printf("Result of %f \n", result1);
    result2 = squrarea();
    printf("Result of %f \n", result2);
    result3 = rectarea();
    printf("Result of %f \n", result3);

    getch();
}
float circlarea()
{
    float r;
    printf("Enter the radius of circle \n");
    scanf("%f", &r);
    return ((3.14f) * r * r);
}
float squrarea()
{
    float side;
    printf("Enter the side of square \n");
    scanf("%f", &side);
    return (side * side);
}
float rectarea()
{
    float l, b;
    printf("Enter the length and bregth of rectangle \n");
    scanf("%f %f", &l, &b);
    return (l * b);
}
