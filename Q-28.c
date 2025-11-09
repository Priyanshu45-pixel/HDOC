//Q-28 Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main()  
{
    int n;
    long long product=1;
    printf("Enter a number:\n");
    scanf("%d", &n);

    for(int i=2; i<=n; i+=2)
    {
        product *= i;
    }
    printf("Product of even numbers from 1 to %d is %lld\n", n, product);
    return 0;
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
