#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{

    float x, sinx, cosx, tanx;
    printf("x=");
    scanf("%f", &x);
    sinx = sin(x * (3.142 / 180.0));
    cosx = cos(x * (3.142 / 180.0));
    tanx = tan(x * (3.142 / 180.0));

    printf("sin=%f \n", sinx);
    printf("cosx=%f \n", cosx);
    printf("tanx=%f \n", tanx);

    return 0;
}