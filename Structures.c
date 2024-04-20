#include <stdio.h>
#include <stdlib.h>

// Define a structure to represent a student
typedef struct {
    char name[50];
    int rollNumber;
    float marks;
} Student;

// Function to read details of N students
void readStudents(Student *students, int n) {
    printf("Enter details of %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
}

// Function to calculate the average marks of N students
float calculateAverageMarks(Student *students, int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += students[i].marks;
    }
    return sum / n;
}

// Function to print students scoring above and below the average marks
void printStudentsAboveBelowAverage(Student *students, int n, float average) {
    printf("\nStudents scoring above average marks (%.2f):\n", average);
    printf("------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        if (students[i].marks > average) {
            printf("Name: %s, Roll Number: %d, Marks: %.2f\n", students[i].name, students[i].rollNumber, students[i].marks);
        }
    }
    printf("\nStudents scoring below average marks (%.2f):\n", average);
    printf("------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        if (students[i].marks < average) {
            printf("Name: %s, Roll Number: %d, Marks: %.2f\n", students[i].name, students[i].rollNumber, students[i].marks);
        }
    }
}

int main() {
    int n;
    float average;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Allocate memory for students
    Student *students = (Student *)malloc(n * sizeof(Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Read details of students
    readStudents(students, n);

    // Calculate average marks
    average = calculateAverageMarks(students, n);

    // Print students scoring above and below average marks
    printStudentsAboveBelowAverage(students, n, average);

    // Free allocated memory
    free(students);

    return 0;
}
/* sample input and output

Input:
Enter the number of students: 3
Enter details of 3 students:
Student 1:
Name: Alice
Roll Number: 101
Marks: 85
Student 2:
Name: Bob
Roll Number: 102
Marks: 75
Student 3:
Name: Charlie
Roll Number: 103
Marks: 90
  
Output:
Students scoring above average marks (83.33):
------------------------------------------------
Name: Alice, Roll Number: 101, Marks: 85.00
Name: Charlie, Roll Number: 103, Marks: 90.00

Students scoring below average marks (83.33):
------------------------------------------------
Name: Bob, Roll Number: 102, Marks: 75.00
  */
