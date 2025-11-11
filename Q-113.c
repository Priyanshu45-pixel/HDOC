//Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
#include <stdio.h>

void sort(int arr[], int n) {
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(arr[i]>arr[j]){
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
}

int main() {
    int n,k;
    printf("Enter size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter k: ");
    scanf("%d",&k);
    sort(arr,n);
    printf("Kth smallest element = %d", arr[k-1]);
    return 0;
}
