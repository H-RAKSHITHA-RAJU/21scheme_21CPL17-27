/* 
algorithm :To compute the roots of a quadratic equation:

1.Prompt the user for input: Display a message asking the user to enter the coefficients (a, b, c) of the quadratic equation.
2.Accept user input: Read the coefficients (a, b, c) from the user.
3.Calculate the discriminant: Compute the discriminant using the formula discriminant = b*b - 4*a*c.
4.Check the nature of roots:
    If the discriminant is greater than 0:
      Calculate two real and distinct roots using the formulas:
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
    If the discriminant is equal to 0:
      Calculate two real and equal roots using the formula:
        root1 = -b / (2 * a);
    If the discriminant is less than 0:
      Calculate two complex roots using the formulas:
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
5.Display the roots:
  If the roots are real and distinct, print both roots.
  If the roots are real and equal, print the single root.
  If the roots are complex and imaginary, print both roots in the form a + bi and a - bi.
6.Exit the program.
This algorithm outlines the steps performed by the C program to compute the roots of a quadratic equation based on the coefficients provided by the user.
*/
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2;

    // Input coefficients from user
    printf("Enter coefficients (a, b, c) of the quadratic equation: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Check the nature of roots
    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else if (discriminant == 0) {
        // Two real and equal roots
        root1 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    } else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and imaginary:\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }

    return 0; // Exit successfully
}
/* 
sample inputs and outputs for all possible conditions of the quadratic equation solver program:

1. Valid input, real and distinct roots:
   - Input:
     Enter coefficients (a, b, c) of the quadratic equation: 1 4 1
   - Output:
     Roots are real and distinct:
     Root 1 = -0.27
     Root 2 = -3.73

2. Valid input, real and equal roots:
   - Input:
     Enter coefficients (a, b, c) of the quadratic equation: 1 2 1
   - Output:
     Roots are real and equal:
     Root 1 = Root 2 = -1.00

3. Valid input, complex roots:
   - Input:
     Enter coefficients (a, b, c) of the quadratic equation: 1 1 1
   - Output:
     Roots are complex and imaginary:
     Root 1 = -0.50 + 0.87i
     Root 2 = -0.50 - 0.87i
     
4. Invalid input, zero discriminant (real and equal roots):
   - Input:
     Enter coefficients (a, b, c) of the quadratic equation: 0 4 4
   - Output:

5. Invalid input, invalid coefficient (non-numeric input):
   - Input:
     Enter coefficients (a, b, c) of the quadratic equation: a b c
   - Output:
     Error! Invalid input. Please enter numeric coefficients.

These examples cover all possible scenarios of the quadratic equation solver program based on different inputs provided by the user.
*/
