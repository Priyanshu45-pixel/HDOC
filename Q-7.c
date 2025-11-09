//Q7: Write a program to swap two numbers without using a third variable.

#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter first no.-:\n");
    scanf("%d", &a);

    printf("Enter second no.-:\n");
    scanf("%d", &b);

    a=a+b; //a=30
    b=a-b; //b=10
    a=a-b; //a=20

    printf("After swapping, first no.-:%d, second no.-:%d\n", a, b);
    return 0;
}
