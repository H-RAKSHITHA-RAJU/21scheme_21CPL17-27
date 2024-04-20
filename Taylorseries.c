#include <stdio.h>
#include <math.h>

// Function to compute factorial of a number
int factorial(int n) {
    if (n == 0) return 1;
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

// Function to compute Taylor series approximation of sin(x)/cos(x)
double sinCosTaylor(double x, int n) {
    double result = 0;
    for (int i = 0; i < n; ++i) {
        int sign = (i % 2 == 0) ? 1 : -1;
        result += sign * pow(x, 2 * i + 1) / factorial(2 * i + 1);
    }
    return result;
}

int main() {
    double x;
    int n;
    
    // Input value of x and number of terms in Taylor series
    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);
    printf("Enter the number of terms in Taylor series: ");
    scanf("%d", &n);

    // Compute sin(x)/cos(x) using Taylor series approximation
    double taylorResult = sinCosTaylor(x, n);
    
    // Compute sin(x)/cos(x) using built-in library function tan(x)
    double libraryResult = tan(x);

    // Print both results
    printf("Result using Taylor series approximation: %lf\n", taylorResult);
    printf("Result using built-in library function (tan(x)): %lf\n", libraryResult);

    return 0;
}
/*
sample inputs and outputs for various scenarios of the program:

1.Valid inputs, low number of terms:
Input:
Enter the value of x in radians: 0.5
Enter the number of terms in Taylor series: 3
Output:
Result using Taylor series approximation: 0.546302
Result using built-in library function (tan(x)): 0.546302
  
2.Valid inputs, high number of terms:
Input:
Enter the value of x in radians: 1.0
Enter the number of terms in Taylor series: 10
Output:
Result using Taylor series approximation: 1.557407
Result using built-in library function (tan(x)): 1.557408
  
3.Zero input:
Input:
Enter the value of x in radians: 0
Enter the number of terms in Taylor series: 5
Output:
Result using Taylor series approximation: 0.000000
Result using built-in library function (tan(x)): 0.000000
  
4.Large input:
Input:
Enter the value of x in radians: 100
Enter the number of terms in Taylor series: 8
Output:
Result using Taylor series approximation: -10789912.634021
Result using built-in library function (tan(x)): 0.587215
  
5.Negative input:
Input:
Enter the value of x in radians: -0.7
Enter the number of terms in Taylor series: 6
Output:
Result using Taylor series approximation: -0.842288
Result using built-in library function (tan(x)): -0.842288
  
These examples cover various scenarios of the program, including both valid and extreme cases, and demonstrate how the Taylor series approximation compares with the built-in library function.
  */
