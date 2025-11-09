//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArr[]) {
    int i, j;
    
    for (i = 0; i < size1; i++) {
        mergedArr[i] = arr1[i];
    }

    for (j = 0; j < size2; j++) {
        mergedArr[i + j] = arr2[j];
    }
}