#include <stdio.h>

int binarySearch(int nums[], int left, int right, int target) {
    // Base condition (search space is exhausted)
    if (left > right) {
        return -1;
    }

    // find the mid-value in the search space and compares it with the target
    int mid = left + (right - left) / 2;

    // Base condition (a target is found)
    return (target == nums[mid]) ? mid :
        (target < nums[mid]) ? binarySearch(nums, left, mid - 1, target) :
        binarySearch(nums, mid + 1, right, target);
}

int main() {
    int nums[] = { 2, 5, 6, 8, 9, 10 };
    int target = 9;
    int left = 0;
    int right = sizeof(nums) / sizeof(nums[0]) - 1;

    int index = binarySearch(nums, left, right, target);

    if (index != -1) {
        printf("Element found at index %d\n", index);
    }
    else {
        printf("Element not found in the array\n");
    }

    return 0;
}