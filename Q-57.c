//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n elements
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Sum of array elements: %d\n", sum);

    // Free the allocated memory
    free(arr);
    return 0;
}
