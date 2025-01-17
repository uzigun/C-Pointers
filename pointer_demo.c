/*
	Write a program that declares an integer variable and a pointer to that integer. 
	Initialize the variable and use the pointer to print the variable's value.
*/

#include <stdio.h>

int main(void)
{
	int number = 10;

	int* ptr = &number;

	printf("Value of number variable is: %d\n", *ptr);

	return 0;
}
