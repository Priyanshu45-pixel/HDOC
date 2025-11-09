//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

void insertInSortedArray(int arr[], int size, int element) {
    int i;
    for (i = size - 1; (i >= 0 && arr[i] > element); i--) {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = element;
}

int main() {
    int n;

 
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n + 1];  

   
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int element;
    
    printf("Enter the element to insert: ");
    scanf("%d", &element);

 
    insertInSortedArray(arr, n, element);

   
    printf("Updated array: ");
    for (int i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}