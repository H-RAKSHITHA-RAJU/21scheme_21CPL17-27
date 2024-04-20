#include <stdio.h>
#include <math.h>

// Function to convert binary to decimal recursively
int binaryToDecimalRecursive(int binary, int exponent) {
    // Base case: if binary is 0, return 0
    if (binary == 0) {
        return 0;
    }
    // Recursive step: extract the rightmost digit, multiply by 2 raised to the exponent,
    // and add the result to the recursive call with the next digit and incremented exponent
    return (binary % 10) * pow(2, exponent) + binaryToDecimalRecursive(binary / 10, exponent + 1);
}

int main() {
    int binary;
    
    // Input the binary number
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    // Convert binary to decimal using the recursive function
    int decimal = binaryToDecimalRecursive(binary, 0);

    // Output the result
    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
/*
Input:
Enter a binary number: 1010
Output:
Decimal equivalent: 10
  */
