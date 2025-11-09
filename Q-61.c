//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>
int main()
{
    int n, i, search_element, found = -1;
    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to search for:\n");
    scanf("%d", &search_element);
    
    for(i = 0; i < n; i++)
    {
        if(arr[i] == search_element)
        {
            found = i;
            break;
        }
    }
    
    printf("%d\n", found);
    return 0;
}