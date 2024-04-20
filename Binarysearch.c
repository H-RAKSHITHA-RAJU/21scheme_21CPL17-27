#include <stdio.h>

// Function to perform binary search on an array
// arr: Array to search
// size: Size of the array
// target: Element to search for
// Returns the index of the target element if found, otherwise returns -1
int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // If the target is found at mid, return mid
        if (arr[mid] == target) {
            return mid;
        }
        // If the target is greater than the element at mid, search in the right half
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        // If the target is less than the element at mid, search in the left half
        else {
            high = mid - 1;
        }
    }

    // If the target is not found, return -1
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    // Perform binary search
    int index = binarySearch(arr, size, target);

    // Print the result
    if (index != -1) {
        printf("Element %d found at index %d\n", target, index);
    } else {
        printf("Element %d not found in the array\n", target);
    }

    return 0;
}
/*
sample inputs and outputs for different scenarios of binary search on integers:

Element found in the middle:
Input:
Array: {2, 5, 8, 12, 16, 23, 38, 56, 72, 91}
Target: 16
Output:
Element 16 found at index 4
  
Element found at the beginning:
Input:
Array: {2, 5, 8, 12, 16, 23, 38, 56, 72, 91}
Target: 2
Output:
Element 2 found at index 0
  
Element found at the end:
Input:
Array: {2, 5, 8, 12, 16, 23, 38, 56, 72, 91}
Target: 91
Output:
Element 91 found at index 9

Element not found:
Input:
Array: {2, 5, 8, 12, 16, 23, 38, 56, 72, 91}
Target: 30
Output:
Element 30 not found in the array

These examples cover various scenarios of binary search on integers and demonstrate how the program handles different cases.
  */
