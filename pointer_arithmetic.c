/*
  Demonstrates pointer arithmetic, pointer dereferencing, and manipulating array values through pointers.
*/

#include <stdio.h>

int main(void)
{
    // Declare variables
    int x = 10, y = 20, z[2] = {30, 50};
    int* ptr;

    // Pointing to x, then assigning its value to y
    ptr = &x;
    y = *ptr;  // y = 10

    // Print the updated value of y
    printf("Value of y = \t%d\n", y); // Output: 10

    // Modify the value of x through the pointer
    *ptr = 40;

    // Print the value of x through the pointer
    printf("Value of *ptr = \t%d\n", *ptr); // Output: 40

    // Pointing to the first element of the array z
    ptr = &z[0];

    // Print the value at the first element of z
    printf("Value of z[0] = \t%d\n", *ptr); // Output: 30

    // Increment the first element of z through the pointer
    *ptr += 1;
    printf("Value of z[0] after increment = \t%d\n", *ptr); // Output: 31

    // Pre-increment the value of z[0]
    ++*ptr;
    printf("Value of z[0] after pre-increment = \t%d\n", *ptr); // Output: 32

    // Post-increment the value of z[0]
    (*ptr)++;
    printf("Value of z[0] after post-increment = \t%d\n", *ptr); // Output: 33

    // Move the pointer to the second element of the array z
    ptr += 1;
    printf("Value of z[1] = \t%d\n", *ptr); // Output: 50

    // Copy the pointer value into a new pointer iq
    int* iq = ptr;
    printf("Value of iq (pointing to z[1]) = \t%d\n", *iq); // Output: 50

    return 0;
}
