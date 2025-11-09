//Q-22 Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main()
{
    float cp, sp, profit, loss;
    printf("Enter cost price and selling price:\n");
    scanf("%f %f", &cp, &sp);

    if(sp>cp)
    {
        profit=sp-cp;
        printf("Profit=%.2f, Profit Percentage=%.2f%%\n", profit, (profit/cp)*100);
    }
    else if(cp>sp)
    {
        loss=cp-sp;
        printf("Loss=%.2f, Loss Percentage=%.2f%%\n", loss, (loss/cp)*100);
    }
    else
        printf("No profit no loss\n");
    return 0;
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
