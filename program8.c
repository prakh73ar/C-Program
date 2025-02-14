#include <stdio.h>
#include <conio.h>
void main()
{
    float grosssalary, basicsalary, ta, da, hra;

    printf("Enter Basic Salary");
    scanf("%f", &basicsalary);

    ta = (basicsalary * (0.025f));
    da = (basicsalary * (0.5f));
    hra = (basicsalary * (0.4f));

    printf("ta of basic salary %f\n", ta);
    printf("da of basic salary %f\n", da);
    printf("hra of basic salary %f\n", hra);

    grosssalary = basicsalary + ta + da + hra;

    printf("grosssal is %f\n", grosssalary);

    getch();
}