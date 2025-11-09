//Q34 Write a program to check if a number is prime.
#include <stdio.h>
#include <stdbool.h>    
int main()
{
    int n;
    bool isPrime=true;
    printf("Enter a number:\n");
    scanf("%d", &n);

    if(n<=1)
        isPrime=false;
    else
    {
        for(int i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                isPrime=false;
                break;
            }
        }
    }

    if(isPrime)
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);
    return 0;
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
