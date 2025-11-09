//Q6: Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter first no.-:\n");
    scanf("%d", &a);

    printf("Enter second no.-:\n");
    scanf("%d", &b);

    temp=a;
    a=b;
    b=temp;

    printf("After swapping, first no.-:%d, second no.-:%d\n", a, b);
    return 0;
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
