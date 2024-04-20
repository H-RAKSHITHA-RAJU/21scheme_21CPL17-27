/*
In this implementation:
stringLengthPointer: calculates the length of a string using a pointer to the first character of the string. This technique is efficient as it only requires traversing the string once.
stringComparePointer: compares two strings using pointers. It compares the corresponding characters of both strings until a difference is found or until the end of one of the strings is reached.
stringConcatenatePointer: concatenates two strings using pointers. It dynamically allocates memory for the concatenated string and then copies the characters of both strings into the newly allocated memory.
*/
  
#include <stdio.h>
#include <stdlib.h>

// Function to calculate the length of a string (using pointer)
int stringLengthPointer(const char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

// Function to compare two strings (using pointer)
int stringComparePointer(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(const unsigned char*)str1 - *(const unsigned char*)str2;
}

// Function to concatenate two strings (using pointer)
char *stringConcatenatePointer(const char *str1, const char *str2) {
    int len1 = stringLengthPointer(str1);
    int len2 = stringLengthPointer(str2);
    char *result = (char *)malloc(len1 + len2 + 1); // +1 for the null terminator
    if (result == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    char *temp = result;
    while (*str1) {
        *temp = *str1;
        str1++;
        temp++;
    }
    while (*str2) {
        *temp = *str2;
        str2++;
        temp++;
    }
    *temp = '\0'; // Add null terminator
    return result;
}

int main() {
    const char *str1 = "Hello";
    const char *str2 = "World";
    
    // Using pointer parameter passing techniques
    printf("String Length (Pointer): %d\n", stringLengthPointer(str1));
    printf("String Compare (Pointer): %d\n", stringComparePointer(str1, str2));
    char *concatenatedStringPointer = stringConcatenatePointer(str1, str2);
    printf("String Concatenate (Pointer): %s\n", concatenatedStringPointer);
    free(concatenatedStringPointer);

    return 0;
}

/*
 sample inputs and outputs for each string operation function:

1.String Length (Pointer):
Input:
const char *str = "Hello";
Output:
String Length (Pointer): 5
  
2.String Compare (Pointer):
Input:
const char *str1 = "Hello";
const char *str2 = "World";
Output:
String Compare (Pointer): -15

3.String Concatenate (Pointer):
Input:
const char *str1 = "Hello";
const char *str2 = "World";
Output:
String Concatenate (Pointer): HelloWorld

These examples cover all three string operation functions and demonstrate their behavior with different inputs.
  */
