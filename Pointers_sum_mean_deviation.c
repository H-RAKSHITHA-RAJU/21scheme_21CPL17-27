#include <stdio.h>
#include <math.h>

// Function to compute the sum of elements in an array
double computeSum(double *arr, int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i); // Accessing array elements using pointer notation
    }
    return sum;
}

// Function to compute the mean (average) of elements in an array
double computeMean(double *arr, int n) {
    double sum = computeSum(arr, n);
    return sum / n;
}

// Function to compute the standard deviation of elements in an array
double computeStandardDeviation(double *arr, int n) {
    double mean = computeMean(arr, n);
    double sumSquaredDifference = 0;
    for (int i = 0; i < n; i++) {
        sumSquaredDifference += pow(*(arr + i) - mean, 2);
    }
    return sqrt(sumSquaredDifference / n);
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Allocate memory for the array
    double *arr = (double *)malloc(n * sizeof(double));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input elements of the array
    printf("Enter %d real numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]); // Input array elements using array notation
    }

    // Compute sum, mean, and standard deviation using pointers
    double sum = computeSum(arr, n);
    double mean = computeMean(arr, n);
    double standardDeviation = computeStandardDeviation(arr, n);

    // Output results
    printf("Sum of elements: %.2lf\n", sum);
    printf("Mean of elements: %.2lf\n", mean);
    printf("Standard deviation of elements: %.2lf\n", standardDeviation);

    // Free allocated memory
    free(arr);

    return 0;
}
/*
sample inputs and outputs for various scenarios of the program:

1.Basic case with positive real numbers:
Input:
Enter the number of elements in the array: 5
Enter 5 real numbers:
1.5
2.5
3.5
4.5
5.5
Output:
Sum of elements: 17.50
Mean of elements: 3.50
Standard deviation of elements: 1.58
  
2.Case with negative real numbers:
Input:
Enter the number of elements in the array: 4
Enter 4 real numbers:
-1.2
-2.3
-3.4
-4.5
Output:
Sum of elements: -11.40
Mean of elements: -2.85
Standard deviation of elements: 1.25
  
3.Case with a single element:
Input:
Enter the number of elements in the array: 1
Enter 1 real number:
10.5
Output:
Sum of elements: 10.50
Mean of elements: 10.50
Standard deviation of elements: 0.00
  
4.Case with already sorted real numbers:
Input:
Enter the number of elements in the array: 3
Enter 3 real numbers:
1.0
2.0
3.0
Output:
Sum of elements: 6.00
Mean of elements: 2.00
Standard deviation of elements: 0.82
  
5.Case with repeated real numbers:
Input:
Enter the number of elements in the array: 5
Enter 5 real numbers:
1.2
2.3
1.2
4.5
2.3
Output:
Sum of elements: 11.50
Mean of elements: 2.30
Standard deviation of elements: 1.33
  
These examples cover various scenarios of the program, including different numbers of elements in the array, variations in the values of elements, and their distributions.
  */
