//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>
#include <stdlib.h>

int findMostFrequentDigit(int number) {
    int digitCount[10] = {0}; 
    int mostFrequentDigit = -1;
    int maxCount = 0;

    while (number > 0) {
        int digit = number % 10;
        digitCount[digit]++;
        number /= 10;
    }

  
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > maxCount) {
            maxCount = digitCount[i];
            mostFrequentDigit = i;
        }
    }

    return mostFrequentDigit;
}

int main() {
    int number;

    // Input
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Find and print the most frequent digit
    int result = findMostFrequentDigit(number);
    printf("The digit that occurs the most times is: %d\n", result);

    return 0;
}