/*
	Write a function that takes two integers by pointer and swaps their values.
*/

#include <stdio.h>

void swap(int* arg_one, int* arg_two);

int main(void)
{
	int num_one = 10, num_two = 20;

	printf("num_one: %d\n", num_one);

	printf("num_two: %d\n", num_two);

	puts("/=========================/");

	swap(&num_one, &num_two);

	printf("num_one: %d\n", num_one);

	printf("num_two: %d\n", num_two);

	return 0;
}

void swap(int* arg_a, int* arg_b)
{
	*arg_a = *arg_a + *arg_b;
	*arg_b = *arg_a - *arg_b;
	*arg_a = *arg_a - *arg_b;
}
