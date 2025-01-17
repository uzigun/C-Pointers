/*
    Write a program in C to show the basic declaration of a pointer.
*/

#include <stdio.h>

int main(void)
{
    // Declare an integer variable and initialize it with a value
    int num = 10;

    // Declare a pointer and store the memory address of 'num' using '&'
    int* ptr = &num;

    // Print the address of 'num' using its name
    printf("Address of 'num' (using variable): %p\n", &num);

    // Print the address of 'num' using the pointer
    printf("Address of 'num' (using pointer): %p\n", ptr);

    // Print the value of 'num' using its name
    printf("Value of 'num' (using variable): %d\n", num);

    // Print the value of 'num' using the pointer
    printf("Value of 'num' (using pointer): %d\n", *ptr);

    return 0;
}
