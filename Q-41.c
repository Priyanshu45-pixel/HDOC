//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, digits = 0, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    while (num != 0) {
        firstDigit = num % 10;
        num /= 10;
        digits++;
    }

    if (digits == 1) {
        printf("Single digit number, no swap needed.\n");
    } else {
        swappedNum = lastDigit;
        num = firstDigit;

        for (int i = 1; i < digits - 1; i++) {
            num = num * 10 + (lastDigit % 10);
            lastDigit /= 10;
        }

        swappedNum = swappedNum * 10 + (firstDigit % 10);
        printf("Swapped number: %d\n", swappedNum);
    }

    return 0;
}