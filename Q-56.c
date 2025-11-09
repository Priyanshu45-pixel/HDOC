//Q56: Read and print elements of a one-dimensional array.

/*
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr;

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

    printf("You entered: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Free the allocated memory
    free(arr);
    return 0;
}