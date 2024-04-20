/* 
Algorithm: Simple Calculator Simulation in C

1. Display menu of operations:
   - Addition
   - Subtraction
   - Multiplication
   - Division

2. Prompt the user to select an operation and input two numbers.
3. Read the user's choice of operation and the two numbers.

4. Perform the selected operation:
   a. If the operation is addition:
      - Add the two numbers and store the result.
   b. If the operation is subtraction:
      - Subtract the second number from the first one and store the result.
   c. If the operation is multiplication:
      - Multiply the two numbers and store the result.
   d. If the operation is division:
      - Check if the second number is not zero.
      - If it is zero, display an error message and return.
      - Otherwise, divide the first number by the second one and store the result.

5. Display the result to the user.

6. Ask the user if they want to perform another calculation:
   - If yes, repeat steps 2-5.
   - If no, exit the program. 
*/


#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Input operation from user
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    // Input operands from user
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform operation based on the operator
    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("Error! Division by zero.\n");
                return 1; // Exit with error
            }
            result = num1 / num2;
            break;
        default:
            printf("Error! Invalid operator.\n");
            return 1; // Exit with error
    }

    // Display result
    printf("Result: %lf\n", result);

    return 0; // Exit successfully
}

/*
sample inputs and outputs for all possible conditions:

Valid input, addition operation:
Input:
Enter an operator (+, -, *, /): +
Enter two numbers: 10 5

Output:
Result: 15.000000

Valid input, subtraction operation:
Input:
Enter an operator (+, -, *, /): -
Enter two numbers: 10 5

Output:
Result: 5.000000

Valid input, multiplication operation:
Input:
Enter an operator (+, -, *, /): *
Enter two numbers: 10 5

Output:
Result: 50.000000

Valid input, division operation:
Input:
Enter an operator (+, -, *, /): /
Enter two numbers: 10 5

Output:
Result: 2.000000

Invalid operator input:
Input:
Enter an operator (+, -, *, /): %

Output:
Error! Invalid operator.

Division by zero input:
Input:
Enter an operator (+, -, *, /): /
Enter two numbers: 10 0

Output:
Error! Division by zero.

These examples cover all possible scenarios based on the user's input.
  */
