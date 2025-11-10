//Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
#include <stdio.h>

void productExceptSelf(int* nums, int numsSize, int* answer) {
    int prefix = 1;
    for (int i = 0; i < numsSize; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    int suffix = 1;
    for (int i = numsSize - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }
}

int main() {
    int nums[] = {1, 2, 3, 4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int answer[n];

    productExceptSelf(nums, n, answer);

    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i != n - 1) printf(", ");
    }
    printf("]\n");

    //Example 2
    int nums2[] = {-1, 1, 0, -3, 3};
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    int answer2[n2];
    
    productExceptSelf(nums2, n2, answer2);

    printf("[");
    for (int i = 0; i < n2; i++) {
        printf("%d", answer2[i]);
        if (i != n2 - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}
