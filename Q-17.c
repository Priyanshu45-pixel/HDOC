//Q-17 Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d, r1, r2;
    printf("Enter coefficients a, b and c of the quadratic equation (ax^2 + bx + c = 0):\n");
    scanf("%f %f %f", &a, &b, &c);

    d=b*b - 4*a*c;

    if(d>0)
    {
        r1=(-b + sqrt(d))/(2*a);
        r2=(-b - sqrt(d))/(2*a);
        printf("Roots are real and distinct: r1=%.2f, r2=%.2f\n", r1, r2);
    }
    else if(d==0)
    {
        r1=r2=-b/(2*a);
        printf("Roots are real and equal: r1=r2=%.2f\n", r1);
    }
    else
        printf("Roots are complex and imaginary\n");
    return 0;
}
