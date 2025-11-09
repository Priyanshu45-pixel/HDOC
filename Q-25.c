//Q25-Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>
int main()
{
    char operator;
    float num1, num2;
    printf("Enter an operator (+, -, *, /, %%):\n");
    scanf(" %c", &operator);
    printf("Enter two numbers:\n");
    scanf("%f %f", &num1, &num2);

    switch(operator)
    {
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1+num2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1-num2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1*num2);
            break;
        case '/':
            if(num2!=0)
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1/num2);
            else
                printf("Division by zero error!\n");
            break;
        case '%':
            if((int)num2!=0)
                printf("%.2f %% %.2f = %.2f\n", num1, num2, (int)num1%(int)num2);
            else
                printf("Division by zero error!\n");
            break;
        default:
            printf("Invalid operator!\n");
    }
    return 0;
}
