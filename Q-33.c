//Q33 Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>

int main()
{
    int n, original, remainder, digits=0;
    printf("Enter a number:\n");
    scanf("%d", &n);
    original=n;

    // Count the number of digits
    while(original!=0)
    {
        original /= 10;
        digits++;
    }

    original=n;
    int sum=0;

    while(n!=0)
    {
        remainder = n%10;
        sum += pow(remainder, digits);
        n /= 10;
    }

    if(sum==original)
        printf("%d is an Armstrong number\n", original);
    else
        printf("%d is not an Armstrong number\n", original);
    return 0;
}
