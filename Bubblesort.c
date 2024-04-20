#include <stdio.h>

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        // Last i elements are already in place
        for (j = 0; j < n-i-1; j++) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[100], n, i;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input the elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Perform Bubble Sort
    bubbleSort(arr, n);

    // Print the sorted array
    printf("\nSorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
/*
sample inputs and outputs for various scenarios of the program:

1.Basic case with positive integers:
Input:
Enter the number of elements: 5
Enter 5 elements:
3 1 4 2 5
Output:
Sorted array:
1 2 3 4 5

2.Case with negative integers:
Input:
Enter the number of elements: 6
Enter 6 elements:
-3 -1 -5 -2 -4 -6
Output:
Sorted array:
-6 -5 -4 -3 -2 -1

3.Case with repeated elements:
Input:
Enter the number of elements: 7
Enter 7 elements:
5 2 3 5 1 3 2
Output:
Sorted array:
1 2 2 3 3 5 5

4.Case with a single element:
Input:
Enter the number of elements: 1
Enter 1 elements:
10
Output:
Sorted array:
10

5.Case with already sorted elements:
Input:
Enter the number of elements: 4
Enter 4 elements:
1 2 3 4
Output:
Sorted array:
1 2 3 4

6.Case with descending order elements:
Input:
Enter the number of elements: 5
Enter 5 elements:
5 4 3 2 1
Output:
Sorted array:
1 2 3 4 5

These examples cover various scenarios of the program, including different types of input arrays, and demonstrate how the Bubble Sort algorithm sorts them.
  */
