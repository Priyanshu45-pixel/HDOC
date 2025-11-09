//Q29 Write a program to calculate the factorial of a number.
#include <stdio.h>
int main()
{
    int n;
    long long fact=1;
    printf("Enter a number:\n");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        fact *= i;
    }
    printf("Factorial of %d is %lld\n", n, fact);
    return 0;
}
