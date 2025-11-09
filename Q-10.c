//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
int main()
{
    int sec, hr, min, rem;
    printf("Enter time in seconds:\n");
    scanf("%d", &sec);

    hr=sec/3600;
    rem=sec%3600;
    min=rem/60;
    rem=rem%60;

    printf("Time in hh:mm:ss format is %02d:%02d:%02d\n", hr, min, rem);
    return 0;
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------
