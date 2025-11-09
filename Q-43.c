//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    return num * factorial(num - 1);
}
int main() {
    int num, originalNum, remainder, result = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num;
    while (num != 0) {
        remainder = num % 10;
        result += factorial(remainder);
        num /= 10;
    }
    if (result == originalNum) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }
    return 0;
}