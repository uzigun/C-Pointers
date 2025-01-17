/*
    This program demonstrates passing arguments by pointer to a function and modifying values inside the function.
*/

#include <stdio.h>

// Function that modifies the third argument based on the first two arguments
void update_value(int* num1, int* num2, double* result);

int main(void)
{
    // Initialize variables
    int first_value = 10, second_value = 20;
    double third_value = 4.7;

    // Display the initial value of third_value
    printf("Initial value of third_value:\t%e\n", third_value);
    puts("-------------------------------");

    // Declare a function pointer and assign it to update_value function
    void (*ptr_to_function)(int*, int*, double*) = update_value;

    // Call the function using the pointer, modifying the third_value based on first_value and second_value
    ptr_to_function(&first_value, &second_value, &third_value);

    // Display the modified value of third_value
    printf("Modified value of third_value:\t%e\n", third_value);

    return 0;
}

// Function definition
void update_value(int* num1, int* num2, double* result)
{
    // Calculate the new value for the result
    double temp_value = (*num1 - *num2) + *result;

    // Update the value of third argument (result)
    *result = temp_value;
}
