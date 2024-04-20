/*
algorithm for the provided C program to calculate electricity charges:

1.Prompt the user for input:
  Display a message asking the user to enter their name.
  Display a message asking the user to enter the number of units consumed.
2.Accept user input:
  Read the user's name into a character array.
  Read the number of units consumed into an integer variable.
3.Calculate charges:
  Initialize variables for meter charge, charge for the first 200 units, charge for the next 100 units, and charge for units above 300.
  Calculate the charge for the first 200 units by multiplying the number of units by 0.80.
  Calculate the charge for the next 100 units by multiplying the number of units by 0.90.
  If the number of units is greater than 300, calculate the charge for units above 300 by multiplying the excess units by 1.0.
  Calculate the total charge by summing up all the charges.
4.Apply surcharge:
  If the total charge is more than Rs. 400, calculate the surcharge by multiplying the total charge by 0.15.
  Add the surcharge to the total charge.
5.Print the charges:
  Print the user's name and a table showing the meter charge, charge for the first 200 units, charge for the next 100 units, charge for units above 300, total charges before surcharge, surcharge (if applicable), and total charges after surcharge.
6.Exit the program.
*/

#include <stdio.h>

int main() {
    char name[50];
    int units;
    double total_charge, surcharge;

    // Input user's name and units consumed
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Calculate charges
    double meter_charge = 100.0;
    double charge_200 = 0.8 * 200;
    double charge_300 = 0.9 * 100;
    double charge_above_300 = (units > 300) ? (units - 300) * 1.0 : 0;

    total_charge = meter_charge + charge_200 + charge_300 + charge_above_300;

    // Apply surcharge if total amount exceeds Rs. 400
    if (total_charge > 400) {
        surcharge = 0.15 * total_charge;
        total_charge += surcharge;
    } else {
        surcharge = 0.0;
    }

    // Print the charges
    printf("\nElectricity Charges for %s:\n", name);
    printf("--------------------------------------------------\n");
    printf("Meter Charge: Rs. %.2lf\n", meter_charge);
    printf("Charge for first 200 units: Rs. %.2lf\n", charge_200);
    printf("Charge for next 100 units: Rs. %.2lf\n", charge_300);
    printf("Charge for units above 300: Rs. %.2lf\n", charge_above_300);
    printf("--------------------------------------------------\n");
    printf("Total Charges (before surcharge): Rs. %.2lf\n", total_charge - surcharge);
    printf("Surcharge (if applicable): Rs. %.2lf\n", surcharge);
    printf("--------------------------------------------------\n");
    printf("Total Charges (after surcharge): Rs. %.2lf\n", total_charge);

    return 0;
}
/*
sample inputs and outputs for various scenarios based on the conditions specified in the problem:

1.Normal usage within the first 200 units:
Input:
Enter your name: John
Enter the number of units consumed: 150

Output:
Electricity Charges for John:
--------------------------------------------------
Meter Charge: Rs. 100.00
Charge for first 200 units: Rs. 120.00
Charge for next 100 units: Rs. 90.00
Charge for units above 300: Rs. 0.00
--------------------------------------------------
Total Charges (before surcharge): Rs. 310.00
Surcharge (if applicable): Rs. 0.00
--------------------------------------------------
Total Charges (after surcharge): Rs. 310.00

2.Usage exceeding 300 units:
Input:
Enter your name: Alice
Enter the number of units consumed: 350

Output:
Electricity Charges for Alice:
--------------------------------------------------
Meter Charge: Rs. 100.00
Charge for first 200 units: Rs. 160.00
Charge for next 100 units: Rs. 90.00
Charge for units above 300: Rs. 50.00
--------------------------------------------------
Total Charges (before surcharge): Rs. 400.00
Surcharge (if applicable): Rs. 60.00
--------------------------------------------------
Total Charges (after surcharge): Rs. 460.00

3.Usage exactly 300 units:
Input:
Enter your name: Bob
Enter the number of units consumed: 300

Output:
Electricity Charges for Bob:
--------------------------------------------------
Meter Charge: Rs. 100.00
Charge for first 200 units: Rs. 160.00
Charge for next 100 units: Rs. 90.00
Charge for units above 300: Rs. 0.00
--------------------------------------------------
Total Charges (before surcharge): Rs. 350.00
Surcharge (if applicable): Rs. 0.00
--------------------------------------------------
Total Charges (after surcharge): Rs. 350.00

4.Minimum usage below 200 units:
Input:
Enter your name: Emma
Enter the number of units consumed: 100

Output:
Electricity Charges for Emma:
--------------------------------------------------
Meter Charge: Rs. 100.00
Charge for first 200 units: Rs. 80.00
Charge for next 100 units: Rs. 0.00
Charge for units above 300: Rs. 0.00
--------------------------------------------------
Total Charges (before surcharge): Rs. 180.00
Surcharge (if applicable): Rs. 0.00
--------------------------------------------------
Total Charges (after surcharge): Rs. 180.00

5.Minimum usage below 200 units with surcharge:
Input:
Enter your name: Lily
Enter the number of units consumed: 50

Output:
Electricity Charges for Lily:
--------------------------------------------------
Meter Charge: Rs. 100.00
Charge for first 200 units: Rs. 40.00
Charge for next 100 units: Rs. 0.00
Charge for units above 300: Rs. 0.00
--------------------------------------------------
Total Charges (before surcharge): Rs. 140.00
Surcharge (if applicable): Rs. 21.00
--------------------------------------------------
Total Charges (after surcharge): Rs. 161.00

These examples cover different scenarios of electricity usage and demonstrate how the program calculates the charges accordingly.
  */
