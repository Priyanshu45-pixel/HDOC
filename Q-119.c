//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= arr[i];
        result ^= i;
    }
    result ^= n - 1;

    printf("The repeated element is: %d\n", result);
    return 0;
}
